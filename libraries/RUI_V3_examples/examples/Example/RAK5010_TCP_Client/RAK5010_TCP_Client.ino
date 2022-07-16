
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
    while(*command)
    {
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
//    if (api.system.timer.create(RAK_TIMER_0, (RAK_TIMER_HANDLER)bg96_read, RAK_TIMER_PERIODIC) != true) {
//        Serial.println("Creating timer failed");
//    } else if (api.system.timer.start(RAK_TIMER_0, 1000, NULL) != true) { // Set the period you like ,Default 1 second
//        Serial.println("Starting timer failed");
//    }

    // Send "AT" to check BG96 is working
    command = "AT\r";
    bg96_write(command.c_str());

    // set up Band configuaration
    command = "AT+QCFG=\"band\",0,8000000,8000000,1 \r";
    bg96_write(command.c_str());

    // Configure RAT(s) to be searched
    command = "AT+QCFG=\"nwscanseq\",030201,1\r";
    bg96_write(command.c_str());

    // Check the Network Registration status
    command = "AT+CGREG?\r";
    bg96_write(command.c_str());

    // Enable automatic time zone update via NITZ
    command = "AT+CTZU=1\r";
    bg96_write(command.c_str());

    // Configure Parameters of a TCP/IP Context 
    command = "AT+QICSGP=1,1,\"nbiot\",\"\",\"\",1\r";
    bg96_write(command.c_str());
    delay(1000);

    // Define PDP Context
    command = "AT+CGDCONT=1,\"IP\",\"nbiot\"\r";
    bg96_write(command.c_str());

    // Operator Selection
    command = "AT+COPS=1,0,\"Far EasTone\",9\r";
    bg96_write(command.c_str());
    Serial.printf("\r\nSetup the Operators setting during 20sec after APN is ready:\r\n");
    delay(20000);
    command = "AT+COPS?\r";
    bg96_write(command.c_str());

    // Deactivate a PDP Context 
    command = "AT+QIDEACT=1\r";
    bg96_write(command.c_str());

    // Activate a PDP Context
    command = "AT+QIACT=1\r";
    bg96_write(command.c_str());

    // Open a Socket Service
    command = "AT+QIOPEN=1,0,\"TCP\",\"18.141.176.0\",7000,0,0\r";
    bg96_write(command.c_str());
    delay(2000); //Wait for the socket open

}

void loop()
{
    // Send Hex String
    command = "AT+QISENDEX=0,\"313233343536\"\r";
    bg96_write(command.c_str());

    delay(10000);
}

