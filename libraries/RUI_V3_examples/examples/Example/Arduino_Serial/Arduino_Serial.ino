
int loopCount = 0;
char readBuf[256];

void setup()
{
    Serial.begin(115200, AT_MODE);
    Serial1.begin(9600, CUSTOM_MODE);

    delay(2000);

    //get the timeout on Serial1  and set it to 2000 
    Serial1.print("Time out: ");
    Serial1.println(Serial1.getTimeout());
    Serial1.println("Set Timeout to 5000");
    Serial1.setTimeout(5000);
    Serial1.print("Time out: ");
    Serial1.println(Serial1.getTimeout());

    //Lock Serial(USB) with password => 12345678
    string password = "12345678";
    Serial.password(password);
    Serial.lock(true);
}

void loop()
{
    int returnBytes = 0;
    string returnString = " ";
    loopCount++;
    Serial.printf("======= Loop Count: %d =======\n", loopCount);

    // After 60seconds close all Serial Port
    if (loopCount == 60) {
        Serial.end();
	Serial1.end();
    }

    Serial1.println("press any word to start reading");
    //In Serial1(UART) type any word will show on screen
    if(Serial1.available() > 0) {
	Serial1.print("peek the first word: ");
        Serial1.println((char)Serial1.peek());
        Serial1.print("read the first word: ");
        Serial1.println((char)Serial1.read());

	//readBytes()
	Serial1.println("Start readByte() please type 5 words in 5seconds");
        returnBytes = Serial1.readBytes(readBuf, 5);
	if(returnBytes == 0)
	    Serial1.println("read nothing");
	else {
	    Serial1.print("Typed: ");
            for (int i=0; i<returnBytes; i++){
                Serial1.print(readBuf[i]);
            }
	    Serial1.println("");
	}
	Serial1.println("");

	//readBytesUntil()
	Serial1.println("Start readBytesUntil() please type 10 words in 5seconds");
	Serial1.println("or Press ENTER to end reading");
	returnBytes = Serial1.readBytesUntil('\r', readBuf, 10);
	if(returnBytes == 0)
	    Serial1.println("read nothing");
	else {
	    Serial1.print("Typed: ");
            for (int i=0; i<returnBytes; i++){
                Serial1.print(readBuf[i]);
            }
	    Serial1.println("");
	}
	Serial1.println("");

	//readString()
	Serial1.println("Start readString() please type any words in 5seconds");
	returnString = Serial1.readString();
	if(returnString == " ")
	    Serial1.println("read nothing");
	else {
	    Serial1.print("Typed: ");
 	    Serial1.println(returnString);
            }
	Serial1.println("");
	
        //readStringUntil()
	Serial1.println("Start readStringUntil() please type any words in 5seconds");
	Serial1.println("or Press ENTER to end reading");
	returnString = Serial1.readStringUntil('\r');
	if(returnString == " ")
	    Serial1.println("read nothing");
	else {
	    Serial1.print("Typed: ");
	    Serial1.println(returnString);
            }
	    Serial1.println("");

    }
    Serial.flush();
    delay(1000);
}

