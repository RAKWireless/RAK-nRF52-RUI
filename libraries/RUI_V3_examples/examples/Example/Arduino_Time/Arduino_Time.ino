
long delayTime = 1000;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Serial.println("Now Time:");
    Serial.print("millis(): ");
    Serial.println(millis());
    Serial.print("micros(): ");
    Serial.println(micros());

    Serial.printf("After Delay %d milliseconds\n", delayTime);
    delay(delayTime);
    Serial.print("millis(): ");
    Serial.println(millis());
    Serial.print("micros(): ");
    Serial.println(micros());

    Serial.printf("After Delay %d microseconds\n", delayTime);
    delayMicroseconds(delayTime);
    Serial.print("millis(): ");
    Serial.println(millis());
    Serial.print("micros(): ");
    Serial.println(micros());


    Serial.println("");

    delayTime += 1000;

    delay(5000);
}
