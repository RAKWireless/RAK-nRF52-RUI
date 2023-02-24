#pragma once
#ifndef __RAK1903_H__
#define __RAK1903_H__

#include "Wire.h"

#define RAK1903_ADDRESS 0x44

typedef enum {
    RAK1903_RESULT = 0x00,
    RAK1903_CONFIG = 0x01,
    RAK1903_LOW_LIMIT = 0x02,
    RAK1903_HIGH_LIMIT = 0x03,
    RAK1903_MANUFACTURER_ID = 0x7E,
    RAK1903_DEVICE_ID = 0x7F,
} RAK1903_Commands;

typedef enum {
    RAK1903_NO_ERROR = 0,
    RAK1903_NOT_INIT = -1,
    RAK1903_WRONG_ARG = -2,
    RAK1903_NACK = -3,
} RAK1903_ErrorCode;

typedef union {
    uint16_t        rawData;
    struct {
	uint16_t        result:12;
	uint8_t         exponent:4;
    };
} RAK1903_ER;

typedef union {
    struct {
	uint8_t         FaultCount:2;
	uint8_t         MaskExponent:1;
	uint8_t         Polarity:1;
	uint8_t         Latch:1;
	uint8_t         FlagLow:1;
	uint8_t         FlagHigh:1;
	uint8_t         ConversionReady:1;
	uint8_t         OverflowFlag:1;
	uint8_t         ModeOfConversionOperation:2;
	uint8_t         ConvertionTime:1;
	uint8_t         RangeNumber:4;
    };
    uint16_t        rawData;
} RAK1903_Config;

class           rak1903 {
  private:
    RAK1903_ErrorCode sendCommand(RAK1903_Commands cmd);
    RAK1903_ErrorCode readData(uint16_t *);

    void            setConfig();
    float           LUX;
  public:
                    rak1903();

    RAK1903_ErrorCode writeConfig(RAK1903_Config);

    uint16_t        ID;

#ifdef RAK5010_EVB
    /**@defgroup	OPT3001
     * @ingroup     Sensors
     * @{
	 */
#endif

	/**@par Description	
     *      This function enabled the RAK1903 sensor and puts the device into standby mode / sleep mode for lowest power consumption
	 * @par Syntax
     *      sensor.opt3001.init()
	 *@return	bool		True if successfully query and identify RAK1903 module. FALSE if RAK1903 init failed
	 */
    bool            init(void);

	/**@par Description	
     *      This function will trigger the RAK1903 to update the LUX values, 
	 * 		after the values are updated theRAK1903 will go back to power saving mode
	 * @par Syntax
     *      sensor.opt3001.update()
	 *
	 * @return	bool 	True if values updated successfully. FALSE if update failed
	 */
    bool            update(void);

	/**@par Description	
     *      This function will trigger the RAK1903 to return the latest LUX value
     * @note the lux return range from 0 to 83865
	 * @par Syntax
     *      sensor.opt3001.lux()
	 *
	 * @return	float (unit: lux)	
	 */
    float           lux(void);
	/**@}*/
};

#endif				// end rak1903
