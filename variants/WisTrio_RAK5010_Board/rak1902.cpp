#include "rak1902.h"

rak1902::rak1902()
{
    reading = 0x00;
}

uint8_t
rak1902::readReg(LPS22HB_Reg_TypeDef reg)
{
    Wire.beginTransmission(LPS22HB_ADDRESS);
    Wire.write((uint8_t) reg);
    Wire.endTransmission();
    if (!Wire.requestFrom(LPS22HB_ADDRESS, 1) == 1)
	return 0;
    return Wire.read();
}

void
rak1902::writeReg(LPS22HB_Reg_TypeDef reg, uint8_t val)
{
    Wire.beginTransmission(LPS22HB_ADDRESS);
    Wire.write(reg);
    Wire.write(val);
    Wire.endTransmission();
}

bool
rak1902::init()
{
    if (readReg(LPS22HB_WHO_AM_I_REG) != 0xb1) {
	return false;
    }

    pressure();
    delay(100);
    return true;
}

float
rak1902::pressure()
{
    reading = (readReg(LPS22HB_PRESS_OUT_XL_REG) |
	       (readReg(LPS22HB_PRESS_OUT_L_REG) << 8) |
	       (readReg(LPS22HB_PRESS_OUT_H_REG) << 16)) / 4096.0;

    delay(100);
    // trigger One Shot
    writeReg(LPS22HB_CTRL2_REG, 0x01);
    // // wait for ONE_SHOT bit to be cleared by the hardware
    // while ((readReg(LPS22HB_CTRL2_REG) & 0x01) != 0) {
    // //FIXME
    // //yield();
    // }

    reading = (readReg(LPS22HB_PRESS_OUT_XL_REG) |
	       (readReg(LPS22HB_PRESS_OUT_L_REG) << 8) |
	       (readReg(LPS22HB_PRESS_OUT_H_REG) << 16)) / 4096.0;

    return reading;
}

float
LPS22HB_hpa2kpa(float hpa)	// 1 hPa = 0.1 kPa
{
    return hpa * 0.1;
}

float
LPS22HB_hpa2mbar(float hpa)	// 1 hPa = 1 mBar
{
    return hpa;
}

float
LPS22HB_hpa2psi(float hpa)	// 1 hPa = 0.0145038 PSI
{
    return hpa * 0.0145038;
}

float
rak1902::pressure(LPS22HB_Pressure_Unit unit)
{
    switch (unit) {
    case PSI:
	return LPS22HB_hpa2psi(pressure());
    case MILLIBAR:
	return LPS22HB_hpa2mbar(pressure());
    case KILOPASCAL:
	return LPS22HB_hpa2kpa(pressure());
    default:
	return pressure();
    }
}
