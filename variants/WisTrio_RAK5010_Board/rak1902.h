#ifndef __RAK_1902_H__
#define __RAK_1902_H__

#include "Wire.h"
#include "wiring_time.h"

#define LPS22HB_ADDRESS 0x5C

typedef enum {
    LPS22HB_WHO_AM_I_REG = 0x0f,
    LPS22HB_CTRL1_REG = 0x10,
    LPS22HB_CTRL2_REG = 0x11,
    LPS22HB_STATUS_REG = 0x27,
    LPS22HB_PRESS_OUT_XL_REG = 0x28,
    LPS22HB_PRESS_OUT_L_REG = 0x29,
    LPS22HB_PRESS_OUT_H_REG = 0x2a,
} LPS22HB_Reg_TypeDef;

typedef enum {
    PSI,        ///< return PSI
    MILLIBAR,   ///< return millibar
    KILOPASCAL  ///< return kilopascal
} LPS22HB_Pressure_Unit;

class           rak1902 {
  public:
    rak1902();

    float           reading;	// Current raw pressure data from the
				// sensor

    uint8_t         readReg(LPS22HB_Reg_TypeDef reg);
    void            writeReg(LPS22HB_Reg_TypeDef reg, uint8_t val);

#ifdef RAK5010_EVB
    /**@defgroup    LPS22HB
     * @ingroup     Sensors
     * @{
     */
#endif

    /**@par Description	
     *      This function enabled the RAK1902 sensor and puts the device into standby mode / sleep mode for lowest power consumption
     * @par Syntax
     *      sensor.lps22hb.init()
     *
     * @return	bool		True if successfully query and identify RAK1902 module. FALSE if RAK1902 init failed
     */
    bool            init(void);

    /**@par Description	
     *      This function will query the RAK1902 to update the Pressures values. RAK1902 will go back to power saving mode after the query
     * @par Syntax
     *      sensor.lps22hb.pressure() \n
     *      sensor.lps22hb.pressure(unit)
     *
     * @param	unit		the unit which you want to recieve for pressure(PSI,MILLIBAR,KILOPASCAL)		
     *
     * @return	float		the pressure detected form RAK1902 sensor
     */
    float           pressure(LPS22HB_Pressure_Unit unit);

    /**@}*/

    float           pressure(void);

};

float           LPS22HB_hpa2mbar(float hpa);	// Converts LPS22HB
						// pressure data to mbar
float           LPS22HB_hpa2psi(float hpa);	// Converts LPS22HB
						// pressure data to PSI

#endif
