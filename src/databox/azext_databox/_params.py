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
from azext_databox.action import (
    PeeringAddDetailsContactDetailsNotificationPreference,
    PeeringAddDestinationAccountDetails
)


def load_arguments(self, _):

    with self.argument_context('databox operation list') as c:
        pass

    with self.argument_context('databox job create') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)
        c.argument('sku_name', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='The sku name.')
        c.argument('sku_display_name', id_part=None, help='The display name of the sku.')
        c.argument('sku_family', id_part=None, help='The sku family.')
        c.argument('details_contact_details_contact_name', id_part=None, help='Contact name of the person.')
        c.argument('details_contact_details_phone', id_part=None, help='Phone number of the contact person.')
        c.argument('details_contact_details_phone_extension', id_part=None, help='Phone extension number of the contact person.')
        c.argument('details_contact_details_mobile', id_part=None, help='Mobile number of the contact person.')
        c.argument('details_contact_details_email_list', id_part=None, help='List of Email-ids to be notified about job progress.', nargs='+')
        c.argument('details_contact_details_notification_preference', id_part=None, help='Notification preference for a job stage.', action=PeeringAddDetailsContactDetailsNotificationPreference, nargs='+')
        c.argument('details_shipping_address_street_address1', id_part=None, help='Street Address line 1.')
        c.argument('details_shipping_address_street_address2', id_part=None, help='Street Address line 2.')
        c.argument('details_shipping_address_street_address3', id_part=None, help='Street Address line 3.')
        c.argument('details_shipping_address_city', id_part=None, help='Name of the City.')
        c.argument('details_shipping_address_state_or_province', id_part=None, help='Name of the State or Province.')
        c.argument('details_shipping_address_country', id_part=None, help='Name of the Country.')
        c.argument('details_shipping_address_postal_code', id_part=None, help='Postal code.')
        c.argument('details_shipping_address_zip_extended_code', id_part=None, help='Extended Zip Code.')
        c.argument('details_shipping_address_company_name', id_part=None, help='Name of the company.')
        c.argument('details_shipping_address_address_type', arg_type=get_enum_type(['None', 'Residential', 'Commercial']), id_part=None, help='Type of address.')
        c.argument('destination_account_details', id_part=None, help='Destination account details.', action=PeeringAddDestinationAccountDetails, nargs='+')

    with self.argument_context('databox job update') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)
        c.argument('sku_name', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='The sku name.')
        c.argument('sku_display_name', id_part=None, help='The display name of the sku.')
        c.argument('sku_family', id_part=None, help='The sku family.')
        c.argument('details_contact_details_contact_name', id_part=None, help='Contact name of the person.')
        c.argument('details_contact_details_phone', id_part=None, help='Phone number of the contact person.')
        c.argument('details_contact_details_phone_extension', id_part=None, help='Phone extension number of the contact person.')
        c.argument('details_contact_details_mobile', id_part=None, help='Mobile number of the contact person.')
        c.argument('details_contact_details_email_list', id_part=None, help='List of Email-ids to be notified about job progress.', nargs='+')
        c.argument('details_contact_details_notification_preference', id_part=None, help='Notification preference for a job stage.', action=PeeringAddDetailsContactDetailsNotificationPreference, nargs='+')
        c.argument('details_shipping_address_street_address1', id_part=None, help='Street Address line 1.')
        c.argument('details_shipping_address_street_address2', id_part=None, help='Street Address line 2.')
        c.argument('details_shipping_address_street_address3', id_part=None, help='Street Address line 3.')
        c.argument('details_shipping_address_city', id_part=None, help='Name of the City.')
        c.argument('details_shipping_address_state_or_province', id_part=None, help='Name of the State or Province.')
        c.argument('details_shipping_address_country', id_part=None, help='Name of the Country.')
        c.argument('details_shipping_address_postal_code', id_part=None, help='Postal code.')
        c.argument('details_shipping_address_zip_extended_code', id_part=None, help='Extended Zip Code.')
        c.argument('details_shipping_address_company_name', id_part=None, help='Name of the company.')
        c.argument('details_shipping_address_address_type', arg_type=get_enum_type(['None', 'Residential', 'Commercial']), id_part=None, help='Type of address.')
        c.argument('destination_account_details', id_part=None, help='Destination account details.', action=PeeringAddDestinationAccountDetails, nargs='+')

    with self.argument_context('databox job delete') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')

    with self.argument_context('databox job show') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')

    with self.argument_context('databox job list') as c:
        c.argument('resource_group', resource_group_name_type)

    with self.argument_context('databox job book-shipment-pick-up') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('start_time', id_part=None, help='Minimum date after which the pick up should commence, this must be in local time of pick up area.')
        c.argument('end_time', id_part=None, help='Maximum date before which the pick up should commence, this must be in local time of pick up area.')
        c.argument('shipment_location', id_part=None, help='Shipment Location in the pickup place. Eg.front desk')
        c.argument('reason', id_part=None, help='Reason for cancellation.')

    with self.argument_context('databox job cancel') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')
        c.argument('start_time', id_part=None, help='Minimum date after which the pick up should commence, this must be in local time of pick up area.')
        c.argument('end_time', id_part=None, help='Maximum date before which the pick up should commence, this must be in local time of pick up area.')
        c.argument('shipment_location', id_part=None, help='Shipment Location in the pickup place. Eg.front desk')
        c.argument('reason', id_part=None, help='Reason for cancellation.')

    with self.argument_context('databox job list-credentials') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the job Resource within the specified resource group. job names must be between 3 and 24 characters in length and use any alphanumeric and underscore only')

    with self.argument_context('databox service list-available-skus') as c:
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')

    with self.argument_context('databox service list-available-skus-by-resource-group') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')

    with self.argument_context('databox service validate-address-method') as c:
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')

    with self.argument_context('databox service validate-inputs-by-resource-group') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')

    with self.argument_context('databox service validate-inputs') as c:
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')

    with self.argument_context('databox service region-configuration') as c:
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('transfer_type', id_part=None, help='Type of the transfer.')
        c.argument('country', id_part=None, help='ISO country code. Country for hardware shipment. For codes check: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Officially_assigned_code_elements')
        c.argument('sku_names', id_part=None, help='Sku Names to filter for available skus', nargs='+')
        c.argument('device_type', arg_type=get_enum_type(['DataBox', 'DataBoxDisk', 'DataBoxHeavy']), id_part=None, help='Device type to be used for the job.')
