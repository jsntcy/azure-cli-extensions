# --------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See License.txt in the project root for license information.
# --------------------------------------------------------------------------------------------

import os
import unittest

from azure_devtools.scenario_tests import AllowLargeResponse
from azure.cli.testsdk import (ScenarioTest, ResourceGroupPreparer)


TEST_DIR = os.path.abspath(os.path.join(os.path.abspath(__file__), '..'))


class DataBoxScenarioTest(ScenarioTest):

    @ResourceGroupPreparer(name_prefix='cli_test_databox')
    def test_databox(self, resource_group):

        self.cmd('az databox job create '
                 '--resource-group {rg} '
                 '--name "SdkJob3971" '
                 '--location "westus" '
                 '--sku-name "DataBox" '
                 '--details-contact-details-contact-name "Public SDK Test" '
                 '--details-contact-details-phone "1234567890" '
                 '--details-contact-details-phone-extension "1234" '
                 '--details-contact-details-email-list "testing@microsoft.com" '
                 '--details-shipping-address-street-address1 "16 TOWNSEND ST" '
                 '--details-shipping-address-street-address2 "Unit 1" '
                 '--details-shipping-address-city "San Francisco" '
                 '--details-shipping-address-state-or-province "CA" '
                 '--details-shipping-address-country "US" '
                 '--details-shipping-address-postal-code "94107" '
                 '--details-shipping-address-company-name "Microsoft" '
                 '--details-shipping-address-address-type "Commercial"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3970"',
                 checks=[])

        self.cmd('az databox job show '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])

        self.cmd('az databox job list '
                 '--resource-group {rg}',
                 checks=[])

        self.cmd('az databox job list',
                 checks=[])

        self.cmd('az databox operation list',
                 checks=[])

        self.cmd('az databox service validate-inputs-by-resource-group '
                 '--location "westus"',
                 checks=[])

        self.cmd('az databox service list-available-skus-by-resource-group '
                 '--location "westus" '
                 '--transfer-type "ImportToAzure" '
                 '--country "US"',
                 checks=[])

        self.cmd('az databox job book-shipment-pick-up '
                 '--resource-group {rg} '
                 '--name "TJ-636646322037905056" '
                 '--start-time "2019-09-20T18:30:00Z" '
                 '--end-time "2019-09-22T18:30:00Z" '
                 '--shipment-location "Front desk"',
                 checks=[])

        self.cmd('az databox job list-credentials '
                 '--resource-group {rg} '
                 '--name "TJ-636646322037905056"',
                 checks=[])

        self.cmd('az databox job cancel '
                 '--resource-group {rg} '
                 '--name "SdkJob3971" '
                 '--reason "CancelTest"',
                 checks=[])

        self.cmd('az databox job update '
                 '--resource-group {rg} '
                 '--name "SdkJob3971" '
                 '--details-contact-details-contact-name "Update Job" '
                 '--details-contact-details-phone "1234567890" '
                 '--details-contact-details-phone-extension "1234" '
                 '--details-contact-details-email-list "testing@microsoft.com" '
                 '--details-shipping-address-street-address1 "16 TOWNSEND ST" '
                 '--details-shipping-address-street-address2 "Unit 1" '
                 '--details-shipping-address-city "San Francisco" '
                 '--details-shipping-address-state-or-province "CA" '
                 '--details-shipping-address-country "US" '
                 '--details-shipping-address-postal-code "94107" '
                 '--details-shipping-address-company-name "Microsoft" '
                 '--details-shipping-address-address-type "Commercial"',
                 checks=[])

        self.cmd('az databox service region-configuration '
                 '--location "westus" '
                 '--schedule-availability-request-storage-location "westus"',
                 checks=[])

        self.cmd('az databox service validate-address-method '
                 '--location "westus" '
                 '--shipping-address-street-address1 "16 TOWNSEND ST" '
                 '--shipping-address-street-address2 "Unit 1" '
                 '--shipping-address-city "San Francisco" '
                 '--shipping-address-state-or-province "CA" '
                 '--shipping-address-country "US" '
                 '--shipping-address-postal-code "94107" '
                 '--shipping-address-company-name "Microsoft" '
                 '--shipping-address-address-type "Commercial" '
                 '--device-type "DataBox"',
                 checks=[])

        self.cmd('az databox service validate-inputs '
                 '--location "westus"',
                 checks=[])

        self.cmd('az databox service list-available-skus '
                 '--location "westus" '
                 '--transfer-type "ImportToAzure" '
                 '--country "US"',
                 checks=[])

        self.cmd('az databox job delete '
                 '--resource-group {rg} '
                 '--name "SdkJob3971"',
                 checks=[])
