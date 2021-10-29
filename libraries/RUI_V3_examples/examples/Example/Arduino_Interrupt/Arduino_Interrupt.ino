
uint8_t ledPin = 36;
uint8_t interruptPin = 13;
volatile byte state = LOW;
long startTime = 0;
int loopCount = 0;

void blink()
{
    state = !state;
    Serial.println(loopCount);
}

void setup()
{
    Serial.begin(115200);
    delay(5000);
    Serial.println("RAKwireless Arduino Interrupt Example");
    Serial.println("------------------------------------------------------");
    pinMode(ledPin, OUTPUT);
    pinMode(interruptPin, INPUT_PULLUP);
    attachInterrupt(interruptPin, blink, CHANGE);
    startTime = millis();
}

void loop()
{
    Serial.println(millis() - startTime);

    //After 20sec will disable ISR for pin13
    if (millis() - startTime >= 20 * 1000)
        detachInterrupt(13);

    noInterrupts();

    loopCount++;

    interrupts();

    digitalWrite(ledPin, state);
}
