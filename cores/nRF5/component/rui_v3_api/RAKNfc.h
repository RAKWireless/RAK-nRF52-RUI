/**@file	RAKNfc.h
 *
 * @brief
 * @author	RAKwireless
 * @version	0.0.0
 * @data	2021.7
 */
#ifndef	__RAKNFC_H__
#define	__RAKNFC_H__

#include "udrv_nfc.h"
#include <stdint.h> 

class RAKNfc
{
  public:
    RAKNfc(void);

    /**@par	Description
     *      
     *
     * @par	Syntax
     *      	api.nfc.begin();
     *
     */
    void begin();

    /**@par	Description
     *      
     *
     * @par	Syntax
     *      	api.nfc.write(code, payload);
     * @param	code
     * @param	payload
     * @return	
     */
    void write(uint8_t const*code, uint32_t code_size, uint8_t const*payload, uint32_t payload_size);

    /**@par	Description
     *      
     *
     * @par	Syntax
     *      	api.nfc.start();
     * @return
     */
    void start();

};

#endif	//end RAKNfc.h
