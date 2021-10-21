
uint8_t ledPin = 36; 
uint8_t pulsePin = 13;
unsigned long duration;

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  duration = pulseIn(pulsePin, LOW);
  Serial.print("Pulse duration = ");
  Serial.print((float)duration/1000000);
  Serial.println(" sec");

  if(duration >= 15000000)
    noTone(ledPin);
  else if(duration >= 10000000)
    tone(ledPin, 494, 5000);
  else if(duration >= 5000000)
    tone(ledPin, 494);


}
