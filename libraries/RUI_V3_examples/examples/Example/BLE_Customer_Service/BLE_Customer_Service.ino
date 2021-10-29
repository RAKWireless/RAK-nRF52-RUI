#define UUID16_SVC_HEART_RATE 0x180D
#define UUID16_CHR_HEART_RATE_MEASUREMENT 0x2A37
#define UUID16_CHR_BODY_SENSOR_LOCATION 0x2A38

RAKBleCharacteristic hrmc = RAKBleCharacteristic(UUID16_CHR_HEART_RATE_MEASUREMENT);

void cccd_callback(uint16_t chars_uuid, uint8_t *cccd_value)
{
    if (chars_uuid == UUID16_CHR_HEART_RATE_MEASUREMENT)
    {
        if (hrmc.notifyEnabled())
        {
            Serial.println("[Heart Rate Measurement 'Notify' enabled]");
        }
        else
        {
            Serial.println("[Heart Rate Measurement 'Notify' disabled]");
            return;
        }
    }

    //Serial.println((char *)cccd_value);
    Serial.println("");
    Serial.print("chars_uuid: ");
    Serial.print("0x");
    String uuid_str = String(chars_uuid, HEX);
    Serial.println(uuid_str);
    Serial.println("notify value:");

    String cccd_value1 = String(cccd_value[0], HEX);
    String cccd_value2 = String(cccd_value[1], HEX);
    Serial.print("0x");
    Serial.println(cccd_value1);
    Serial.print("0x");
    Serial.println(cccd_value2);
}

void send_callback(uint16_t chars_uuid, uint8_t *send_value)
{
    if (chars_uuid == UUID16_CHR_BODY_SENSOR_LOCATION)
    {
        Serial.println("[Heart Rate - Body Sensor Location Read!]");
        Serial.print("chars_uuid: ");
        Serial.print("0x");
        String uuid_str = String(chars_uuid, HEX);
        Serial.println(uuid_str);
        Serial.println("");
        Serial.print("send value: ");
        char send_str = send_value[0];
        Serial.println(send_str);
    }
}

void setup()
{
    //Base 128-bit UUID : B320F8FA-5AFC-4C1B-B96F-16247D912D0A
    //--The 3rd and 4th byte 'F8FA' means Service 16bit UUID
    uint8_t base_uuid[]={0xB3, 0x20, 0xF8, 0xFA, 0x5A, 0xFC, 0x4C, 0x1B, 0xB9, 0x6F, 0x16, 0x24, 0x7D, 0x91, 0x2D, 0x0A};

    Serial.begin(115200);
    delay(5000);
    Serial.println("RAKwireless BLE Customer Services Example");
    Serial.println("------------------------------------------------------");
    api.ble.customer.init();
    RAKBleService hrms = RAKBleService(base_uuid);
    RAKBleCharacteristic bslc = RAKBleCharacteristic(UUID16_CHR_BODY_SENSOR_LOCATION);
    hrms.begin();

    hrmc.setProperties(RAK_CHR_PROPS_NOTIFY);
    hrmc.setPermission(RAK_SET_OPEN);
    hrmc.setFixedLen(2);
    hrmc.setCccdWriteCallback(cccd_callback);
    hrmc.begin();
    delay(1000);
    uint8_t hrmdata[2] = {0x39, 0x40};
    hrmc.notify(hrmdata);
    delay(1000);
    //Body Sensor Location
    //      0     = Other
    //      1     = Chest
    //      2     = Wrist
    //      3     = Finger
    //      4     = Hand
    //      5     = Ear Lobe
    //      6     = Foot
    //      7:255 = Reserved
    bslc.setProperties(RAK_CHR_PROPS_READ);
    bslc.setPermission(RAK_SET_OPEN);
    bslc.setFixedLen(1);
    bslc.setWriteCallback(send_callback);
    bslc.begin();
    delay(1000);
    uint8_t sensor_location[1] = {'2'};
    bslc.write(sensor_location);            // Set the characteristic to 'Wrist' (2)
    api.ble.customer.start();
}

void loop()
{
}
