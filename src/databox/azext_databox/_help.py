# coding=utf-8
# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------

# pylint: disable=too-many-lines
# pylint: disable=line-too-long
from knack.help_files import helps  # pylint: disable=unused-import


helps['databox operation'] = """
    type: group
    short-summary: Commands to manage databox operation.
"""

helps['databox operation list'] = """
    type: command
    short-summary: This method gets all the operations.
    examples:
      - name: OperationsGet
        text: |-
               az databox operation list
"""

helps['databox job'] = """
    type: group
    short-summary: Commands to manage databox job.
"""

helps['databox job create'] = """
    type: command
    short-summary: Creates a new job with the specified parameters. Existing job cannot be updated with this API and should instead be updated with the Update job API.
    examples:
      - name: JobsCreate
        text: |-
               az databox job create --resource-group "SdkRg4981" --name "SdkJob3971" --location \\
               "westus" --sku-name "DataBox" --details-contact-details-contact-name "Public SDK Test" \\
               --details-contact-details-phone "1234567890" --details-contact-details-phone-extension \\
               "1234" --details-contact-details-email-list "testing@microsoft.com" \\
               --details-shipping-address-street-address1 "16 TOWNSEND ST" \\
               --details-shipping-address-street-address2 "Unit 1" --details-shipping-address-city \\
               "San Francisco" --details-shipping-address-state-or-province "CA" \\
               --details-shipping-address-country "US" --details-shipping-address-postal-code "94107" \\
               --details-shipping-address-company-name "Microsoft" \\
               --details-shipping-address-address-type "Commercial"
"""

helps['databox job update'] = """
    type: command
    short-summary: Creates a new job with the specified parameters. Existing job cannot be updated with this API and should instead be updated with the Update job API.
    examples:
      - name: JobsPatch
        text: |-
               az databox job update --resource-group "SdkRg4981" --name "SdkJob3971" \\
               --details-contact-details-contact-name "Update Job" --details-contact-details-phone \\
               "1234567890" --details-contact-details-phone-extension "1234" \\
               --details-contact-details-email-list "testing@microsoft.com" \\
               --details-shipping-address-street-address1 "16 TOWNSEND ST" \\
               --details-shipping-address-street-address2 "Unit 1" --details-shipping-address-city \\
               "San Francisco" --details-shipping-address-state-or-province "CA" \\
               --details-shipping-address-country "US" --details-shipping-address-postal-code "94107" \\
               --details-shipping-address-company-name "Microsoft" \\
               --details-shipping-address-address-type "Commercial"
"""

helps['databox job delete'] = """
    type: command
    short-summary: Deletes a job.
    examples:
      - name: JobsDelete
        text: |-
               az databox job delete --resource-group "SdkRg4981" --name "SdkJob3971"
"""

helps['databox job show'] = """
    type: command
    short-summary: Gets information about the specified job.
    examples:
      - name: JobsGet
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3971"
      - name: JobsGet1
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3970"
      - name: JobsGet2
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3971"
      - name: JobsGet3
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3971"
      - name: JobsGet4
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3971"
      - name: JobsGet5
        text: |-
               az databox job show --resource-group "SdkRg4981" --name "SdkJob3971"
"""

helps['databox job list'] = """
    type: command
    short-summary: Lists all the jobs available under the given resource group.
    examples:
      - name: JobsList
        text: |-
               az databox job list
      - name: JobsListByResourceGroup
        text: |-
               az databox job list --resource-group "SdkRg4981"
"""

helps['databox job book-shipment-pick-up'] = """
    type: command
    short-summary: Book shipment pick up.
    examples:
      - name: BookShipmentPickupPost
        text: |-
               az databox job book-shipment-pick-up --resource-group "bvttoolrg6" --name \\
               "TJ-636646322037905056" --start-time "2019-09-20T18:30:00Z" --end-time \\
               "2019-09-22T18:30:00Z" --shipment-location "Front desk"
"""

helps['databox job cancel'] = """
    type: command
    short-summary: CancelJob.
    examples:
      - name: JobsCancelPost
        text: |-
               az databox job cancel --resource-group "SdkRg4981" --name "SdkJob3971" --reason \\
               "CancelTest"
"""

helps['databox job list-credentials'] = """
    type: command
    short-summary: This method gets the unencrypted secrets related to the job.
    examples:
      - name: JobsListCredentials
        text: |-
               az databox job list-credentials --resource-group "bvttoolrg6" --name \\
               "TJ-636646322037905056"
"""

helps['databox service'] = """
    type: group
    short-summary: Commands to manage databox service.
"""

helps['databox service list-available-skus'] = """
    type: command
    short-summary: This method provides the list of available skus for the given subscription and location.
    examples:
      - name: AvailableSkusPost
        text: |-
               az databox service list-available-skus --location "westus" --transfer-type \\
               "ImportToAzure" --country "US"
"""

helps['databox service list-available-skus-by-resource-group'] = """
    type: command
    short-summary: This method provides the list of available skus for the given subscription, resource group and location.
    examples:
      - name: AvailableSkusByResourceGroup
        text: |-
               az databox service list-available-skus-by-resource-group --resource-group "SdkRg9836" \\
               --location "westus" --transfer-type "ImportToAzure" --country "US"
"""

helps['databox service validate-address-method'] = """
    type: command
    short-summary: [DEPRECATED NOTICE: This operation will soon be removed] This method validates the customer shipping address and provide alternate addresses if any.
    examples:
      - name: ValidateAddressPost
        text: |-
               az databox service validate-address-method --location "westus" \\
               --shipping-address-street-address1 "16 TOWNSEND ST" --shipping-address-street-address2 \\
               "Unit 1" --shipping-address-city "San Francisco" --shipping-address-state-or-province \\
               "CA" --shipping-address-country "US" --shipping-address-postal-code "94107" \\
               --shipping-address-company-name "Microsoft" --shipping-address-address-type "Commercial" \\
               --device-type "DataBox"
"""

helps['databox service validate-inputs-by-resource-group'] = """
    type: command
    short-summary: This method does all necessary pre-job creation validation under resource group.
    examples:
      - name: ServiceValidateInputsByResourceGroup
        text: |-
               az databox service validate-inputs-by-resource-group --resource-group "SdkRg9836" \\
               --location "westus"
"""

helps['databox service validate-inputs'] = """
    type: command
    short-summary: This method does all necessary pre-job creation validation under subscription.
    examples:
      - name: ServiceValidateInputs
        text: |-
               az databox service validate-inputs --location "westus"
"""

helps['databox service region-configuration'] = """
    type: command
    short-summary: This API provides configuration details specific to given region/location.
    examples:
      - name: ServiceRegionConfiguration
        text: |-
               az databox service region-configuration --location "westus" \\
               --schedule-availability-request-storage-location "westus"
"""
