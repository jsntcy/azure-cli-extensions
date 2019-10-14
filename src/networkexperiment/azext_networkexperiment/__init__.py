# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------

from azure.cli.core import AzCommandsLoader

from azext_networkexperiment._help import helps  # pylint: disable=unused-import


class FrontDoorCommandsLoader(AzCommandsLoader):

    def __init__(self, cli_ctx=None):
        from azure.cli.core.commands import CliCommandType
        from azext_networkexperiment._client_factory import cf_networkexperiment
        networkexperiment profiles_custom = CliCommandType(
            operations_tmpl='azext_networkexperiment.custom#{}',
            client_factory=cf_networkexperiment)
        super( FrontDoorCommandsLoader, self).__init__(cli_ctx=cli_ctx,
                                                       custom_command_type=networkexperiment profiles_custom)

    def load_command_table(self, args):
        from azext_networkexperiment.commands import load_command_table
        load_command_table(self, args)
        return self.command_table

    def load_arguments(self, command):
        from azext_networkexperiment._params import load_arguments
        load_arguments(self, command)


COMMAND_LOADER_CLS =  FrontDoorCommandsLoader