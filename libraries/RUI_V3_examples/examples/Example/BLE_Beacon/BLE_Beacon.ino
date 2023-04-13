/***
 *
 *  This example will advertise BLE beacon in iBeacon format.
 *
***/

int i;
void setup()
{
    Serial.begin(115200);
    delay(2000);

    Serial.println("RAKwireless BLE Beacon Example");
    Serial.println("------------------------------------------------------");

    api.ble.settings.blemode(RAK_BLE_BEACON_MODE);
    api.ble.advertise.start(0);
  
    i = 0;
}

void loop()
{
    i++;
    delay(1000);
    Serial.println(i);
    bool ret;

    if ((i % 30) == 0 && (i <= 30)) {
        Serial.println("-------------- New Beacon Advertising --------------");

        if (!(ret = api.ble.beacon.ibeacon.major.set(588))) {
            Serial.printf("Set BLE Beacon parameter is incorrect! \r\n");
            return;
        }

        if (!(ret = api.ble.beacon.ibeacon.minor.set(299))) {
            Serial.printf("Set BLE Beacon parameter is incorrect! \r\n");
            return;
        }

        if (!(ret = api.ble.beacon.ibeacon.power.set(-68))) {
            Serial.printf("Set BLE Beacon parameter is incorrect! \r\n");
            return;
        }

        delay(1000);
        uint8_t beaconUuid[16] = {
            0xEE, 0xDD, 0xCC, 0x22, 0x33, 0x44, 0x55, 0x66,
            0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE,
        };

        if (!(ret = api.ble.beacon.ibeacon.uuid.set(beaconUuid))) {
            Serial.printf("Set BLE Beacon parameter is incorrect! \r\n");
            return;
        }
    }
}
