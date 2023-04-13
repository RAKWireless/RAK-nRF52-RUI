
#ifndef rak5010
#error "Please select WisTrio Cellular RAK5010 Board and compile again"
#endif

int get_sensor(SERIAL_PORT port, char *cmd, stParam * param)
{
   // SHTC3
    if (sensor.shtc3.update()) {
        Serial.println("SHTC3:");
        Serial.printf("Temperature = %.2f。C\r\n", sensor.shtc3.temperature());
        Serial.printf("Humidity = %.2f%%\r\n", sensor.shtc3.humidity());
        Serial.println("---------------------------------------------------");
    } else {
        Serial.println("SHTC3 update fail!");
    }

    // LPS22HB
    Serial.println("LPS2X:");
    Serial.printf("Pressure = %.2f hPa\r\n", sensor.lps22hb.pressure()); 
    Serial.println("---------------------------------------------------");

    // OPT3001
    if (sensor.opt3001.update()) {
        Serial.println("OPT3001:");
        Serial.printf("Light = %.2f lux\r\n", sensor.opt3001.lux());
        Serial.println("---------------------------------------------------");
    } else {
        Serial.println("OPT3001 update fail!");
    }

    // LIS2DH
    if (sensor.lis3dh.update()) {
        Serial.println("LIS3DH:");
        Serial.printf("The X  acceleration = %.2f\r\n", sensor.lis3dh.x());
        Serial.printf("The Y  acceleration = %.2f\r\n", sensor.lis3dh.y());
        Serial.printf("The Z  acceleration = %.2f\r\n", sensor.lis3dh.z());
        Serial.println("===================================================");
    } else {
        Serial.println("LIS3DH update fail!");
    }
  return AT_OK;
}

void setup()
{
    uint32_t baudrate = Serial.getBaudrate();
    Serial.begin(baudrate);

    Serial.println("RAKwireless RAK5010");
    Serial.println("------------------------------------------------------");

    // begin for I2C
    Wire.begin();

    api.system.atMode.add("SENSOR", "This get sensor data.",
      "SENSOR", get_sensor);
}

void loop()
{
}
