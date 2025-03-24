
void sendCommand(const String &command);
int8_t waitForResponse(const String &expectedResponse, unsigned long timeoutMs);

extern const char *sw_version;
String command; //String to store ESP32C2 commnads
String response; // String to store the response from Serial1

void setup()
{
    uint32_t baudrate = Serial.getBaudrate();
    Serial.begin(baudrate);
    Serial.println("RAKwireless RAK11160");
    Serial.println("------------------------------------------------------");
    Serial.printf("Version: %s\r\n", sw_version);

    // Set ESP module power mode (options: POWER_ON, POWER_OFF)
    setEspPowerMode(POWER_ON);

    // Set the current AT command mode (options: LORA_AT_MODE, ESP_AT_MODE)
    setCurrentATMode(LORA_AT_MODE);


    if ( waitForResponse("ready", 5000)) {
        Serial.println("Failed to receive esp32c2 ready log!");
        return; // Stop execution if response is not received
    }

    sendCommand("AT\r\n");
    if ( waitForResponse("OK", 5000)) {
        Serial.println("Failed to receive OK for AT command!");
        return; // Stop execution if response is not received
    }
    
    sendCommand("AT+CWJAP=\"RAK\",\"password\"\r\n");
    if ( waitForResponse("OK", 5000)) {
        Serial.println("Failed to receive OK for AT command!");
        return; // Stop execution if response is not received
    }

    sendCommand("AT+MQTTUSERCFG=0,1,\"subscriber\",\"emqx\",\"public\",0,0,\"\"\r\n");
    if ( waitForResponse("OK", 5000)) {
        Serial.println("Failed to receive OK for AT command!");
        return; // Stop execution if response is not received
    }

    sendCommand("AT+MQTTCONN=0,\"broker.emqx.io\",1883,1\r\n");
    if ( waitForResponse("+MQTTCONNECTED", 5000)) {
        Serial.println("Failed to receive OK for AT command!");
        return; // Stop execution if response is not received
    }

    sendCommand("AT+MQTTSUB=0,\"test/tem\",1\r\n");
    if ( waitForResponse("OK", 5000)) {
        Serial.println("Failed to receive OK for AT command!");
        return; // Stop execution if response is not received
    }
    
}

void loop()
{
    //The information from the ESP32C2 serial port is directly printed to the serial monitor.
    while (Serial1.available() > 0) { 
        char c = (char)Serial1.read(); 
        Serial.print(c);               
    }
}


void esp32c2_read() {
    String response = ""; // Clear the response string

    // Read data from Serial1
    while (Serial1.available() > 0) {
        char c = (char)Serial1.read(); // Read one character from Serial1
        response += c; // Append the character to the response string
        delay(10); // Small delay to allow more data to arrive
    }

    // Print the response only if data was received
    if (response.length() > 0) {
        Serial.print("Response: ");
        Serial.println(response);
    }
}


void sendCommand(const String &command) {
    Serial.print("TX <== "); 
    Serial.println(command); 
    Serial1.write(command.c_str()); 
}


int8_t waitForResponse(const String &expectedResponse, unsigned long timeoutMs) {
    unsigned long startTime = millis(); // Record the start time
    response = ""; // Clear the response string

    while (millis() - startTime < timeoutMs) {
        // Read data from Serial1
        while (Serial1.available() > 0) {
            char c = (char)Serial1.read(); // Read one character from Serial1
            response += c; // Append the character to the response string
            delay(10); // Small delay to allow more data to arrive
        }

        //response.trim();

        // Check if the response contains the expected string
        if (response.indexOf(expectedResponse) != -1) {
            Serial.print("Rx ==> ");
            Serial.println(response);
            return 0; // Return 0 if the expected response is found
        }
    }

    // Timeout reached
    Serial.println("Timeout waiting for response!");
    return -1; // Return -1 if the expected response was not received
}