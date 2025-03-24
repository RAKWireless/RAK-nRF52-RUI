
extern const char *sw_version;

void setup()
{
    uint32_t baudrate = Serial.getBaudrate();
    Serial.begin(baudrate);
    Serial.println("RAKwireless RAK11160");
    Serial.println("------------------------------------------------------");
    Serial.printf("Version: %s\r\n", sw_version);

    // Set ESP module power mode (options: POWER_ON, POWER_OFF)
    setEspPowerMode(POWER_ON);

    // Set the current AT command mode (options: LORA_AT_MODE, ESP_AT_MODE)
    setCurrentATMode(LORA_AT_MODE);
}

void loop()
{
    /* Destroy this busy loop and use timer to do what you want instead,
     * so that the system thread can auto enter low power mode by api.system.lpm.set(1); */
    api.system.scheduler.task.destroy();
}
