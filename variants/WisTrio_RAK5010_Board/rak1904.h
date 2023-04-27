#ifndef __RAK_1904_H__
#define __RAK_1904_H_

#include "Wire.h"

// values for commInterface
#define I2C_MODE 0

// Return values 
typedef enum {
    RAK1904_SUCCESS,
    RAK1904_HW_ERROR,
    RAK1904_NOT_SUPPORTED,
    RAK1904_GENERIC_ERROR,
    RAK1904_OUT_OF_BOUNDS,
    RAK1904_ALL_ONES_WARNING,
    // ...
} RAK1904_status;

class           rak1904Core {
  public:
    rak1904Core(uint8_t);
    rak1904Core(uint8_t, uint8_t);
    ~rak1904Core() = default;

    uint8_t         getAddress();

    RAK1904_status  beginCore(void);

    RAK1904_status  readRegisterRegion(uint8_t *, uint8_t, uint8_t);

    RAK1904_status  readRegister(uint8_t *, uint8_t);

    RAK1904_status  readRegisterInt16(int16_t *, uint8_t offset);

    RAK1904_status  writeRegister(uint8_t, uint8_t);

  private:
                    uint8_t commInterface;
    uint8_t         I2CAddress;
};

struct rak1904Setting {
  public:
    // ADC and Temperature settings
    uint8_t adcEnabled;
    uint8_t         tempEnabled;

    // Accelerometer settings
    uint16_t        accelSampleRate;	// Hz.  Can be:
    // 0,1,10,25,50,100,200,400,1600,5000 
    // Hz
    uint8_t         accelRange;	// Max G force readable.  Can be: 2, 4, 8, 
				// 
    // 16

    uint8_t         xAccelEnabled;
    uint8_t         yAccelEnabled;
    uint8_t         zAccelEnabled;

    // Fifo settings
    uint8_t         fifoEnabled;
    uint8_t         fifoMode;	// can be 0x0,0x1,0x2,0x3
    uint8_t         fifoThreshold;
};

class           rak1904:public rak1904Core {
  public:
#ifdef RAK5010_EVB
    /**@defgroup	LIS3DH
     * @ingroup     Sensors
     * @{
     */
#endif

    /**@par Description	
     *      This function enabled the RAK1904 sensor and puts the device into standby 
     * 		mode / sleep mode for lowest power consumption
     * @par Syntax
     *      sensor.lis3dh.init()
     *
     * @return	bool		True if successfully query and identify RAK1904 module. FALSE if RAK1904 init failed
     */
    bool            init(void);

    /**@par Description	
     *      This function will trigger the RAK1904 to update the X,Y,Z values, 
     * 		after the values are updated the RAK1904 will go back to power saving mode
     * @par Syntax
     *      sensor.lis3dh.update()
     *
     * @return	bool		True if values updated successfully. FALSE if update failed
     */
    bool            update(void);

    /**@par Description	
     *      This function will trigger the RAK1904 to return the latest X Axis value
     * @note the function return from -2 to 2
     * @par Syntax
     *      sensor.lis3dh.x()
     *
     * @return	float
     */
    float           x(void);

    /**@par Description	
     *      This function will trigger the RAK1904 to return the latest Y Axis value
     * @note the function return from -2 to 2
     * @par Syntax
     *      sensor.lis3dh.y()
     *
     * @return	float
     */
    float           y(void);

    /**@par Description	
     *      This function will trigger the RAK1904 to return the latest Z Axis value
     * @note the function return from -2 to 2
     * @par Syntax
     *      sensor.lis3dh.z()
     *
     * @return float
     */
    float           z(void);
    /**@}*/




         
	 
#ifdef RAK5010_EVB 
    rak1904(uint8_t busType = I2C_MODE, uint8_t inputArg = 0x19);
#else
    rak1904(uint8_t busType = I2C_MODE, uint8_t inputArg = 0x18);
#endif

  private:
    float           bufX;
    float           bufY;
    float           bufZ;

    // IMU setting
    rak1904Setting  settings;

    // Error checking
    uint16_t        allOnesCounter;
    uint16_t        nonSuccessCounter;

    RAK1904_status  begin(void);
    void            applySettings(void);

    // Returns the raw bits from the sensor cast as 16-bit signed integers
    int16_t         readRawAccelX(void);
    int16_t         readRawAccelY(void);
    int16_t         readRawAccelZ(void);

    // Returns the values as floats.  Inside, this calls readRaw___();
    float           readFloatAccelX(void);
    float           readFloatAccelY(void);
    float           readFloatAccelZ(void);

    float           calcAccel(int16_t);


};

#endif				// end RAK1904
