# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------

import random
import json
import re
import sys
import platform
import requests
import colorama  # pylint: disable=import-error


from azure.cli.core import telemetry as telemetry_core
from knack.prompting import prompt
from knack.log import get_logger
logger = get_logger(__name__)

WAIT_MESSAGE = ['I\'m an AI bot (learn more: aka.ms/aladdin); Let me see how I can help you...']

EXTENSION_NAME = 'find'

FIND_EXTENSION_PREFIX = 'Context.Default.Extension.Find.'


def process_query(cli_term):
    print(random.choice(WAIT_MESSAGE))
    response = call_aladdin_service(cli_term)

    if response.status_code != 200:
        logger.error('[?] Unexpected Error: [HTTP {0}]: Content: {1}'.format(response.status_code, response.content))
    else:
        if (platform.system() == 'Windows' and should_enable_styling()):
            colorama.init(convert=True)

        answer_list = json.loads(response.content)
        if (not answer_list or answer_list[0]['source'] == 'bing'):
            print("\nSorry I am not able to help with [" + cli_term + "]."
                  "\nTry typing the beginning of a command e.g. " + style_message('az vm') + ".")
        else:
            print("\nHere are the most common ways to use [" + cli_term + "]: \n")
            num_results_to_show = min(3, len(answer_list))
            for i in range(num_results_to_show):
                current_title = answer_list[i]['title'].strip()
                current_snippet = answer_list[i]['snippet'].strip()
                if current_title.startswith("az "):
                    current_title, current_snippet = current_snippet, current_title
                    current_title = current_title.split('\r\n')[0]
                elif '```azurecli\r\n' in current_snippet:
                    start_index = current_snippet.index('```azurecli\r\n') + len('```azurecli\r\n')
                    current_snippet = current_snippet[start_index:]
                current_snippet = current_snippet.replace('```', '').replace(current_title, '').strip()
                current_snippet = re.sub(r'\[.*\]', '', current_snippet).strip()
                print(style_message(current_title))
                print(current_snippet)

                print("")
            feedback = prompt("[Enter to close. Press + or - to give feedback]:")
            if feedback in ['+', '-']:
                print('Wow, you are a true hero!')
                print("""\
        O_
       """ + style_message("""<T>""") + """`-.
        """ + style_message("""|""") + """`-‘
        """ + style_message("""I""") + """
                        """)
                print('My human overlords review each of these reports; I\'m told these reports makes me smarter.')
                print('Send us more feedback by email: aladdindoc@microsoft.com')
            properties = {}
            set_custom_properties(properties, 'Feedback', feedback)
            telemetry_core.add_extension_event(EXTENSION_NAME, properties)


def style_message(msg):
    if should_enable_styling():
        try:
            msg = colorama.Style.BRIGHT + msg + colorama.Style.RESET_ALL
        except KeyError:
            pass
    return msg


def should_enable_styling():
    try:
        # Style if tty stream available
        if sys.stdout.isatty():
            return True
    except AttributeError:
        pass
    return False


def set_custom_properties(prop, name, value):
    if name and value is not None:
        # 10 characters limit for strings
        prop['{}{}'.format(FIND_EXTENSION_PREFIX, name)] = value[:10] if isinstance(value, str) else value


def call_aladdin_service(query):
    context = {
        'session_id': telemetry_core._session._get_base_properties()['Reserved.SessionId'],  # pylint: disable=protected-access
        'subscription_id': telemetry_core._get_azure_subscription_id(),  # pylint: disable=protected-access
        'client_request_id': telemetry_core._session.application.data['headers']['x-ms-client-request-id'],  # pylint: disable=protected-access
        'installation_id': telemetry_core._get_installation_id()  # pylint: disable=protected-access
    }

    service_input = {
        'paragraphText': "<div id='dummyHeader'></div>",
        'currentPageUrl': "",
        'query': "ALADDIN-CLI:" + query,
        'context': context
    }

    api_url = 'https://aladdinservice-prod.azurewebsites.net/api/aladdin/generateCards'
    headers = {'Content-Type': 'application/json'}

    response = requests.post(api_url, headers=headers, json=service_input)

    return response
