#ifndef __RAK_1901_H__
#define __RAK_1901_H__

#include "Wire.h"
#include "wiring_time.h"

#define SHTC3_ADDR_7BIT 0x70

typedef enum {
    SHTC3_CMD_WAKE = 0x3517,
    SHTC3_CMD_SLEEP = 0xB098,
    SHTC3_CMD_SFT_RST = 0x805D,
    SHTC3_CMD_READ_ID = 0xEFC8,
} SHTC3_Commands_TypeDef;

typedef enum {
    SHTC3_CMD_CSE_RHF_NPM = 0x5C24,	// Clock stretching, RH first,
					// Normal power mode
    SHTC3_CMD_CSE_RHF_LPM = 0x44DE,	// Clock stretching, RH first, Low 
					// power mode
    SHTC3_CMD_CSE_TF_NPM = 0x7CA2,	// Clock stretching, T first,
					// Normal power mode
    SHTC3_CMD_CSE_TF_LPM = 0x6458,	// Clock stretching, T first, Low
					// power mode

    SHTC3_CMD_CSD_RHF_NPM = 0x58E0,	// Polling, RH first, Normal power 
					// mode
    SHTC3_CMD_CSD_RHF_LPM = 0x401A,	// Polling, RH first, Low power
					// mode
    SHTC3_CMD_CSD_TF_NPM = 0x7866,	// Polling, T first, Normal power
					// mode
    SHTC3_CMD_CSD_TF_LPM = 0x609C	// Polling, T first, Low power
					// mode
} SHTC3_MeasurementModes_TypeDef;

class           rak1901 {
  private:
    bool            isInit;
    uint16_t        RH;		// Current raw RH data from the sensor
    uint16_t        T;		// Current raw T data from the sensor
    uint16_t        ID;		// Current raw ID data from the sensor

    void            resetValue();

  public:
                    rak1901();
    bool            sendCommand(SHTC3_Commands_TypeDef cmd);
    bool            sendCommand(SHTC3_MeasurementModes_TypeDef cmd);

#ifdef RAK5010_EVB
    /**@defgroup	SHTC3
     * @ingroup     Sensors
     * @{
     */
#endif
    /**@par Description
     *  	This function enabled the RAK1901 sensor and puts the device into standby mode / sleep mode for lowest power consumption
     * @par Syntax 
     *      sensor.shtc3.init()
     *
     * @return	bool		True if successfully query and identify RAK1901 module. FALSE if RAK1901 init failed
     */
    bool            init(void);

    /**@par Description	
     *      wake up the RAK1901 sensor from sleep mode
     * @par Syntax 
     *      sensor.shtc3.wakeup()
     *
     * @return 	bool		true if successfully wake-up.false is wake up fail
     */
    bool            wakeup(void);

    /**@par Description	
     *      make the Rak1901 sensor enter sleep mode
     * @par Syntax 
     *      sensor.shtc3.sleep()
     *
     * @return	void
     */
    void            sleep(void);

    /**@par Description	
     *      This function will trigger the RAK1901 to update the Temperature and humidity values, 
     * 		after the values are updated theRAK1901 will go back to power saving mode
     * @par Syntax 
     *      sensor.shtc3.update()
     *
     * @return	bool		True if values updated successfully. FALSE if update failed
     */
    bool            update(void);

    /**@par Description	
     *      This function will trigger the RAK1901 to return the Temperature value
     * @note The sensor can read from -40°C to +125°C
     * @par Syntax 
     *      sensor.shtc3.temperature()
     *
     * @return	float	the temperature	that detected from RAK1901 sensor \n
                        (unit: Celsius)
     */
    float           temperature(void);

    /**@par Description	
     *      This function will trigger the RAK1901 to return the Humidity value
     * @note The sensor can read from 0% to 100%
     * @par Syntax 
     *      sensor.shtc3.humidity()
     *
     *@return	float		the humidity that detected from RAK1901 sensor\n
                            (unit: percentage)
     */
    float           humidity(void);

    /** @}*/

};

float           SHTC3_raw2DegC(uint16_t T);	// Converts SHTC3 T data
						// to deg C
float           SHTC3_raw2DegF(uint16_t T);	// Converts SHTC3 T data
						// to deg F
float           SHTC3_raw2Percent(uint16_t RH);	// Converts SHTC3 RH data
						// to % RH

#endif
