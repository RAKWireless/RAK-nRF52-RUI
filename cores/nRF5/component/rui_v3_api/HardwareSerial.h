/**@file        HardwareSerial.h
 *
 * @brief       The c++ wrapper for Serial functions.
 * @author      RAKwireless
 * @version     0.0.0
 * @date        2021.5
 */

#ifndef __HARDWARE_SERIAL_H__
#define __HARDWARE_SERIAL_H__

#include <inttypes.h>
#include <string>

#include "Stream.h"
#include "udrv_serial.h"
#include "service_mode_proto.h"

using namespace std;

#define SERIAL_5N1 0x00
#define SERIAL_6N1 0x02
#define SERIAL_7N1 0x04
#define SERIAL_8N1 0x06
#define SERIAL_5N2 0x08
#define SERIAL_6N2 0x0A
#define SERIAL_7N2 0x0C
#define SERIAL_8N2 0x0E
#define SERIAL_5E1 0x20
#define SERIAL_6E1 0x22
#define SERIAL_7E1 0x24
#define SERIAL_8E1 0x26
#define SERIAL_5E2 0x28
#define SERIAL_6E2 0x2C
#define SERIAL_8E2 0x2E
#define SERIAL_5O1 0x30
#define SERIAL_6O1 0x32
#define SERIAL_7O1 0x34
#define SERIAL_8O1 0x36
#define SERIAL_5O2 0x38
#define SERIAL_6O2 0x3A
#define SERIAL_7O2 0x3C
#define SERIAL_8O2 0x3E

typedef enum _UART_MODE
{
    AT_MODE,
    API_MODE,
    PASS_MODE,
    CUSTOM_MODE,
} UART_MODE;

class HardwareSerial : public Stream
{
  protected:
  private:
    SERIAL_PORT serialPort;
  public:
    HardwareSerial(SERIAL_PORT);

    using Print::write; //pull in write(str) and write(buf, size) from Print

    operator bool() const
    {
    	return is_udrv_serial_initialized(serialPort);
    }

    void begin(uint32_t baud, uint8_t config, UART_MODE mode = AT_MODE); 
    bool password(string new_passwd);
    size_t write(uint8_t n) {return write(&n, 1);}

    /**@addtogroup	Serial
     * @{
     */

    /**@par	Description
     *      	Sets the data rate in bits per second (baud) for serial data transmission	
     *
     * @par	Syntax
     *      	Serial.begin(baud);\n
     * 		Serial.begin(baud, mode);
     * 		
     * @param	baud		The baudrate to set for the Serial
     * @param   mode(optinal)   The mode that use UART in different way(default is AT_MODE) \n
     *				List:\n 
     *				AT_MODE\n 
     *				API_MODE\n
     *				PASS_MODE\n
     *				CUSTOM_MODE
     *
     * @return	void
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200);
       Serial1.begin(9600, CUSTOM_MODE);
     }
     
     void loop() {
     } 
     @endverbatim
     */
    void begin(uint32_t baud, UART_MODE mode = AT_MODE) { begin(baud, SERIAL_8N1, mode);}

    /**@par	Description
     *      	End connection of the Serial with flushing all data.
     *
     * @par	Syntax
     *      	Serial.end();
     * @return 	void
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200);
     }

     void loop() {
       Serial.end();
     }
     @endverbatim
     */
    void end(void);

    /**@par	Description
     *      	To lock the Serial port of the device.
     * @note	If you never set a password successfully, the default password will be 00000000
     * @par	Syntax
     *      	Serial.lock(locked);
     *
     * @param	locked	giving true to lock the device,false to unlock the device
     * @return	void
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200);

       //Lock Serial(USB) with password => 12345678
       string password = "12345678";
       Serial.password(password);
       Serial.lock(true);
     }

     void loop() {
     }
     @endverbatim
     */
    void lock(bool locked);

    /**@par	Description
     *      	Set up the password to unlock the device when locked.
     *
     * @par	Syntax
     *      	Serial.password(str);\n
     * 		Serial.password(new_passwd, len);
     *
     * @param	str		a string to set for unlock the device
     * @param	new_passwd	an char array to set for unlock the device
     * @param	len		the length your password set
     *
     * @return	bool
     * @retval	TRUE for success
     * @retval	FALSE for failure
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200);

       //Lock Serial(USB) with password => 12345678
       string password = "12345678";
       Serial.password(password);
       Serial.lock(true);
     }

     void loop() {
     }
     @endverbatim
     */
    bool password(char *new_passwd, size_t len);


    /**@par	Description
     *      	This API is used to write a byte sequence to a specified serial port.
     *
     * @note 	This function is a virtual function that declared in Print.h
     * @par	Syntax
     *      	Serial.write(val);\n
     * 		Serial.write(buf, size);
     *
     * @param	val	a value to send as a single byte
     * @param	buf	an array to send as a series of bytes
     * @param	size	the number of bytes to be sent from the array
     *
     * @return  number of bytes sent successfully(Type: size_t)
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200);
     }

     void loop() {
       Serial.write(45);
       Serial.write("Hello");
     }
     @endverbatim
     */
    virtual size_t write(const uint8_t *buf, size_t size);

    /**@par	Description
     *      	This API is used to get the number of bytes available for reading from
     * 		the specified serial port.
     *
     * @note	Serial.available() inherits from the Stream utility class
     * @par	Syntax
     *      	Serial.available();
     *
     * @retval	the number of bytes available for reading from the specified serial port(Type: int)
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200, CUSTOM_MODE);
     }

     void loop() {
       //print if you receive data
       if (Serial.available() > 0) {
         Serial.print("Return Byte = ");
         Serial.println(Serial.read());	 
       }
     }
     @endverbatim
     */
    virtual int available(void);

    /**@par	Description
     *      	Reads incoming serial data
     *
     * @note 	Serial.read() inherits from the Stream utility class
     * @par	Syntax
     *      	Serial.read()
     *
     * @return	The first byte of incoming serial data available(Type: int32_t)
     * @retval	-1	Read fail,get nothing from the specified serial port
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200, CUSTOM_MODE);
     }

     void loop() {
       //print if you receive data
       if (Serial.available() > 0) {
         Serial.print("Return Byte = ");
         Serial.println(Serial.read());
       }
     }
     @endverbatim
     */
    virtual int read(void);

    /**@par	Description
     *      	Returns the next byte (character) of incoming serial data without removing it from the internal serial buffer. That is, 
     * 		successive calls to peek() will return the same character, as will the next call to read().
     * @par	Syntax
     *      	Serial.peek();
     * @return	The first byte of incoming serial data available (or -1 if no data is available)(Type: int)
     * @par	Example
     * @verbatim
     void setup() {
       Serial.begin(115200, CUSTOM_MODE);
     }

     void loop() {
       //print if you receive data
       if (Serial.available() > 0) {

         //Peek the data first
         Serial.print("Peek the Byte = ");
         Serial.println(Serial.peek());

         //Read the data you peeked
         Serial.print("Return Byte = ");
         Serial.println(Serial.read());
       }
     }
     @endverbatim
     */
    virtual int peek(void);

    /**@par	Description
     *      	Waits for the transmission of outgoing serial data to complete
     *
     * @par	Syntax
     *      	Serial.flush();
     * @return 	void
     * @par     Example
     * @verbatim
     void setup() {
       Serial.begin(115200);
     }

     void loop() {
       Serial.write(45);
       Serial.write("Hello");
       Serial.flush();
     }
     @endverbatim

     */
    virtual void flush(void);
    /**@}*/
};


extern HardwareSerial Serial;
extern HardwareSerial Serial0;
extern HardwareSerial Serial1;
extern HardwareSerial Serial2;
extern HardwareSerial Serial4;
extern HardwareSerial Serial6;
#endif

