
void setup()
{
    Serial.begin(115200);

    Serial.println("RAKwireless RAK5010 Example");
    Serial.println("------------------------------------------------------");

    // begin for I2C
    Wire.begin();

    Serial.printf("SHTC3 init %s\r\n", sensor.shtc3.init() ? "Success" : "Fail");
    Serial.printf("LPS22HB init %s\r\n", sensor.lps22hb.init() ? "Success" : "Fail");
    Serial.printf("OPT3001 init %s\r\n", sensor.opt3001.init() ? "Success" : "Fail");
    Serial.printf("LIS3DH init %s\r\n", sensor.lis3dh.init() ? "Success" : "Fail");
}

void loop()
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

    delay(5000);
}
