#include "rak1901.h"
#include "rak1902.h"

/** Temperature & Humidity sensor **/
rak1901 th_sensor;
/** Air Pressure sensor **/
rak1902 p_sensor;

/** Packet buffer for sending */
uint8_t collected_data[64] = {0};

void setup()
{
  api.ble.uart.stop();  // Stop BLE broadcast
  
  Serial.begin(115200, AT_MODE); 

  pinMode(LED_GREEN, OUTPUT);
  digitalWrite(LED_GREEN, HIGH);
  pinMode(LED_BLUE, OUTPUT);
  digitalWrite(LED_BLUE, HIGH);

  // OTAA Device EUI MSB
  uint8_t node_device_eui[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x88};
  // OTAA Application EUI MSB
  uint8_t node_app_eui[8] = {0x0E, 0x0D, 0x0D, 0x01, 0x0E, 0x01, 0x02, 0x0E};
  // OTAA Application Key MSB
  uint8_t node_app_key[16] = {0x2B, 0x7E, 0x15, 0x16, 0x28, 0xAE, 0xD2, 0xA6, 0xAB, 0xF7, 0x15, 0x88, 0x09, 0xCF, 0x4F, 0x3E};

  api.lorawan.appeui.set(node_app_eui, 8);  // Set the LoRawan AppEUI
  api.lorawan.appkey.set(node_app_key, 16); // Set the LoRaWan AppKey
  api.lorawan.deui.set(node_device_eui, 8); // Set the LoRaWan DeviceEUI
  /*************************************

     LoRaWAN band setting:
       EU433: 0
       CN470: 1
       RU864: 2
       IN865: 3
       EU868: 4
       US915: 5
       AU915: 6
       KR920: 7
       AS923: 8

   * ************************************/

  api.lorawan.band.set(RAK_REGION_EU868); // Set the LoRa region to EU868
  api.lorawan.deviceClass.set(0);
  api.lorawan.njm.set(RAK_LORA_OTAA);     // Set the network join mode to OTAA
  api.lorawan.join();                     // Join to Gateway

  Serial.println("++++++++++++++++++++++++++");
  Serial.println("RUI V3 Environment Sensing");
  Serial.println("++++++++++++++++++++++++++");

  Wire.begin(); // Start I2C Bus
  Serial.printf("RAK1901 init %s\n\r", th_sensor.init() ? "success" : "fail"); // Check if RAK1901 init success
  Serial.printf("RAK1902 init %s\n\r", p_sensor.init() ? "success" : "fail");  // Check if RAK1902 init success
  
  /**Wait for Join success */
  while (api.lorawan.njs.get() == 0)
  {
    Serial.print("Waiting for Lorawan join...");
    api.lorawan.join();
    delay(10000);
  }
  digitalWrite(LED_GREEN, LOW);
  api.lorawan.adr.set(true);
  api.lorawan.rety.set(1);
  api.lorawan.cfm.set(1);

  /**Check LoRaWan Status*/
  Serial.printf("Dutycycle is %s\n", api.lorawan.dcs.get() ? "ON" : "OFF");             // Check Duty Cycle status
  Serial.printf("Packet is %s\n", api.lorawan.cfm.get() ? "CONFIRMED" : "UNCONFIRMED"); // Check Confirm status
  uint8_t assigned_dev_addr[4] = {0};
  api.lorawan.daddr.get(assigned_dev_addr, 4);
  Serial.printf("Assigned DevAddress = %02X%02X%02X%02X\n", assigned_dev_addr[3], assigned_dev_addr[2], assigned_dev_addr[1], assigned_dev_addr[0]); // Check Device Address
  digitalWrite(LED_BLUE, LOW);
  Serial.println("");
}

void loop()
{
  digitalWrite(LED_BLUE, HIGH);

  // Get sensor RAK1901 values
  th_sensor.update();

  float temp_f = th_sensor.temperature();
  float humid_f = th_sensor.humidity();
  float press_f = p_sensor.pressure(MILLIBAR);
  Serial.printf("T %.2f H %.2f P %.2f\n\r", temp_f, humid_f, press_f);

  uint16_t t = (uint16_t)(temp_f * 100.0);
  uint16_t h = (uint16_t)(humid_f * 100.0);
  uint32_t pre = (uint32_t)(press_f * 100.0);
  uint16_t batt = (uint16_t)(api.system.bat.get() * 100);

  /**Payload of Uplink*/
  uint8_t data_len = 0;
  collected_data[data_len++] = 0x01;
  collected_data[data_len++] = (uint8_t)(t >> 8);
  collected_data[data_len++] = (uint8_t)t;
  collected_data[data_len++] = (uint8_t)(h >> 8);
  collected_data[data_len++] = (uint8_t)h;
  collected_data[data_len++] = (uint8_t)((pre & 0xFF000000) >> 24);
  collected_data[data_len++] = (uint8_t)((pre & 0x00FF0000) >> 16);
  collected_data[data_len++] = (uint8_t)((pre & 0x0000FF00) >> 8);
  collected_data[data_len++] = (uint8_t)(pre & 0x000000FF);
  collected_data[data_len++] = 0; // No gas sensor in this system
  collected_data[data_len++] = 0;
  collected_data[data_len++] = 0;
  collected_data[data_len++] = 0;
  collected_data[data_len++] = (uint8_t) (batt >> 8);
  collected_data[data_len++] = (uint8_t) batt;

  Serial.println("Data Packet:");
  for (int i = 0; i < data_len; i++)
  {
    Serial.printf("0x%02X ", collected_data[i]);
  }
  Serial.println("");

  /** Send the data package */
  if (api.lorawan.send(data_len, (uint8_t *)&collected_data, 2, true, 1))
  {
    Serial.println("Send success");
  }
  else
  {
    Serial.println("Send failed");
  }
  
  digitalWrite(LED_BLUE, LOW);

  Serial.printf("Keep radio & MCU truned on for %u ms (RX2 delay)\r\n", api.lorawan.rx2dl.get()*1000);
  delay(api.lorawan.rx2dl.get()*1000);
  delay(4000);//additional processing time
  api.system.sleep.all(20000);
}
