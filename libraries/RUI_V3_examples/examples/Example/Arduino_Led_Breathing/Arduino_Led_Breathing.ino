
int val = 0; // variable to write the LED pin
bool state = false;
bool ledSwitch = false;

void valChage()
{
  state = !state;
  if (val == 0)
    ledSwitch = !ledSwitch;
}

void setup()
{
  Serial.begin(115200);
  delay(5000);
  Serial.println("RAKwireless Arduino LED Breathing Example");
  Serial.println("------------------------------------------------------");
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (val == 0 || val == 255)
    valChage();

  // To determine to make the led lighter or darker
  if (state)
    val++;
  else
    val--;
  // To switch the lighting led
  if (ledSwitch)
    analogWrite(GREEN_LED, val); // Light the green led
  else
    analogWrite(BLUE_LED, val); //Light the blue led
}
