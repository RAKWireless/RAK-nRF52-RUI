
void setup()
{
    Serial.begin(115200);
    api.ble.uart.start();
    bool get_dav_status = api.ble.advertise.status();
    if( get_dav_status)
    {
        delay(5000);
        Serial.println("==========Example : BLE configuration==========");
        Serial.println("================= Setting =================");
        api.ble.settings.txPower.set(8);
        api.ble.settings.advertiseInterval.set(2000);
        char dev_name[12] = {'R', 'A', 'K', 'B', 'L', 'E', '-', '4', '6', '3', '1', '\0'};
        api.ble.settings.broadcastName.set(dev_name, 12);
        Serial.print("Get BLE Advertising status : ");
        Serial.println(get_dav_status);
        Serial.print("Set BLE Advertising Name : ");
        Serial.println(dev_name);
        Serial.println("Set BLE TX Power : 8");
        Serial.println("Set BLE Advertising Interval : 2000");
        api.ble.advertise.start(60);
        Serial.println("+++++++++++++++++ START Advertising +++++++++++++++++");

        Serial.println("================= Get Configuration =================");
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
