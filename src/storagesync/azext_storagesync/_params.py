# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------
# pylint: disable=line-too-long
# pylint: disable=too-many-lines
# pylint: disable=too-many-statements

from azext_storagesync._validators import parse_storage_account
from azure.cli.core.commands.parameters import (
    tags_type,
    get_enum_type,
    resource_group_name_type,
    get_location_type
)

from azure.cli.core.commands.validators import get_default_location_from_resource_group
from knack.arguments import CLIArgumentType


def load_arguments(self, _):
    storage_sync_service_name_type = CLIArgumentType(options_list=['--storage-sync-service-name', '-sss'],
                                                     help='The name of storage sync service.')
    sync_group_name_type = CLIArgumentType(options_list=['--sync-group-name', '-sg'], help='The name of sync group.')
    cloud_endpoint_name_type = CLIArgumentType(options_list=['--cloud-endpoint-name', '-ce'],
                                               help='The name of cloud endpoint.')
    server_endpoint_name_type = CLIArgumentType(options_list=['--server-endpoint-name', '-se'],
                                                help='The name of server endpoint.')
    share_name_type = CLIArgumentType(options_list=['--share-name', '-s'], help='The name of Azure file share.')
    storage_account_type = CLIArgumentType(options_list='--storage-account',
                                           help='The name or ID of the storage account.',
                                           validator=parse_storage_account, id_part='name')
    storage_account_tenant_id_type = CLIArgumentType(options_list='--tenant-id',
                                                     help='The id of the tenant that the storage account is in.')
    server_resource_id_type = CLIArgumentType(options_list='--server-id',
                                                     help='The resource id of the registered server.')

    with self.argument_context('storagesync storage-sync-service create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('location', arg_type=get_location_type(self.cli_ctx),
                   validator=get_default_location_from_resource_group)
        c.argument('tags', tags_type)
        c.argument('properties', help='The properties of the storage sync service.')

    with self.argument_context('storagesync storage-sync-service delete') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)

    with self.argument_context('storagesync storage-sync-service show') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)

    with self.argument_context('storagesync storage-sync-service list') as c:
        c.argument('resource_group_name', resource_group_name_type)

    with self.argument_context('storagesync sync-group create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)

    with self.argument_context('storagesync sync-group delete') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)

    with self.argument_context('storagesync sync-group show') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)

    with self.argument_context('storagesync sync-group list') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)

    with self.argument_context('storagesync cloud-endpoint create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('cloud_endpoint_name', cloud_endpoint_name_type)
        c.argument('storage_account_resource_id', storage_account_type)
        c.argument('azure_file_share_name', share_name_type)
        c.argument('storage_account_tenant_id', storage_account_tenant_id_type)

    with self.argument_context('storagesync cloud-endpoint delete') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('cloud_endpoint_name', cloud_endpoint_name_type)

    with self.argument_context('storagesync cloud-endpoint show') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('cloud_endpoint_name', cloud_endpoint_name_type)

    with self.argument_context('storagesync cloud-endpoint list') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)

    with self.argument_context('storagesync server-endpoint create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('server_endpoint_name', server_endpoint_name_type)
        c.argument('server_resource_id', server_resource_id_type)
        c.argument('server_local_path', help='The local path of the registered server.')
        c.argument('cloud_tiering', arg_type=get_enum_type(['on', 'off']), help='Cloud Tiering.')
        c.argument('volume_free_space_percent',
                   help='Level of free space to be maintained by Cloud Tiering if it is enabled.')
        c.argument('tier_files_older_than_days', help='Tier files older than days.')
        c.argument('offline_data_transfer', arg_type=get_enum_type(['on', 'off']), help='Offline data transfer')
        c.argument('offline_data_transfer_share_name', help='Offline data transfer share name')

    with self.argument_context('storagesync server-endpoint update') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('server_endpoint_name', server_endpoint_name_type)
        c.argument('cloud_tiering', arg_type=get_enum_type(['on', 'off']), help='Cloud Tiering.')
        c.argument('volume_free_space_percent',
                   help='Level of free space to be maintained by Cloud Tiering if it is enabled.')
        c.argument('tier_files_older_than_days', help='Tier files older than days.')
        c.argument('offline_data_transfer', arg_type=get_enum_type(['on', 'off']), help='Offline data transfer')
        c.argument('offline_data_transfer_share_name', help='Offline data transfer share name')

    with self.argument_context('storagesync server-endpoint delete') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('server_endpoint_name', server_endpoint_name_type)

    with self.argument_context('storagesync server-endpoint show') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)
        c.argument('server_endpoint_name', server_endpoint_name_type)

    with self.argument_context('storagesync server-endpoint list') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('sync_group_name', sync_group_name_type)

    with self.argument_context('storagesync registered-server create') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('server_id', help='Server Id')
        c.argument('server_certificate', help='Registered Server Certificate')
        c.argument('agent_version', help='Registered Server Agent Version')
        c.argument('server_osversion', help='Registered Server OS Version')
        c.argument('last_heart_beat', help='Registered Server last heart beat')
        c.argument('server_role', help='Registered Server serverRole')
        c.argument('cluster_id', help='Registered Server clusterId')
        c.argument('cluster_name', help='Registered Server clusterName')
        c.argument('friendly_name', help='Friendly Name')

    with self.argument_context('storagesync registered-server delete') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('server_id', help='Server Id')

    with self.argument_context('storagesync registered-server show') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
        c.argument('server_id', help='Server Id')

    with self.argument_context('storagesync registered-server list') as c:
        c.argument('resource_group_name', resource_group_name_type)
        c.argument('storage_sync_service_name', storage_sync_service_name_type)
