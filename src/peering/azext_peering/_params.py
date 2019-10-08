# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------
# pylint: disable=line-too-long
# pylint: disable=too-many-lines
# pylint: disable=too-many-statements

from knack.arguments import CLIArgumentType
from azure.cli.core.commands.parameters import (
    tags_type,
    get_three_state_flag,
    get_enum_type,
    resource_group_name_type,
    get_location_type
)
from azure.cli.core.commands.validators import get_default_location_from_resource_group


def load_arguments(self, _):
    name_arg_type = CLIArgumentType(options_list=('--name', '-n'), metavar='NAME')

    with self.argument_context('peering asn create') as c:
        c.argument('name', id_part=None, help='The peer ASN name.')
        c.argument('peer_asn', id_part=None, help='The Autonomous System Number (ASN) of the peer.')
        c.argument('peer_contact_info', id_part=None, help='The contact information of the peer.')
        c.argument('peer_name', id_part=None, help='The name of the peer.')
        c.argument('validation_state', arg_type=get_enum_type(['None', 'Pending', 'Approved', 'Failed']), id_part=None, help='The validation state of the ASN associated with the peer.')

    with self.argument_context('peering asn update') as c:
        c.argument('name', id_part=None, help='The peer ASN name.')
        c.argument('peer_asn', id_part=None, help='The Autonomous System Number (ASN) of the peer.')
        c.argument('peer_contact_info', id_part=None, help='The contact information of the peer.')
        c.argument('peer_name', id_part=None, help='The name of the peer.')
        c.argument('validation_state', arg_type=get_enum_type(['None', 'Pending', 'Approved', 'Failed']), id_part=None, help='The validation state of the ASN associated with the peer.')

    with self.argument_context('peering asn delete') as c:
        c.argument('name', id_part=None, help='The peer ASN name.')

    #with self.argument_context('peering list') as c:

    with self.argument_context('peering asn show') as c:
        c.argument('name', id_part=None, help='The peer ASN name.')

    with self.argument_context('peering create') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering.')
        c.argument('sku_name', arg_type=get_enum_type(['Basic_Exchange_Free', 'Basic_Direct_Free', 'Premium_Direct_Free', 'Premium_Exchange_Metered', 'Premium_Direct_Metered', 'Premium_Direct_Unlimited']), id_part=None, help='The name of the peering SKU.')
        c.argument('sku_tier', arg_type=get_enum_type(['Basic', 'Premium']), id_part=None, help='The tier of the peering SKU.')
        c.argument('sku_family', arg_type=get_enum_type(['Direct', 'Exchange']), id_part=None, help='The family of the peering SKU.')
        c.argument('sku_size', arg_type=get_enum_type(['Free', 'Metered', 'Unlimited']), id_part=None, help='The size of the peering SKU.')
        c.argument('kind', arg_type=get_enum_type(['Direct', 'Exchange']), id_part=None, help='The kind of the peering.')
        c.argument('direct', id_part=None, help='The properties that define a direct peering.')
        c.argument('exchange', id_part=None, help='The properties that define an exchange peering.')
        c.argument('peering_location', id_part=None, help='The location of the peering.')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)

    with self.argument_context('peering update') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering.')
        c.argument('sku_name', arg_type=get_enum_type(['Basic_Exchange_Free', 'Basic_Direct_Free', 'Premium_Direct_Free', 'Premium_Exchange_Metered', 'Premium_Direct_Metered', 'Premium_Direct_Unlimited']), id_part=None, help='The name of the peering SKU.')
        c.argument('sku_tier', arg_type=get_enum_type(['Basic', 'Premium']), id_part=None, help='The tier of the peering SKU.')
        c.argument('sku_family', arg_type=get_enum_type(['Direct', 'Exchange']), id_part=None, help='The family of the peering SKU.')
        c.argument('sku_size', arg_type=get_enum_type(['Free', 'Metered', 'Unlimited']), id_part=None, help='The size of the peering SKU.')
        c.argument('kind', arg_type=get_enum_type(['Direct', 'Exchange']), id_part=None, help='The kind of the peering.')
        c.argument('direct', id_part=None, help='The properties that define a direct peering.')
        c.argument('exchange', id_part=None, help='The properties that define an exchange peering.')
        c.argument('peering_location', id_part=None, help='The location of the peering.')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)

    with self.argument_context('peering delete') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering.')

    with self.argument_context('peering list') as c:
        c.argument('resource_group', resource_group_name_type)

    with self.argument_context('peering show') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering.')

    with self.argument_context('peering prefix create') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('peering_service_name', id_part=None, help='The name of the peering service.')
        c.argument('name', id_part=None, help='The name of the prefix.')
        c.argument('prefix', id_part=None, help='The prefix from which your traffic originates.')

    with self.argument_context('peering prefix update') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('peering_service_name', id_part=None, help='The name of the peering service.')
        c.argument('name', id_part=None, help='The name of the prefix.')
        c.argument('prefix', id_part=None, help='The prefix from which your traffic originates.')

    with self.argument_context('peering prefix delete') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('peering_service_name', id_part=None, help='The name of the peering service.')
        c.argument('name', id_part=None, help='The name of the prefix.')

    with self.argument_context('peering prefix list') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('peering_service_name', id_part=None, help='The name of the peering service.')

    with self.argument_context('peering prefix show') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('peering_service_name', id_part=None, help='The name of the peering service.')
        c.argument('name', id_part=None, help='The name of the prefix.')

    with self.argument_context('peering service create') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering service.')
        c.argument('peering_service_location', id_part=None, help='The PeeringServiceLocation of the Customer.')
        c.argument('peering_service_provider', id_part=None, help='The MAPS Provider Name.')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)

    with self.argument_context('peering service update') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering service.')
        c.argument('peering_service_location', id_part=None, help='The PeeringServiceLocation of the Customer.')
        c.argument('peering_service_provider', id_part=None, help='The MAPS Provider Name.')
        c.argument('location', arg_type=get_location_type(self.cli_ctx))
        c.argument('tags', tags_type)

    with self.argument_context('peering service delete') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering service.')

    with self.argument_context('peering service list') as c:
        c.argument('resource_group', resource_group_name_type)

    with self.argument_context('peering service show') as c:
        c.argument('resource_group', resource_group_name_type)
        c.argument('name', id_part=None, help='The name of the peering service.')
