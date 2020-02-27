# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------
# pylint: disable=line-too-long
# pylint: disable=too-many-lines
# pylint: disable=too-many-statements

from azure.cli.core.commands.parameters import (
    tags_type,
    get_enum_type,
    resource_group_name_type,
    get_location_type
)
from azure.cli.core.commands.validators import get_default_location_from_resource_group
from knack.arguments import CLIArgumentType

from src.databox.azext_databox._validators import parse_storage_account


def load_arguments(self, _):

    job_name_type = CLIArgumentType(
        help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 '
             'characters in length and use any alphanumeric and underscore only')

    storage_account_type = CLIArgumentType(options_list='--storage-account',
                                           help='The name or ID of the storage account.',
                                           validator=parse_storage_account, id_part='name')

    with self.argument_context('databox job create') as c:
        c.argument('job_name', job_name_type)
        c.argument('location', arg_type=get_location_type(self.cli_ctx), default=None, validator=get_default_location_from_resource_group)
        c.argument('tags', tags_type)
        c.argument('sku_name', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), help='The sku name.')
        c.argument('contact_name', help='Contact name of the person.')
        c.argument('phone', help='Phone number of the contact person.')
        c.argument('details_contact_details_mobile', help='Mobile number of the contact person.')
        c.argument('email_list', help='List of Email-ids to be notified about job progress.', nargs='+')
        c.argument('street_address1', help='Street Address line 1.')
        c.argument('street_address2', help='Street Address line 2.')
        c.argument('street_address3', help='Street Address line 3.')
        c.argument('city', help='Name of the City.')
        c.argument('state_or_province', help='Name of the State or Province.')
        c.argument('country', help='Name of the Country.')
        c.argument('postal_code', help='Postal code.')
        c.argument('company_name', help='Name of the company.')
        c.argument('address_type', arg_type=get_enum_type(['None', 'Residential', 'Commercial']), help='Type of address.')
        c.argument('storage_account_resource_id', help='List of Resource Ids of Storage Accounts. Atleast one is mandatory.')

    with self.argument_context('databox job delete') as c:
        c.argument('job_name', job_name_type)

    with self.argument_context('databox job show') as c:
        c.argument('job_name', job_name_type)

    with self.argument_context('databox job cancel') as c:
        c.argument('job_name', job_name_type)
        c.argument('reason', help='Reason for cancellation.')

    with self.argument_context('databox job list-credentials') as c:
        c.argument('job_name', job_name_type)
