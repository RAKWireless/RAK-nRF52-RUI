#ifndef _VARIANT_RAK4630_
#define _VARIANT_RAK4630_

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

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define PINS_COUNT           (37u)
#define NUM_DIGITAL_PINS     (35u)
#define NUM_ANALOG_INPUTS    (2u)
#define NUM_ANALOG_OUTPUTS   (0u)

#define P0_00                0//XL1(RAK4630 internal)
#define P0_01                1//XL2(RAK4630 internal)
#define P0_02                2//QSPI_DIO3
#define P0_03                3//QSPI_CLK
#define P0_04                4//IO4
#define P0_05                5//AIN0
#define P0_09                9//IO5_NFC1
#define P0_10                10//IO6_NFC2
#define P0_13                13//I2C1_SDA
#define P0_14                14//I2C1_SCL
#define P0_15                15//UART2_RX
#define P0_16                16//UART2_TX
#define P0_17                17//UART2_DE
#define P0_18                18//RST
#define P0_19                19//UART1_RX
#define P0_20                20//UART1_TX
#define P0_21                21//UART1_DE
#define P0_24                24//I2C2_SDA
#define P0_25                25//I2C2_SCL
#define P0_26                26//QSPI_CS
#define P0_28                28//QSPI_DIO2
#define P0_29                29//QSPI_DIO1
#define P0_30                30//QSPI_DIO0
#define P0_31                31//AIN1
#define P1_01                33//SW1
#define P1_02                34//SW2
#define P1_03                35//LED1
#define P1_04                36//LED2
#define P1_05                37//ANT_SW(RAK4630 internal)
#define P1_06                38//NRESET(RAK4630 internal)
#define P1_07                39//DIO2(RAK4630 internal)
#define P1_10                42//SPI_NSS(RAK4630 internal)
#define P1_11                43//SPI_CLK(RAK4630 internal)
#define P1_12                44//SPI_MOSI(RAK4630 internal)
#define P1_13                45//SPI_MISO(RAK4630 internal)
#define P1_14                46//BUSY(RAK4630 internal)
#define P1_15                47//DIO1(RAK4630 internal)

/*
 * WisBlock Base GPIO definitions
 */

#define WB_IO1                 P0_17//17          // SLOT_A SLOT_B IO_SLOT
#define WB_IO2                 P1_02//34          // SLOT_A SLOT_B IO_SLOT
#define WB_IO3                 P0_21//21          // SLOT_C IO_SLOT
#define WB_IO4                 P0_04//4           // SLOT_C IO_SLOT
#define WB_IO5                 P0_09//9           // SLOT_D IO_SLOT
#define WB_IO6                 P0_10//10          // SLOT_D IO_SLOT
#define WB_SW1                 P1_01//33          // IO_SLOT
#define WB_A0                  P0_05//5           // IO_SLOT
#define WB_A1                  P0_31//31          // IO_SLOT
#define WB_I2C1_SDA            P0_13//13          // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_I2C1_SCL            P0_14//14          // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_I2C2_SDA            P0_24//24          // IO_SLOT
#define WB_I2C2_SCL            P0_25//25          // IO_SLOT
#define WB_SPI_CS              P0_26//26          // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_SPI_CLK             P0_03//3           // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_SPI_MISO            P0_29//29          // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_SPI_MOSI            P0_30//30          // SLOT_A SLOT_B SLOT_C SLOT_D IO_SLOT
#define WB_RXD0                P0_19//19          // IO_SLOT
#define WB_TXD0                P0_20//20          // IO_SLOT
#define WB_RXD1                P0_15//15          // SLOT_A IO_SLOT
#define WB_TXD1                P0_16//16          // SLOT_A IO_SLOT
#define WB_LED1                P1_03//35          // IO_SLOT
#define WB_LED2                P1_04//36          // IO_SLOT
#define WB_RST                 P0_18//18          // IO_SLOT
#define WB_QSPI_SCLK           P0_03//3           // IO_SLOT
#define WB_QSPI_CE             P0_26//26          // IO_SLOT
#define WB_QSPI_DIO0           P0_30//30          // IO_SLOT
#define WB_QSPI_DIO1           P0_29//29          // IO_SLOT
#define WB_QSPI_DIO2           P0_28//28          // IO_SLOT
#define WB_QSPI_DIO3           P0_02//2           // IO_SLOT

// LEDs
#define PIN_LED1 WB_LED1//35
#define PIN_LED2 WB_LED2//36

#define LED_BUILTIN PIN_LED1
#define LED_CONN PIN_LED2

#define LED_GREEN PIN_LED1
#define LED_BLUE PIN_LED2

#define LED_STATE_ON 1

/*
 * Analog pins
 */
#define PIN_A0 WB_A0
#define PIN_A1 WB_A1

#define A0 PIN_A0
#define A1 PIN_A1

// Other pins
#define PIN_NFC1 WB_IO5
#define PIN_NFC2 WB_IO6

/*
 * Serial interfaces
 */
#define PIN_SERIAL0_RX WB_RXD0//19
#define PIN_SERIAL0_TX WB_TXD0//20

#define PIN_SERIAL1_RX WB_RXD1//15
#define PIN_SERIAL1_TX WB_TXD1//16

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO WB_SPI_MISO
#define PIN_SPI_MOSI WB_SPI_MOSI
#define PIN_SPI_SCK  WB_SPI_CLK

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA WB_I2C1_SDA
#define PIN_WIRE_SCL WB_I2C1_SCL

// QSPI Pins
#define PIN_QSPI_SCK   P0_03//3
#define PIN_QSPI_CS    WB_QSPI_CE//26
#define PIN_QSPI_IO0   WB_QSPI_DIO0//30
#define PIN_QSPI_IO1   WB_QSPI_DIO1//29
#define PIN_QSPI_IO2   WB_QSPI_DIO2//28
#define PIN_QSPI_IO3   WB_QSPI_DIO3//2

#ifdef __cplusplus
}
#endif

#endif
