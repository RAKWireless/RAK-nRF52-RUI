
void setup()
{
    Serial.begin(115200); //UART0 baudrate 115200
    delay(5000);
    Serial.println("RAKwireless Arduino Random Example");
    Serial.println("------------------------------------------------------");
    randomSeed(analogRead(0));
}

void loop()
{
    Serial.print("Random number(0 ~ 999) : ");
    uint32_t l = random(1000);
    Serial.println(l);
    delay(1000);
}
