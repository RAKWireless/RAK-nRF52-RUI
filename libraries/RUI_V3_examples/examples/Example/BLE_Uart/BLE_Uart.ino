/***
 *
 *  In this example, the device will create a BLE Uart characteristic.
 *  When BLE receive data in specific pattern ("EE" or "BB" in ascii for example),
 *  the device will send message both in Serial and BLE(Serial6).
 *
***/
void setup()
{
    //api.system.restoreDefault();
    //If you want to read and write data through BLE API operations, you need to set BLE Serial (Serail6) to Custom Mode
    Serial6.begin(115200, RAK_CUSTOM_MODE); // RAK_CUSTOM_MODE, RAK_AT_MODE
    Serial.begin(115200);
    delay(2000);

    Serial.println("RAKwireless BLE UART Example");
    Serial.println("------------------------------------------------------");

    uint8_t pairing_pin[] = "123456";
    Serial.println("Setting pairing PIN to:");
    Serial.println((char *) pairing_pin);
    api.ble.uart.setPIN(pairing_pin, 6);	//pairing_pin = 6-digit (digit 0..9 only)

    // Set Permission to access BLE Uart is to require man-in-the-middle protection
    // This will cause apps to perform pairing with static PIN we set above
    // now support SET_ENC_WITH_MITM and SET_ENC_NO_MITM
    api.ble.uart.setPermission(RAK_SET_ENC_WITH_MITM);
    api.ble.uart.start(0);
}

void loop()
{
    static uint16_t addr;
    addr = 0;
    while (api.ble.uart.available()) { // TRUE or FALSE

        if(addr>1){
            api.ble.uart.read();
            continue;
        }

        char str1[2];
        str1[addr] = api.ble.uart.read();

        const char *str2 = "EE";
        const char *str3 = "BB";

        if (strncmp(str1, str2, 2) == 0) {
            uint8_t data_array[] = "RAK_BLE_UART!!!";
            api.ble.uart.write(data_array, 15);
            Serial.println("RAK_BLE_UART!!!");
        } else if (strncmp(str1, str3, 2) == 0) {
            uint8_t rak_data[] = "HELLO RAK!";
            api.ble.uart.write(rak_data, 10);
            Serial.println("HELLO RAK!");
        }

        addr++;
    }
}
