# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------
# pylint: disable=line-too-long
# pylint: disable=too-many-statements
# pylint: disable=too-many-lines
# pylint: disable=too-many-locals
# pylint: disable=unused-argument


def list_databox_operation(cmd, client):
    return client.list()


def create_databox_job(cmd, client,
                       resource_group,
                       name,
                       location,
                       sku_name,
                       details_contact_details_contact_name,
                       details_contact_details_phone,
                       details_contact_details_email_list,
                       details_shipping_address_street_address1,
                       details_shipping_address_country,
                       details_shipping_address_postal_code,
                       tags=None,
                       sku_display_name=None,
                       sku_family=None,
                       details_contact_details_phone_extension=None,
                       details_contact_details_mobile=None,
                       details_contact_details_notification_preference=None,
                       details_shipping_address_street_address2=None,
                       details_shipping_address_street_address3=None,
                       details_shipping_address_city=None,
                       details_shipping_address_state_or_province=None,
                       details_shipping_address_zip_extended_code=None,
                       details_shipping_address_company_name=None,
                       details_shipping_address_address_type=None,
                       destination_account_details=None):
    body = {}
    body['location'] = location  # str
    body['tags'] = tags  # dictionary
    body.setdefault('sku', {})['name'] = sku_name  # str
    body.setdefault('sku', {})['display_name'] = sku_display_name  # str
    body.setdefault('sku', {})['family'] = sku_family  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['contact_name'] = details_contact_details_contact_name  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['phone'] = details_contact_details_phone  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['phone_extension'] = details_contact_details_phone_extension  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['mobile'] = details_contact_details_mobile  # str
    body.setdefault('details', {}).setdefault('contact_details', {})['email_list'] = None if details_contact_details_email_list is None else details_contact_details_email_list
    body.setdefault('details', {}).setdefault('contact_details', {})['notification_preference'] = details_contact_details_notification_preference
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address1'] = details_shipping_address_street_address1  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address2'] = details_shipping_address_street_address2  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['street_address3'] = details_shipping_address_street_address3  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['city'] = details_shipping_address_city  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['state_or_province'] = details_shipping_address_state_or_province  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['country'] = details_shipping_address_country  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['postal_code'] = details_shipping_address_postal_code  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['zip_extended_code'] = details_shipping_address_zip_extended_code  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['company_name'] = details_shipping_address_company_name  # str
    body.setdefault('details', {}).setdefault('shipping_address', {})['address_type'] = details_shipping_address_address_type  # str
    body['destination_account_details'] = destination_account_details
    return client.create(resource_group_name=resource_group, job_name=name, job_resource=body)


def update_databox_job(cmd, client,
                       resource_group,
                       name,
                       location=None,
                       tags=None,
                       sku_name=None,
                       sku_display_name=None,
                       sku_family=None,
                       details_contact_details_contact_name=None,
                       details_contact_details_phone=None,
                       details_contact_details_phone_extension=None,
                       details_contact_details_mobile=None,
                       details_contact_details_email_list=None,
                       details_contact_details_notification_preference=None,
                       details_shipping_address_street_address1=None,
                       details_shipping_address_street_address2=None,
                       details_shipping_address_street_address3=None,
                       details_shipping_address_city=None,
                       details_shipping_address_state_or_province=None,
                       details_shipping_address_country=None,
                       details_shipping_address_postal_code=None,
                       details_shipping_address_zip_extended_code=None,
                       details_shipping_address_company_name=None,
                       details_shipping_address_address_type=None,
                       destination_account_details=None):
    body = {}
    if location is not None:
        body['location'] = location  # str
    if tags is not None:
        body['tags'] = tags  # dictionary
    if sku_name is not None:
        body.setdefault('sku', {})['name'] = sku_name  # str
    if sku_display_name is not None:
        body.setdefault('sku', {})['display_name'] = sku_display_name  # str
    if sku_family is not None:
        body.setdefault('sku', {})['family'] = sku_family  # str
    if details_contact_details_contact_name is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['contact_name'] = details_contact_details_contact_name  # str
    if details_contact_details_phone is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['phone'] = details_contact_details_phone  # str
    if details_contact_details_phone_extension is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['phone_extension'] = details_contact_details_phone_extension  # str
    if details_contact_details_mobile is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['mobile'] = details_contact_details_mobile  # str
    if details_contact_details_email_list is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['email_list'] = None if details_contact_details_email_list is None else details_contact_details_email_list
    if details_contact_details_notification_preference is not None:
        body.setdefault('details', {}).setdefault('contact_details', {})['notification_preference'] = details_contact_details_notification_preference
    if details_shipping_address_street_address1 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address1'] = details_shipping_address_street_address1  # str
    if details_shipping_address_street_address2 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address2'] = details_shipping_address_street_address2  # str
    if details_shipping_address_street_address3 is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['street_address3'] = details_shipping_address_street_address3  # str
    if details_shipping_address_city is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['city'] = details_shipping_address_city  # str
    if details_shipping_address_state_or_province is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['state_or_province'] = details_shipping_address_state_or_province  # str
    if details_shipping_address_country is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['country'] = details_shipping_address_country  # str
    if details_shipping_address_postal_code is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['postal_code'] = details_shipping_address_postal_code  # str
    if details_shipping_address_zip_extended_code is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['zip_extended_code'] = details_shipping_address_zip_extended_code  # str
    if details_shipping_address_company_name is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['company_name'] = details_shipping_address_company_name  # str
    if details_shipping_address_address_type is not None:
        body.setdefault('details', {}).setdefault('shipping_address', {})['address_type'] = details_shipping_address_address_type  # str
    if destination_account_details is not None:
        body['destination_account_details'] = destination_account_details
    return client.create(resource_group_name=resource_group, job_name=name, job_resource=body)


def delete_databox_job(cmd, client,
                       resource_group,
                       name):
    return client.delete(resource_group_name=resource_group, job_name=name)


def get_databox_job(cmd, client,
                    resource_group,
                    name):
    return client.get(resource_group_name=resource_group, job_name=name)


def list_databox_job(cmd, client,
                     resource_group=None):
    if resource_group is not None:
        return client.list_by_resource_group(resource_group_name=resource_group)
    return client.list()


def book_shipment_pick_up_databox_job(cmd, client,
                                      resource_group,
                                      name,
                                      start_time,
                                      end_time,
                                      shipment_location,
                                      reason):
    body = {}
    body['start_time'] = start_time  # datetime
    body['end_time'] = end_time  # datetime
    body['shipment_location'] = shipment_location  # str
    body['reason'] = reason  # str
    return client.book_shipment_pick_up(resource_group_name=resource_group, job_name=name, shipment_pick_up_request=body)


def cancel_databox_job(cmd, client,
                       resource_group,
                       name,
                       start_time,
                       end_time,
                       shipment_location,
                       reason):
    body = {}
    body['start_time'] = start_time  # datetime
    body['end_time'] = end_time  # datetime
    body['shipment_location'] = shipment_location  # str
    body['reason'] = reason  # str
    return client.cancel(resource_group_name=resource_group, job_name=name, cancellation_reason=body)


def list_credentials_databox_job(cmd, client,
                                 resource_group,
                                 name):
    return client.list_credentials(resource_group_name=resource_group, job_name=name)


def list_available_skus_databox_service(cmd, client,
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
    return client.list_available_skus(location=location, available_sku_request=body)


def list_available_skus_by_resource_group_databox_service(cmd, client,
                                                          resource_group,
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
    return client.list_available_skus_by_resource_group(resource_group_name=resource_group, location=location, available_sku_request=body)


def validate_address_method_databox_service(cmd, client,
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


def validate_inputs_by_resource_group_databox_service(cmd, client,
                                                      resource_group,
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
    return client.validate_inputs_by_resource_group(resource_group_name=resource_group, location=location, validation_request=body)


def validate_inputs_databox_service(cmd, client,
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


def region_configuration_databox_service(cmd, client,
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
    return client.region_configuration(location=location, region_configuration_request=body)
