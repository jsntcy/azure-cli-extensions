# coding=utf-8
# --------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for
# license information.
#
# Code generated by Microsoft (R) AutoRest Code Generator.
# Changes may cause incorrect behavior and will be lost if the code is
# regenerated.
# --------------------------------------------------------------------------

from msrest.serialization import Model


class CreateManagementGroupRequest(Model):
    """Management group creation parameters.

    :param display_name: The friendly name of the management group.
    :type display_name: str
    :param parent_id: (Optional) The fully qualified ID for the parent
     management group.  For example,
     /providers/Microsoft.Management/managementGroups/0000000-0000-0000-0000-000000000000
    :type parent_id: str
    """

    _attribute_map = {
        'display_name': {'key': 'displayName', 'type': 'str'},
        'parent_id': {'key': 'parentId', 'type': 'str'},
    }

    def __init__(self, display_name=None, parent_id=None):
        super(CreateManagementGroupRequest, self).__init__()
        self.display_name = display_name
        self.parent_id = parent_id
