
void setup()
{
  bool ret;
  Serial.begin(115200);
  delay(10000);
  Serial.println("RAKwireless BLE Configuration Example");
  Serial.println("------------------------------------------------------");

  api.ble.uart.start();
  bool get_dav_status = api.ble.advertise.status();
  Serial.print("Get BLE Advertising status : ");
  Serial.println(get_dav_status);
  if (get_dav_status) {
    Serial.
	println("================= Set Configuration =================");
    api.ble.settings.txPower.set(8);
    if (!(ret = api.ble.settings.advertiseInterval.set(2000))) {
      Serial.
	  printf
	  ("BLE Configuration - set advertise interval is incorrect! \r\n");
      return;
    }
    char dev_name[12] =
	{ 'R', 'A', 'K', 'B', 'L', 'E', '-', '4', '6', '3', '1', '\0' };
    if (!(ret = api.ble.settings.broadcastName.set(dev_name, 12))) {
      Serial.
	  printf
	  ("BLE Configuration - set broadcast name is incorrect! \r\n");
      return;
    }
    Serial.print("Set BLE Advertising Name : ");
    Serial.println(dev_name);
    Serial.println("Set BLE TX Power : 8");
    Serial.println("Set BLE Advertising Interval : 2000");
    if (!(ret = api.ble.advertise.start(60))) {
      Serial.
	  printf
	  ("BLE Configuration - set start advertise parameter is incorrect! \r\n");
      return;
    }
    Serial.
	println("+++++++++++++++++ START Advertising +++++++++++++++++");
    Serial.
	println("================= Get Configuration =================");
    int8_t get_pwr = api.ble.settings.txPower.get();
    int32_t get_adv_interval = api.ble.settings.advertiseInterval.get();
    char *get_position_2_mac_addr = api.ble.mac.get(2);
    char *get_adv_name = api.ble.settings.broadcastName.get();
    Serial.print("Get BLE Advertising Name : ");
    Serial.println(get_adv_name);
    Serial.print("Get BLE Advertising status : ");
    Serial.println(get_dav_status);
    Serial.print("Get BLE position[2] MAC Address : ");
    Serial.println(get_position_2_mac_addr);
    Serial.print("Get BLE TX Power : ");
    Serial.println(get_pwr);
    Serial.print("Get BLE Advertising Interval : ");
    Serial.println(get_adv_interval);

  }
}

void loop()
{
}
