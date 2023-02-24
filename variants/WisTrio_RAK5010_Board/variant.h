#ifndef _VARIANT_RAK5010_
#define _VARIANT_RAK5010_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

//TODO

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

extern const uint32_t g_ADigitalPinMap[]; 
#define pgm_read_byte(addr) (*(const unsigned char *)(addr))

#define portOutputRegister(port)   ( &(port->OUT) )
#define portInputRegister(port)    ( (volatile uint32_t*) &(port->IN) )
#define portModeRegister(port)     ( &(port->DIR) )
#define digitalPinHasPWM(P)        ( g_ADigitalPinMap[P] > 1 )
#define digitalPinToBitMask(P)     ( 1UL << ( g_ADigitalPinMap[P] < 32 ? g_ADigitalPinMap[P] : (g_ADigitalPinMap[P]-32) ) )
#define digitalPinToPinName(P)     g_ADigitalPinMap[P]

#ifdef NRF_P1
#define digitalPinToPort(P)        ( (g_ADigitalPinMap[P] < 32) ? NRF_P0 : NRF_P1 )
#else
#define digitalPinToPort(P)        ( NRF_P0 )
#endif

// Interrupts
#define digitalPinToInterrupt(P)   ( P )
/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

/* Alternative pins for RAK5010 extension GPIOs
 * Users can choose from IO1 to IO4 to config to pins below 
 * If you want IO1 to IO4 to be a GPIO please define the following pins to be 0xFF
 * and Make sure I2C1_SDA, I2C1_SCL, NRF_TXD0, NRF_RXD0 stiil need to be defined.
 *
 */
//#define I2C1_SDA            0xFF // Wire1
//#define I2C1_SCL            0xFF // Wire1
#define I2C1_SDA            IO1 // Wire1
#define I2C1_SCL            IO2 // Wire1
#define NRF_TXD0            IO3 // Serial0
#define NRF_RXD0            IO4 // Serial0

#define P0_00                0
#define P0_01                1
#define P0_02                2
#define P0_03                3
#define P0_04                4
#define P0_05                5
#define P0_06                6
#define P0_07                7
#define P0_08                8
#define P0_09                9
#define P0_10                10
#define P0_11                11
#define P0_12                12
#define P0_13                13
#define P0_14                14
#define P0_15                15
#define P0_16                16
#define P0_17                17
#define P0_18                18
#define P0_19                19
#define P0_20                20
#define P0_21                21
#define P0_22                22
#define P0_23                23
#define P0_24                24
#define P0_25                25
#define P0_26                26
#define P0_27                27
#define P0_28                28
#define P0_29                29
#define P0_30                30
#define P0_31                31
#define P1_00                32
#define P1_01                33
#define P1_02                34
#define P1_03                35
#define P1_04                36
#define P1_05                37
#define P1_06                38
#define P1_07                39
#define P1_08                40
#define P1_09                41
#define P1_10                42
#define P1_11                43
#define P1_12                44
#define P1_13                45
#define P1_14                46
#define P1_15                47

/*
 * Base GPIO definitions
 */
#define IO1                 P0_19//19          // J10
#define IO2                 P0_20//20          // J12
#define IO3                 P1_02//34          // J12
#define IO4                 P1_01//33          // J12
#define AIN                 P0_05//5           // J10
#define NRF_RXD1            P0_08//8           // BG96
#define NRF_TXD1            P0_06//6           // BG96
#define GREEN_LED           P0_12

/*
 * Analog pins
 */
#define PIN_A0 AIN

#define A0 PIN_A0

/*
 * Serial interfaces
 */
#define PIN_SERIAL0_RX NRF_RXD0//19
#define PIN_SERIAL0_TX NRF_TXD0//20

#define PIN_SERIAL1_RX NRF_RXD1//15
#define PIN_SERIAL1_TX NRF_TXD1//16

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 2

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
