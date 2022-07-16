#include "rak1903.h"
#include "math.h"
#include "Wire.h"

rak1903::rak1903()
{
    ID = 0x00;
    LUX = 0;
}

// Config
RAK1903_ErrorCode
rak1903::writeConfig(RAK1903_Config config)
{
    Wire.beginTransmission(RAK1903_ADDRESS);
    Wire.write(RAK1903_CONFIG);
    Wire.write(config.rawData >> 8);
    Wire.write(config.rawData & 0x00FF);
    if (!Wire.endTransmission() == 0)
        return RAK1903_WRONG_ARG;
    return RAK1903_NO_ERROR;

}

// write
RAK1903_ErrorCode
rak1903::sendCommand(RAK1903_Commands cmd)
{
    Wire.beginTransmission(RAK1903_ADDRESS);
    Wire.write(cmd);
    if (!Wire.endTransmission() == 0)
        return RAK1903_WRONG_ARG;
    return RAK1903_NO_ERROR;
}

RAK1903_ErrorCode
rak1903::readData(uint16_t * data)
{
    uint8_t         rx[2];
    if (Wire.requestFrom(RAK1903_ADDRESS, 2) == 0)
        return RAK1903_WRONG_ARG;
    rx[0] = Wire.read();
    rx[1] = Wire.read();

    *data = (rx[0] << 8) | rx[1];
    return RAK1903_NO_ERROR;
}

bool
rak1903::init()
{
    if (!sendCommand(RAK1903_DEVICE_ID) == 0)
	return false;
    if (!readData(&ID) == 0)
	return false;

    setConfig();
    return true;
}

bool
rak1903::update()
{
    init();

    if (!sendCommand(RAK1903_RESULT) == 0)
	return false;
    LUX = 0;

    RAK1903_ER      er;
    if (!readData(&er.rawData) == 0)
	return false;
    LUX = 0.01 * pow(2, er.exponent) * er.result;
    return true;
}

float
rak1903::lux()
{
    return LUX;
}

void
rak1903::setConfig()
{
    RAK1903_Config  newConfig;
    newConfig.RangeNumber = 0x0F;
    newConfig.ConvertionTime = 0x00;
    newConfig.Latch = 0x01;
    newConfig.MaskExponent = 0x00;
    newConfig.ModeOfConversionOperation = 0x01;

    writeConfig(newConfig);

}
