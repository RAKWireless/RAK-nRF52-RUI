/******************************************************************************************************
* This use case will demonstrate the use of the BLE custom API
  * to create a application scenario case.
  *
  * Theapplication is made with AK4631 and RAK1901
  * (WisBlock Temperature and Humidity Sensor).
  * This use case is used to demonstrate measuring the working environment temperature of the factory
  * To achieve the purpose of remote monitoring in high temperature working environment
 ********************************************************************************************************
 */
/*************************************
 * Download RAK1901 library from https://downloads.rakwireless.com/RUI/RUI3/Library/
 * Besides, install them into Arduino IDE
 *************************************/
#include "rak1901.h"
#define CUS_BLE_UUID_TEMPERATURE_MEASUREMENT_CHAR 0x2A1C
#define CUS_BLE_TEMPERATURE_MEASUREMENT_CHAR_LEN 13

/** Temperature & Humidity sensor **/
rak1901 th_sensor;

/*
Please refer to Health Thermometer Service 1.0 spec by Bluetooth SIG to fill in Temperature Measurement characteristic
   [01] Flags Field
[02-05] Temperature Measurement Value Field
[06-12] Time Stamp Field
   [13] Temperature Type Field
Take the use case, only demonstrate the use of RAK1901 for temperature sensing, and modify the [02~05] Temperature Measurement Value Field for transmission.
*/
uint8_t hts_tmep[CUS_BLE_TEMPERATURE_MEASUREMENT_CHAR_LEN] =
    { 0x06, 0x00, 0x0A, 0x00, 0xFD, 0xE5, 0x07, 0x0A, 0x03, 0x0A, 0x0A,
0x01, 0x04 };
uint32_t encoded_tmeperature;
uint32_t celciusX100;
RAKBleCharacteristic htsc =
RAKBleCharacteristic(CUS_BLE_UUID_TEMPERATURE_MEASUREMENT_CHAR);

void cccd_callback(uint16_t chars_uuid, uint8_t * cccd_value)
{
    if (chars_uuid == CUS_BLE_UUID_TEMPERATURE_MEASUREMENT_CHAR) {
        if (htsc.notifyEnabled()) {
            Serial.println("[TEMPERATURE MEASUREMENT 'Notify' Enabled]");
        } else {
            Serial.println("[TEMPERATURE MEASUREMENT 'Notify' Disabled]");
            return;
        }
    }
  
    Serial.print("characteristic UUID :  ");
    Serial.print("0x");
    Serial.printf("%02X ", chars_uuid);
    Serial.println("");
  
    Serial.print("notify value : ");
    for (int i = 0; i < CUS_BLE_TEMPERATURE_MEASUREMENT_CHAR_LEN; i++) {
        Serial.print("0x");
        Serial.printf("%02X ", cccd_value[i]);
    }
    Serial.println("");
}

void setup()
{
    Serial.begin(115200);

    Serial.println("RAKwireless Environment Detect Example");
    Serial.println("------------------------------------------------------");

    Wire.begin();
    // check if snesor Rak1901 is work
    if (th_sensor.init())
        Serial.println("Rak1901 init success");
    else 
        Serial.println("Rak1901 init fail");

    //Base 128-bit UUID (SIG Base) : 0x0000xxxx-0000-1000-8000-00805F9B34FB
    //--The 3rd and 4th byte '1809' means Service 16bit UUID

    uint8_t base_uuid[] ={   
        0x00, 0x00, 0x18, 0x09, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00,
        0x80, 0x5F, 0x9B, 0x34, 0xFB };
    api.ble.custom.init();
    RAKBleService hts = RAKBleService(base_uuid);
    hts.begin();

    htsc.setProperties(RAK_CHR_PROPS_NOTIFY);
    htsc.setPermission(RAK_SET_OPEN);
    htsc.setFixedLen(CUS_BLE_TEMPERATURE_MEASUREMENT_CHAR_LEN);
    htsc.setCccdWriteCallback(cccd_callback);
    htsc.begin();
    delay(1000);

    api.ble.custom.start();
}

void loop()
{
    if (th_sensor.update()) {
        Serial.println("--------------------");
        Serial.print("Temperature : ");
        Serial.println(th_sensor.temperature());
        Serial.println("--------------------");
    
        celciusX100 = (th_sensor.temperature() * 100);
        encoded_tmeperature =
    	((-2 << 24) & 0xFF000000) | ((celciusX100 << 0) & 0x00FFFFFF);
    
        hts_tmep[1] = (uint8_t) ((encoded_tmeperature & 0x000000FF) >> 0);
        hts_tmep[2] = (uint8_t) ((encoded_tmeperature & 0x0000FF00) >> 8);
        hts_tmep[3] = (uint8_t) ((encoded_tmeperature & 0x00FF0000) >> 16);
        hts_tmep[4] = (uint8_t) ((encoded_tmeperature & 0xFF000000) >> 24);
    
        htsc.notify(hts_tmep);
    } else {
        Serial.println("Please plug in the sensor RAK1901");
    }
  
    delay(2000);
}
