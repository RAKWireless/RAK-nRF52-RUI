

/*Adversting data can be created by users, and BLE advertisements can only contain up to 31 bytes of data in their payload.
Here is an Exampl: 
Bluetooth Low Energy Beacons can advertise web addresses.
The URLs have to be in Eddystone format. 
Data : 02 01 06 03 03 aa fe 12 16 aa fe 10 EC 01 72 61 6b 77 69 72 65 6c 65 73 73 07
  0x02, 0x01,   // BLE specific constants
  0x06,         // Flags
  0x03,         // Length of Service List
  0x03,         // Param: Service List
  0xAA, 0xFE,   // Eddystone ID
  0x12,         // Length of Service Data
  0x16,         // Service Data
  0xAA, 0xFE,   // Eddystone ID
  0x10,         // Frame type: URL
  0xF8,         // Power: -8dBm
  0x01,         // https://www.
  0x72,         //r
  0x61,         //a
  0x6b,         //k
  0x77,         //w
  0x69,         //i 
  0x72,         //r 
  0x65,         //e
  0x6C,         //l 
  0x65,         //e 
  0x73,         //s 
  0x73,         //s
  0x07,         //.com
*/
uint8_t cus_adv_url[]={0x02, 0x01, 0x06, 0x03, 0x03, 0xAA, 0xFE, 0x12, 0x16, 0xAA, 0xFE, 0x10, 0xF8, 0x01, 0x72, 0x61, 0x6B, 0x77, 0x69, 0x72, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x07};
void setup()
{
    api.ble.settings.blemode(RAK_BLE_BEACON_MODE);
    api.ble.beacon.custom.payload.set(cus_adv_url, 26);
}

void loop()
{
}
