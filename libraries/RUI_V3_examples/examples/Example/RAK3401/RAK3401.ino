
void setup()
{
  Serial.println("RAKwireless RAK3401 Example");
  Serial.println("------------------------------------------------------");
}

void loop()
{
  /* Destroy this busy loop and use timer to do what you want instead,
   * so that the system thread can auto enter low power mode by api.system.lpm.set(1); */
   Serial.println("RAK3401");
   api.system.sleep.all(10000);
}
