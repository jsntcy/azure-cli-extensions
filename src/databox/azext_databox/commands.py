# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------

# pylint: disable=line-too-long
# pylint: disable=too-many-lines
# pylint: disable=too-many-statements
# pylint: disable=too-many-locals
from azure.cli.core.commands import CliCommandType


def load_command_table(self, _):

    from ._client_factory import cf_operations
    databox_operations = CliCommandType(
        operations_tmpl='azext_databox.vendored_sdks.databox.operations._operations_operations#OperationsOperations.{}',
        client_factory=cf_operations)
    with self.command_group('databox operation', databox_operations, client_factory=cf_operations) as g:
        g.custom_command('list', 'list_databox_operation')

    from ._client_factory import cf_jobs
    databox_jobs = CliCommandType(
        operations_tmpl='azext_databox.vendored_sdks.databox.operations._jobs_operations#JobsOperations.{}',
        client_factory=cf_jobs)
    with self.command_group('databox job', databox_jobs, client_factory=cf_jobs) as g:
        g.custom_command('create', 'create_databox_job')
        g.custom_command('update', 'update_databox_job')
        g.custom_command('delete', 'delete_databox_job')
        g.custom_show_command('show', 'get_databox_job')
        g.custom_command('list', 'list_databox_job')
        g.custom_command('book-shipment-pick-up', 'book_shipment_pick_up_databox_job')
        g.custom_command('cancel', 'cancel_databox_job')
        g.custom_command('list-credentials', 'list_credentials_databox_job')

    from ._client_factory import cf_service
    databox_service = CliCommandType(
        operations_tmpl='azext_databox.vendored_sdks.databox.operations._service_operations#ServiceOperations.{}',
        client_factory=cf_service)
    with self.command_group('databox service', databox_service, client_factory=cf_service) as g:
        g.custom_command('list-available-skus', 'list_available_skus_databox_service')
        g.custom_command('list-available-skus-by-resource-group', 'list_available_skus_by_resource_group_databox_service')
        g.custom_command('validate-address-method', 'validate_address_method_databox_service')
        g.custom_command('validate-inputs-by-resource-group', 'validate_inputs_by_resource_group_databox_service')
        g.custom_command('validate-inputs', 'validate_inputs_databox_service')
        g.custom_command('region-configuration', 'region_configuration_databox_service')
