/***
 *
 *  This example will scan the Bluetooth signal around the device.
 *
***/


void string2hexString(char *input, char *output, uint16_t data_len)
{
    int loop;
    int i;
    i = 0;
    loop = 0;
  
    while (loop < data_len) {
        sprintf((char *) (output + i), "%02X ", input[loop]);
        loop += 1;
        i += 3;
    }
    output[i++] = '\0';
}

void scan_callback(int8_t rssi_value, uint8_t * device_mac,
		   uint8_t * scan_data, uint16_t data_len)
{
    char mac_addr[64] = { 0 };
    int hextostr_length = (data_len * 2) + data_len;
    char hex_str[hextostr_length];
    string2hexString((char *) scan_data, hex_str, data_len);
    sprintf(mac_addr, "%02x:%02x:%02x:%02x:%02x:%02x",
        device_mac[5], device_mac[4], device_mac[3],
        device_mac[2], device_mac[1], device_mac[0]);
    Serial.println("\r\n____________________________________________________________________");
    Serial.print(mac_addr);
    Serial.print("\t");
    Serial.print(rssi_value);;
    Serial.print("\t");
    for (int i = 0; i < hextostr_length; i += 3) {
        if (i % 30 == 0 && i != 0) {
            Serial.print("\r\n");
            Serial.print("\t");
            Serial.print("\t");
            Serial.print("\t");
            Serial.print("\t");
            Serial.print(hex_str[i]);
            if (i + 1 <= hextostr_length)
                Serial.print(hex_str[i + 1]);
            if (i + 2 <= hextostr_length)
                Serial.print(hex_str[i + 2]);
        } else {
            Serial.print(hex_str[i]);
            if (i + 1 <= hextostr_length)
                Serial.print(hex_str[i + 1]);
            if (i + 2 <= hextostr_length)
                Serial.print(hex_str[i + 2]);
        }
    }
}

void setup()
{
    bool ret;
    Serial.begin(115200);
    delay(2000);

    Serial.println("RAKwireless BLE Scanner Example");
    Serial.println("------------------------------------------------------");
    api.ble.scanner.start(0);
    if (!(ret = api.ble.scanner.setInterval(1000, 500))) {
        Serial.printf("BLE Configuration - set broadcast name is incorrect! \r\n");
        return;
    }
    api.ble.scanner.setScannerCallback(scan_callback);
    Serial.println("\r\n==== Example : BLE Scanner ====");
    Serial.print("MAC Address");
    Serial.print("\t");
    Serial.print("\t");
    Serial.print("RSSI");
    Serial.print("\t");
    Serial.print("RAW Data\r\n");
}

void loop()
{
}
