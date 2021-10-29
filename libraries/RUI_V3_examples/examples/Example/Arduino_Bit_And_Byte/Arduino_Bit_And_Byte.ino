
void test_bit()
{
    Serial.println(">>>>Test bit()<<<<<");
    Serial.println("(bit 0 is 1, bit 1 is 2, bit 2 is 4, etc.)");
    Serial.print("bit 0: ");
    Serial.println(bit(0));
    Serial.print("bit 3: ");
    Serial.println(bit(3));

    Serial.println("");
}

void test_bitRead()
{
    Serial.println(">>>>Test bitRead()<<<<<");
    Serial.println("Read the bits of 6(0110)");
    Serial.print("bitRead(6, 0) = ");
    Serial.println(bitRead(6, 0));
    Serial.print("bitRead(6, 1) = ");
    Serial.println(bitRead(6, 1));
    Serial.print("bitRead(6, 2) = ");
    Serial.println(bitRead(6, 2));
    Serial.print("bitRead(6, 3) = ");
    Serial.println(bitRead(6, 3));

    Serial.println("");
}

void test_bitSet()
{
    Serial.println(">>>>Test bitSet()<<<<<");
    Serial.print("Before bitSet(): 6 => ");
    Serial.println(6, BIN);
    Serial.print("After bitSet(6, 0) => ");
    int value = 6;
    int pos = 0;
    Serial.println(bitSet(value, pos), BIN);

    Serial.println("");
}

void test_bitClear()
{
    Serial.println(">>>>Test bitClear()<<<<<");
    Serial.print("Before bitClear(): 6 => ");
    Serial.println(6, BIN);
    Serial.print("After bitClear(6, 1) => ");
    int value = 6;
    int pos = 1;
    Serial.println(bitClear(value, pos), BIN);

    Serial.println("");
}

void test_bitWrite()
{
    Serial.println(">>>>Test bitWrite()<<<<<");
    int target = 6;
    Serial.print("Before bitWrite(): 6 => ");
    Serial.println(target, BIN);
    Serial.print("After bitWrite(target, 0, 1) => ");
    Serial.println(bitWrite(target, 0, 1), BIN);
    Serial.print("After bitWrite(target, 1, 0) => ");
    Serial.println(bitWrite(target, 1, 0), BIN);
    Serial.print("After bitWrite(target, 2, 0) => ");
    Serial.println(bitWrite(target, 2, 0), BIN);
    Serial.print("After bitWrite(target, 3, 1) => ");
    Serial.println(bitWrite(target, 3, 1), BIN);
    Serial.println("");
    Serial.println("target now should be 9(1001)");
    Serial.print("target = ");
    Serial.println(target);

    Serial.println("");
}

void test_lowByte_highByte()
{
    int target = 0xABCD;
    Serial.println(">>>>Test lowByte() and highByte()<<<<<");
    Serial.println("Test target 0xABCD");
    Serial.print("lowByte() of 0xABCD = ");
    Serial.println(lowByte(target), HEX);
    Serial.print("highByte() of 0xABCD = ");
    Serial.println(highByte(target), HEX);

    Serial.println("");
}

void setup()
{
    Serial.begin(115200);
    delay(5000);
    Serial.println("RAKwireless Arduino Bit and Byte Example");
    Serial.println("------------------------------------------------------");

    test_bit();
    test_bitSet();
    test_bitClear();
    test_bitRead();
    test_bitWrite();
    test_lowByte_highByte();
}

void loop()
{
}
