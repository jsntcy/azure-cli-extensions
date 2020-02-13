# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------


def parse_storage_account(cmd, namespace):
    from azure.cli.core.commands.client_factory import get_subscription_id
    from msrestazure.tools import is_valid_resource_id, resource_id
    if namespace.storage_account_resource_id:
        if not is_valid_resource_id(namespace.storage_account_resource_id):
            namespace.storage_account_resource_id = resource_id(
                subscription=get_subscription_id(cmd.cli_ctx),
                resource_group=namespace.resource_group_name,
                namespace='Microsoft.Storage',
                type='storageAccounts',
                name=namespace.storage_account_resource_id
            )

    if not namespace.storage_account_tenant_id:
        namespace.storage_account_tenant_id = _get_tenant_id()


def _get_tenant_id():
    '''
    Gets tenantId from current subscription.
    '''
    from azure.cli.core._profile import Profile

    profile = Profile()
    sub = profile.get_subscription()
    return sub['tenantId']
