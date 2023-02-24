
#ifndef rak5010
#error "Please select WisTrio Cellular RAK5010 Board and compile again"
#endif


String command; //String to store BG96 commnads
//Read data from BG96

void bg96_read() {
    while(Serial1.available()>0) {
        Serial.print((char)Serial1.read());
        delay(1);
    }

}

//Write commnads to BG96
void bg96_write(const char *command) {
    while(*command){
        Serial1.write(*command);
        command++;
    }
    delay(1000);
}

void setup()
{
    Serial.begin(115200);
    Serial1.begin(115200, RAK_CUSTOM_MODE); // Serial1 on RAK5010 is connecting to BG96 internally
    delay(1000);

    // NOTE:While turning Off "Auto Display Cellular Response" on ArduinoIDE menu, make sure open the code below
    //      Otherwise you will miss the response from BG96. 
    // Setup a timer to get data from BG96
    if (api.system.timer.create(RAK_TIMER_0, (RAK_TIMER_HANDLER)bg96_read, RAK_TIMER_PERIODIC) != true) {
        Serial.println("Creating timer failed");
    } else if (api.system.timer.start(RAK_TIMER_0, 1000, NULL) != true) { // Set the period you like ,Default 1 second
        Serial.println("Starting timer failed");
    }

    // Send "AT" to check BG96 is working
    command = "AT\r";
    bg96_write(command.c_str());

    // Turn on GNSS
    command = "AT+QGPS=1\r";
    bg96_write(command.c_str());
}

void loop()
{
    // Setting up the Latitude and longitude display format
    command = "AT+QGPSLOC=1\r";
    bg96_write(command.c_str());

    // Acquire Positioning Information
    command = "AT+QGPSLOC?\r";
    bg96_write(command.c_str());
    
    // Acquire NMEA Sentences with GSV type
    command = "AT+QGPSGNMEA=\"GSV\"\r";
    bg96_write(command.c_str());

    delay(10000);
}
