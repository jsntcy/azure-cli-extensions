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
                       mobile,
                       city,
                       email_list,
                       street_address1,
                       postal_code,
                       country,
                       state_or_province,
                       tags=None,
                       phone=None,
                       phone_extension=None,
                       street_address2=None,
                       street_address3=None,
                       zip_extended_code=None,
                       company_name=None,
                       address_type=None,
                       storage_account_resource_id=None):
    body = {}
    body['location'] = location  # str
    body['tags'] = tags  # dictionary
    body.setdefault('sku', {})['name'] = sku_name  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['contact_name'] = contact_name  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['phone'] = phone  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['phone_extension'] = phone_extension  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['mobile'] = mobile  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['email_list'] = None if email_list is None else email_list
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address1'] = street_address1  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address2'] = street_address2  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address3'] = street_address3  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['city'] = city  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['state_or_province'] = state_or_province  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['country'] = country  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['postal_code'] = postal_code  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['zip_extended_code'] = zip_extended_code  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['company_name'] = company_name  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['address_type'] = address_type  # str
    storage_account_detail = {'storageAccountId': storage_account_resource_id}
    body.setdefault('details', {})['destination_account_details'][0] = storage_account_detail

    return client.create(resource_group_name=resource_group_name, job_name=job_name, job_resource=body)


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


def validate_address_method_databox_service(client,
                                            location,
                                            transfer_type,
                                            country,
                                            device_type,
                                            sku_names=None):
    body = {}
    body['transfer_type'] = transfer_type  # str
    body['country'] = country  # str
    body['sku_names'] = None if sku_names is None else sku_names
    body['device_type'] = device_type  # str
    return client.validate_address_method(location=location, validate_address=body)


def validate_inputs_by_resource_group_databox_service(client,
                                                      resource_group_name,
                                                      location,
                                                      transfer_type,
                                                      country,
                                                      device_type,
                                                      sku_names=None):
    body = {}
    body['transfer_type'] = transfer_type  # str
    body['country'] = country  # str
    body['sku_names'] = None if sku_names is None else sku_names
    body['device_type'] = device_type  # str
    return client.validate_inputs_by_resource_group(resource_group_name=resource_group_name, location=location, validation_request=body)


def validate_inputs_databox_service(client,
                                    location,
                                    transfer_type,
                                    country,
                                    device_type,
                                    sku_names=None):
    body = {}
    body['transfer_type'] = transfer_type  # str
    body['country'] = country  # str
    body['sku_names'] = None if sku_names is None else sku_names
    body['device_type'] = device_type  # str
    return client.validate_inputs(location=location, validation_request=body)