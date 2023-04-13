/***
 *
 *  This example provide a BLE heart rate characteristic and callback function.
 *  While reading corresponding characteristic, the device will print message on console.
 *
***/
#define UUID16_SVC_HEART_RATE 0x180D
#define UUID16_CHR_HEART_RATE_MEASUREMENT 0x2A37
#define UUID16_CHR_BODY_SENSOR_LOCATION 0x2A38

RAKBleCharacteristic hrmc =
RAKBleCharacteristic(UUID16_CHR_HEART_RATE_MEASUREMENT);

void cccd_callback(uint16_t chars_uuid, uint8_t * cccd_value)
{
    if (chars_uuid == UUID16_CHR_HEART_RATE_MEASUREMENT) {
        if (hrmc.notifyEnabled()) {
            Serial.println("[Heart Rate Measurement 'Notify' enabled]");
        } else {
            Serial.println("[Heart Rate Measurement 'Notify' disabled]");
            return;
        }
    }
    //Serial.println((char *)cccd_value);
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
    Serial.println("");
}

void send_callback(uint16_t chars_uuid, uint8_t * send_value)
{
    if (chars_uuid == UUID16_CHR_BODY_SENSOR_LOCATION) {
        Serial.println("[Heart Rate - Body Sensor Location Read!]");
        Serial.print("chars_uuid: ");
        Serial.print("0x");
        String uuid_str = String(chars_uuid, HEX);
        Serial.println(uuid_str);
        Serial.print("send value: ");
        char send_str[4];
        sprintf(send_str, "%d", send_value[0]);
        Serial.println(send_str);
        Serial.println("");

    }
}

void setup()
{
    //Base 128-bit UUID : 0000180D-0000-1000-8000–00805f9b34fb
    //--The 3rd and 4th byte '180D' means Service 16bit UUID
    uint8_t base_uuid[] ={ 
        0x00, 0x00, 0x18, 0x0D, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 
        0x80, 0x5f, 0x9b, 0x34, 0xfb};
  
    Serial.begin(115200);
    delay(2000);
  
    Serial.println("RAKwireless BLE Custom Services Example");
    Serial.println("------------------------------------------------------");
    api.ble.custom.init();
    RAKBleService hrms = RAKBleService(base_uuid);
    RAKBleCharacteristic bslc = RAKBleCharacteristic(UUID16_CHR_BODY_SENSOR_LOCATION);
    hrms.begin();
  
    hrmc.setProperties(RAK_CHR_PROPS_NOTIFY);
    hrmc.setPermission(RAK_SET_OPEN);
    hrmc.setFixedLen(2);
    hrmc.setCccdWriteCallback(cccd_callback);
    hrmc.begin();
    delay(1000);
    uint8_t hrmdata[2] = { 0x39, 0x40 };
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
    uint8_t sensor_location = 2;
    bslc.write(&sensor_location);	// Set the characteristic to 'Wrist' (2)

    api.ble.custom.start();
}

void loop()
{
}
