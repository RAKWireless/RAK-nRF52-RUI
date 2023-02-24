#include "rak1901.h"


rak1901::rak1901()
{
    RH = 0x00;
    T = 0x00;
    ID = 0x00;
    isInit = false;
}

// write
bool
rak1901::sendCommand(SHTC3_Commands_TypeDef cmd)
{
    Wire.beginTransmission(SHTC3_ADDR_7BIT);
    Wire.write(((uint16_t) cmd) >> 8);
    Wire.write(((uint16_t) cmd & 0x00FF));
    if (!Wire.endTransmission() == 0)
	return false;
    return true;
}

bool
rak1901::wakeup()
{
    if (sendCommand(SHTC3_CMD_WAKE))
	return true;
    return false;
}


bool
rak1901::sendCommand(SHTC3_MeasurementModes_TypeDef cmd)
{
    return sendCommand((SHTC3_Commands_TypeDef) cmd);
}

bool
rak1901::init()
{
    Wire.beginTransmission(SHTC3_ADDR_7BIT);
    if (!Wire.endTransmission() == 0)
	return false;
    return true;
}

void
rak1901::sleep()
{
    sendCommand(SHTC3_CMD_SLEEP);

}

// update Tmp and Humi
bool
rak1901::update()
{
    if (!wakeup()) {
	resetValue();
	return false;
    }
    delay(3);

    // init
    uint8_t         RHhb = 0x00;
    uint8_t         RHlb = 0x00;
    uint8_t         RHcs = 0x00;

    uint8_t         Thb = 0x00;
    uint8_t         Tlb = 0x00;
    uint8_t         Tcs = 0x00;

    // write
    if (!sendCommand(SHTC3_CMD_CSE_TF_NPM)) {
	resetValue();
	return false;
    }

    // read 6bytes
    Wire.requestFrom(SHTC3_ADDR_7BIT, 6);
    Thb = Wire.read();
    Tlb = Wire.read();
    Tcs = Wire.read();

    RHhb = Wire.read();
    RHlb = Wire.read();
    RHcs = Wire.read();

    // Update values
    RH = ((uint16_t) RHhb << 8) | ((uint16_t) RHlb << 0);
    T = ((uint16_t) Thb << 8) | ((uint16_t) Tlb << 0);

    // into sleep mode everytime after update
    sleep();
    return true;
}

void
rak1901::resetValue()
{
    RH = 0;
    T = 0;
}

float
rak1901::temperature()
{
    return SHTC3_raw2DegC(T);
}

float
rak1901::humidity()
{
    return SHTC3_raw2Percent(RH);
}

float
SHTC3_raw2DegC(uint16_t T)
{
    return -45 + 175 * ((float) T / 65535);
}

float
SHTC3_raw2DegF(uint16_t T)
{
    return SHTC3_raw2DegC(T) * (9.0 / 5) + 32.0;
}

float
SHTC3_raw2Percent(uint16_t RH)
{
    return 100 * ((float) RH / 65535);
}
