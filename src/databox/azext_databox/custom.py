# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------
# pylint: disable=line-too-long
# pylint: disable=too-many-statements
# pylint: disable=too-many-lines
# pylint: disable=too-many-locals
# pylint: disable=unused-argument
# pylint: disable=too-many-branches


def create_databox_job(client,
                       resource_group_name,
                       job_name,
                       location,
                       sku_name,
                       contact_name,
                       phone,
                       city,
                       email_list,
                       street_address1,
                       postal_code,
                       country,
                       state_or_province,
                       tags=None,
                       mobile=None,
                       street_address2=None,
                       street_address3=None,
                       company_name=None,
                       storage_account_details=None,
                       managed_disk_details=None):
    body = {}
    body['location'] = location  # str
    body['tags'] = tags  # dictionary
    body.setdefault('sku', {})['name'] = sku_name  # str
    body.setdefault('details', {})['job_details_type'] = sku_name
    body.setdefault('details', {}).setdefault('contact_details', {})['contact_name'] = contact_name  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['phone'] = phone  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['mobile'] = mobile  # str
    body.setdefault('details', {}).setdefault('contact_details', {})[
        'email_list'] = None if email_list is None else email_list
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address1'] = street_address1  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address2'] = street_address2  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address3'] = street_address3  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['city'] = city  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['state_or_province'] = state_or_province  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['country'] = country  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['postal_code'] = postal_code  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['company_name'] = company_name  # str

    destination_account_details = []
    if storage_account_details:
        destination_account_details.append(storage_account_details)

    if managed_disk_details:
        destination_account_details.append(managed_disk_details)

    body.setdefault('details', {})['destination_account_details'] = destination_account_details

    return client.create(resource_group_name=resource_group_name, job_name=job_name, job_resource=body)


def update_databox_job(client,
                       resource_group_name,
                       job_name,
                       contact_name=None,
                       phone=None,
                       mobile=None,
                       city=None,
                       email_list=None,
                       street_address1=None,
                       street_address2=None,
                       street_address3=None,
                       postal_code=None,
                       country=None,
                       state_or_province=None,
                       company_name=None):
    body = {}
    if contact_name is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['contact_name'] = contact_name  # str
    if phone is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['phone'] = phone  # str
    if mobile is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['mobile'] = mobile  # str
    if email_list is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['email_list'] = email_list
    if street_address1 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address1'] = street_address1  # str
    if street_address2 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address2'] = street_address2  # str
    if street_address3 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address3'] = street_address3  # str
    if city is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['city'] = city  # str
    if state_or_province is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['state_or_province'] = state_or_province  # str
    if country is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['country'] = country  # str
    if postal_code is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['postal_code'] = postal_code  # str
    if company_name is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['company_name'] = company_name  # str

    return client.update(resource_group_name=resource_group_name, job_name=job_name, job_resource_update_parameter=body)


def delete_databox_job(client,
                       resource_group_name,
                       job_name):
    return client.delete(resource_group_name=resource_group_name, job_name=job_name)


def get_databox_job(client,
                    resource_group_name,
                    job_name):
    return client.get(resource_group_name=resource_group_name, job_name=job_name)


def list_databox_job(client,
                     resource_group_name=None):
    if resource_group_name is not None:
        return client.list_by_resource_group(resource_group_name=resource_group_name)
    return client.list()


def cancel_databox_job(client,
                       resource_group_name,
                       job_name,
                       reason):
    return client.cancel(resource_group_name=resource_group_name, job_name=job_name, reason=reason)


def list_credentials_databox_job(client,
                                 resource_group_name,
                                 job_name):
    return client.list_credentials(resource_group_name=resource_group_name, job_name=job_name)
