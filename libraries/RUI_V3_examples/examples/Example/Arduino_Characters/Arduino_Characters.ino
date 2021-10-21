
char j; 

void checkCharacter()
{
    for (int i=0; i<6; i++) {
    
	switch(i){
	    case 0:
	        j = ' ';
	        break;
	    case 1:
		j = 'A';
	        break;
	    case 2:
		j = 'a';
	        break;
	    case 3:
		j = '\n';
	        break;
	    case 4:
		j = '1';
	        break;
	    case 5:
		j = '!';
	        break;
	}

	Serial.print(">>>>>>>>>>>>Check Character :");
	Serial.print((String)j);
        Serial.println(" <<<<<<<<<<<");
        if(isWhitespace(j))
            Serial.println("is white space: O");
        else
            Serial.println("is white space: X");
        
        if(isUpperCase(j))
            Serial.println("is uppercase: O");
        else
            Serial.println("is uppercase: X");
        
        if(isSpace(j))
            Serial.println("is space: O");
        else
            Serial.println("is space: X");
        
        if(isPunct(j))
            Serial.println("is punct: O");
        else
            Serial.println("is punct: X");
        
        if(isPrintable(j))
            Serial.println("is printable: O");
        else
            Serial.println("is printable: X");
        
        if(isLowerCase(j))
            Serial.println("is lowercase: O");
        else
            Serial.println("is lowercase: X");
        
        if(isHexadecimalDigit(j))
            Serial.println("is HexadecimalDigit: O");
        else
            Serial.println("is HexadecimalDigit: X");
        
        if(isDigit(j))
            Serial.println("is digit: O");
        else
            Serial.println("is digit: X");
        
        if(isControl(j))
            Serial.println("is control: O");
        else
            Serial.println("is control: X");
        
        if(isAscii(j))
            Serial.println("is ascii: O");
        else
            Serial.println("is ascii: X");
        
        if(isAlphaNumeric(j))
            Serial.println("is AlphaNumeric: O");
        else
            Serial.println("is AlphaNumeric: X");
        
        if(isAlpha(j))
            Serial.println("is alpha: O");
        else
            Serial.println("is alpha: X");
        
        if(isGraph(j))
            Serial.println("is graph: O");
        else
            Serial.println("is graph: X");

	Serial.println("");
    }
}


void setup()
{
    Serial.begin(115200);//UART0 baudrate 115200

    delay(2000);

    Serial.println("check characters START");
    Serial.println("");
    checkCharacter();

}

void loop()
{
}

