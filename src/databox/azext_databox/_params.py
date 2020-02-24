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


def load_arguments(self, _):

    with self.argument_context('databox job create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)
        c.argument('sku_name', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), help='The sku name.')
        c.argument('sku_display_name', help='The display name of the sku.')
        c.argument('sku_family', help='The sku family.')
        c.argument('details_contact_details_contact_name', help='Contact name of the person.')
        c.argument('details_contact_details_phone', help='Phone number of the contact person.')
        c.argument('details_contact_details_phone_extension', help='Phone extension number of the contact person.')
        c.argument('details_contact_details_mobile', help='Mobile number of the contact person.')
        c.argument('details_contact_details_email_list', help='List of Email-ids to be notified about job progress.', nargs='+')
        c.argument('details_contact_details_notification_preference', help='Notification preference for a job stage.', nargs='+')
        c.argument('details_shipping_address_street_address1', help='Street Address line 1.')
        c.argument('details_shipping_address_street_address2', help='Street Address line 2.')
        c.argument('details_shipping_address_street_address3', help='Street Address line 3.')
        c.argument('details_shipping_address_city', help='Name of the City.')
        c.argument('details_shipping_address_state_or_province', help='Name of the State or Province.')
        c.argument('details_shipping_address_country', help='Name of the Country.')
        c.argument('details_shipping_address_postal_code', help='Postal code.')
        c.argument('details_shipping_address_zip_extended_code', help='Extended Zip Code.')
        c.argument('details_shipping_address_company_name', help='Name of the company.')
        c.argument('details_shipping_address_address_type', arg_type=get_enum_type(['None', 'Residential', 'Commercial']), help='Type of address.')
        c.argument('destination_account_details', help='Destination account details.', nargs='+')

    with self.argument_context('databox job update') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)
        c.argument('sku_name', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), help='The sku name.')
        c.argument('sku_display_name', help='The display name of the sku.')
        c.argument('sku_family', help='The sku family.')
        c.argument('details_contact_details_contact_name', help='Contact name of the person.')
        c.argument('details_contact_details_phone', help='Phone number of the contact person.')
        c.argument('details_contact_details_phone_extension', help='Phone extension number of the contact person.')
        c.argument('details_contact_details_mobile', help='Mobile number of the contact person.')
        c.argument('details_contact_details_email_list', help='List of Email-ids to be notified about job progress.', nargs='+')
        c.argument('details_contact_details_notification_preference', help='Notification preference for a job stage.', nargs='+')
        c.argument('details_shipping_address_street_address1', help='Street Address line 1.')
        c.argument('details_shipping_address_street_address2', help='Street Address line 2.')
        c.argument('details_shipping_address_street_address3', help='Street Address line 3.')
        c.argument('details_shipping_address_city', help='Name of the City.')
        c.argument('details_shipping_address_state_or_province', help='Name of the State or Province.')
        c.argument('details_shipping_address_country', help='Name of the Country.')
        c.argument('details_shipping_address_postal_code', help='Postal code.')
        c.argument('details_shipping_address_zip_extended_code', help='Extended Zip Code.')
        c.argument('details_shipping_address_company_name', help='Name of the company.')
        c.argument('details_shipping_address_address_type', arg_type=get_enum_type(['None', 'Residential', 'Commercial']), help='Type of address.')
        c.argument('destination_account_details', help='Destination account details.', nargs='+')

    with self.argument_context('databox job delete') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')

    with self.argument_context('databox job show') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('job_name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')

    with self.argument_context('databox job list') as c:
        c.argument('resource_group', resource_group_name_type)

    with self.argument_context('databox job book-shipment-pick-up') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('start_time', help='Minimum date after which the pick up should commence, this must be in local time of pick up area.')
        c.argument('end_time', help='Maximum date before which the pick up should commence, this must be in local time of pick up area.')
        c.argument('shipment_location', help='Shipment Location in the pickup place. Eg.front desk')
        c.argument('reason', help='Reason for cancellation.')

    with self.argument_context('databox job cancel') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('start_time', help='Minimum date after which the pick up should commence, this must be in local time of pick up area.')
        c.argument('end_time', help='Maximum date before which the pick up should commence, this must be in local time of pick up area.')
        c.argument('shipment_location', help='Shipment Location in the pickup place. Eg.front desk')
        c.argument('reason', help='Reason for cancellation.')

    with self.argument_context('databox job list-credentials') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
