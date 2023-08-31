
void setup()
{
    Serial.begin(115200);
    Serial.println("RAKwireless RAK4631 Example");
    Serial.println("------------------------------------------------------");

    // Start BLE UART advertisement for 30 seconds
	Serial6.begin(115200, RAK_AT_MODE);
    api.ble.settings.blemode(RAK_BLE_UART_MODE);
	api.ble.uart.start(30);
}

void loop()
{
    /* Destroy this busy loop and use timer to do what you want instead,
     * so that the system thread can auto enter low power mode by api.system.lpm.set(1); */
    api.system.scheduler.task.destroy();
}
