#include "rak1904.h"
#include "Wire.h"

// Device Registers
#define RAK1904_STATUS_REG_AUX         0x07
#define RAK1904_OUT_ADC1_L             0x08
#define RAK1904_OUT_ADC1_H             0x09
#define RAK1904_OUT_ADC2_L             0x0A
#define RAK1904_OUT_ADC2_H             0x0B
#define RAK1904_OUT_ADC3_L             0x0C
#define RAK1904_OUT_ADC3_H             0x0D
#define RAK1904_INT_COUNTER_REG        0x0E
#define RAK1904_WHO_AM_I               0x0F

#define RAK1904_TEMP_CFG_REG           0x1F
#define RAK1904_CTRL_REG1              0x20
#define RAK1904_CTRL_REG2              0x21
#define RAK1904_CTRL_REG3              0x22
#define RAK1904_CTRL_REG4              0x23
#define RAK1904_CTRL_REG5              0x24
#define RAK1904_CTRL_REG6              0x25
#define RAK1904_REFERENCE              0x26
#define RAK1904_STATUS_REG2            0x27
#define RAK1904_OUT_X_L                0x28
#define RAK1904_OUT_X_H                0x29
#define RAK1904_OUT_Y_L                0x2A
#define RAK1904_OUT_Y_H                0x2B
#define RAK1904_OUT_Z_L                0x2C
#define RAK1904_OUT_Z_H                0x2D
#define RAK1904_FIFO_CTRL_REG          0x2E
#define RAK1904_FIFO_SRC_REG           0x2F
#define RAK1904_INT1_CFG               0x30
#define RAK1904_INT1_SRC               0x31
#define RAK1904_INT1_THS               0x32
#define RAK1904_INT1_DURATION          0x33

#define RAK1904_CLICK_CFG              0x38
#define RAK1904_CLICK_SRC              0x39
#define RAK1904_CLICK_THS              0x3A
#define RAK1904_TIME_LIMIT             0x3B
#define RAK1904_TIME_LATENCY           0x3C
#define RAK1904_TIME_WINDOW            0x3D

rak1904Core::rak1904Core(uint8_t busType, uint8_t inputArg):commInterface(I2C_MODE),
I2CAddress(0x19)
{
    commInterface = busType;
    I2CAddress = inputArg;
}

RAK1904_status
rak1904Core::beginCore(void)
{
    RAK1904_status  returnError = RAK1904_SUCCESS;

    Wire.begin();		// not necessary

    volatile uint8_t temp = 0;
    for (uint16_t i = 0; i < 10000; i++) {
	temp++;
    }

    // Check the ID register to determine if the operation was a success.
    uint8_t         readCheck;
    readRegister(&readCheck, RAK1904_WHO_AM_I);
    if (readCheck != 0x33) {
	returnError = RAK1904_HW_ERROR;
    }

    return returnError;

}

RAK1904_status
rak1904Core::readRegisterRegion(uint8_t * output, uint8_t offset,
				uint8_t length)
{
    RAK1904_status  returnError = RAK1904_SUCCESS;

    uint8_t         i = 0;
    uint8_t         c = 0;
    uint8_t         tempFFCounter = 0;

    Wire.beginTransmission(I2CAddress);
    offset |= 0x80;
    Wire.write(offset);
    if (Wire.endTransmission() != 0) {
	returnError = RAK1904_HW_ERROR;
    } else {
	// request 6 bytes from slave device
	Wire.requestFrom(I2CAddress, length);
	while ((Wire.available()) && (i < length)) {
	    c = Wire.read();
	    *output = c;
	    output++;
	    i++;
	}
    }

    return returnError;

}

RAK1904_status
rak1904Core::readRegister(uint8_t * output, uint8_t offset)
{
    uint8_t         result;
    uint8_t         numBytes = 1;
    RAK1904_status  returnError = RAK1904_SUCCESS;

    Wire.beginTransmission(I2CAddress);
    Wire.write(offset);
    if (Wire.endTransmission() != 0) {
	returnError = RAK1904_HW_ERROR;
    } else {
	Wire.requestFrom(I2CAddress, numBytes);
	while (Wire.available()) {
	    result = Wire.read();
	}
    }

    *output = result;
    return returnError;
}

RAK1904_status
rak1904Core::readRegisterInt16(int16_t * output, uint8_t offset)
{
    uint8_t         buf[2];
    RAK1904_status  returnError = readRegisterRegion(buf, offset, 2);
    int16_t         result = (int16_t) buf[0] | int16_t(buf[1] << 8);
    *output = result;
    return returnError;
}

RAK1904_status
rak1904Core::writeRegister(uint8_t offset, uint8_t dataToWrite)
{
    RAK1904_status  returnError = RAK1904_SUCCESS;

    Wire.beginTransmission(I2CAddress);
    Wire.write(offset);
    Wire.write(dataToWrite);
    if (Wire.endTransmission() != 0) {
	returnError = RAK1904_HW_ERROR;
    }

    return returnError;
}

uint8_t
rak1904Core::getAddress()
{
    return I2CAddress;
}

rak1904::rak1904(uint8_t busType, uint8_t inputArg):rak1904Core(busType,
	    inputArg)
{
    bufX = 0;
    bufY = 0;
    bufZ = 0;
    settings.adcEnabled = 1;

    settings.tempEnabled = 1;

    settings.accelSampleRate = 50;
    settings.accelRange = 2;

    settings.xAccelEnabled = 1;
    settings.yAccelEnabled = 1;
    settings.zAccelEnabled = 1;

    settings.fifoEnabled = 0;
    settings.fifoThreshold = 20;
    settings.fifoMode = 0;

    allOnesCounter = 0;
    nonSuccessCounter = 0;

}

RAK1904_status
rak1904::begin(void)
{
    RAK1904_status  returnError = beginCore();

    applySettings();

    return returnError;

}

bool
rak1904::init()
{
    Wire.beginTransmission(getAddress());
    if (!Wire.endTransmission() == 0)
	return false;

    if (begin() != 0)
	return false;

    return true;
}

bool
rak1904::update()
{
    Wire.beginTransmission(getAddress());
    if (!Wire.endTransmission() == 0)
	return false;

    readFloatAccelX();
    readFloatAccelY();
    readFloatAccelZ();

    return true;
}

void
rak1904::applySettings(void)
{
    uint8_t         dataToWrite = 0;

    // Build TEMP_CFG_REG
    dataToWrite = 0;
    dataToWrite =
	((settings.tempEnabled & 0x01) << 6) | ((settings.
						 adcEnabled & 0x01) << 7);
    writeRegister(RAK1904_TEMP_CFG_REG, dataToWrite);

    // Build CTRL_REG1
    dataToWrite = 0;
    switch (settings.accelSampleRate) {
    case 1:
	dataToWrite |= (0x01 << 4);
	break;
    case 10:
	dataToWrite |= (0x02 << 4);
	break;
    case 25:
	dataToWrite |= (0x03 << 4);
	break;
    case 50:
	dataToWrite |= (0x04 << 4);
	break;
    case 100:
	dataToWrite |= (0x05 << 4);
	break;
    case 200:
	dataToWrite |= (0x06 << 4);
	break;
    default:
    case 400:
	dataToWrite |= (0x07 << 4);
	break;
    case 1600:
	dataToWrite |= (0x08 << 4);
	break;
    case 5000:
	dataToWrite |= (0x09 << 4);
	break;
    }
    dataToWrite |= (settings.zAccelEnabled & 0x01) << 3;
    dataToWrite |= (settings.zAccelEnabled & 0x01) << 2;
    dataToWrite |= (settings.yAccelEnabled & 0x01) << 1;
    dataToWrite |= (settings.xAccelEnabled & 0x01);
    writeRegister(RAK1904_CTRL_REG1, dataToWrite);

    // Build CTRL_REG4
    dataToWrite = 0;
    switch (settings.accelRange) {
    case 2:
	dataToWrite |= (0x00 << 4);
	break;
    case 4:
	dataToWrite |= (0x01 << 4);
	break;
    case 8:
	dataToWrite |= (0x02 << 4);
	break;
    default:
    case 16:
	dataToWrite |= (0x03 << 4);
	break;
    }
    dataToWrite |= 0x80;	// set block update
    dataToWrite |= 0x08;	// set high resolution
    writeRegister(RAK1904_CTRL_REG4, dataToWrite);

}

int16_t
rak1904::readRawAccelX(void)
{
    int16_t         output;
    RAK1904_status  returnError =
	readRegisterInt16(&output, RAK1904_OUT_X_L);
    if (returnError != RAK1904_SUCCESS) {
	if (returnError == RAK1904_ALL_ONES_WARNING) {
	    allOnesCounter++;
	} else {
	    nonSuccessCounter++;
	}
    }
    return output;
}

float
rak1904::readFloatAccelX(void)
{
    float           output = calcAccel(readRawAccelX());
    bufX = output;
    return output;
}

int16_t
rak1904::readRawAccelY(void)
{
    int16_t         output;
    RAK1904_status  returnError =
	readRegisterInt16(&output, RAK1904_OUT_Y_L);
    if (returnError != RAK1904_SUCCESS) {
	if (returnError == RAK1904_ALL_ONES_WARNING) {
	    allOnesCounter++;
	} else {
	    nonSuccessCounter++;
	}
    }
    return output;
}

float
rak1904::readFloatAccelY(void)
{
    float           output = calcAccel(readRawAccelY());
    bufY = output;
    return output;
}

int16_t
rak1904::readRawAccelZ(void)
{
    int16_t         output;
    RAK1904_status  returnError =
	readRegisterInt16(&output, RAK1904_OUT_Z_L);
    if (returnError != RAK1904_SUCCESS) {
	if (returnError == RAK1904_ALL_ONES_WARNING) {
	    allOnesCounter++;
	} else {
	    nonSuccessCounter++;
	}
    }
    return output;
}

float
rak1904::readFloatAccelZ(void)
{
    float           output = calcAccel(readRawAccelZ());
    bufZ = output;
    return output;
}

float
rak1904::calcAccel(int16_t input)
{
    float           output;
    switch (settings.accelRange) {
    case 2:
	output = (float) input / 15987;
	break;
    case 4:
	output = (float) input / 7840;
	break;
    case 8:
	output = (float) input / 3883;
	break;
    case 16:
	output = (float) input / 1280;
	break;
    default:
	output = 0;
	break;
    }
    return output;
}

float
rak1904::x(void)
{
    return bufX;
}

float
rak1904::y(void)
{
    return bufY;
}

float
rak1904::z(void)
{
    return bufZ;
}

