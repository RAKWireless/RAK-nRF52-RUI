#ifndef _UDRV_SYSTEM_H_
#define _UDRV_SYSTEM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#ifndef RUI_BOOTLOADER
#include <udrv_timer.h>

#define RANDOM_LENGTH   4
#define SEED_LENGTH   4
#endif

/**
 * @brief event operation.
 */
typedef enum
{
    UDRV_SYS_EVT_OP_SERIAL_UART            = 0x00,     //operating mode parser - UART0/UART1
    UDRV_SYS_EVT_OP_SERIAL_USB             = 0x01,     //operating mode parser - USB0
    UDRV_SYS_EVT_OP_SERIAL_BLE             = 0x02,     //operating mode parser - BLE
    UDRV_SYS_EVT_OP_LORAWAN                = 0x03,     //LoRaWAN RX process
    UDRV_SYS_EVT_OP_LORAWAN_AUTO_JOIN      = 0x04,     //LoRaWAN auto join
    UDRV_SYS_EVT_OP_LORAWAN_SEND_HELLO     = 0x05,     //LoRaWAN send hello
    UDRV_SYS_EVT_OP_LORAWAN_BEACON_ACQUIRE = 0x06,     //LoRaWAN acquire beacon
    UDRV_SYS_EVT_OP_USER_APP               = 0x07,     //user application
} udrv_system_event_op_t;

typedef struct
{
    udrv_system_event_op_t   request;        //!< Requested operation.
    void                     *p_context;
} udrv_system_event_t;

void udrv_system_event_init(void);

int32_t udrv_system_event_produce(udrv_system_event_t *event);

void udrv_system_event_consume(void);

void udrv_system_reboot(void);

#ifndef RUI_BOOTLOADER
void udrv_system_critical_section_begin(uint32_t *mask);

void udrv_system_critical_section_end (uint32_t *mask);

unsigned long udrv_system_random (unsigned long maxvalue);

void udrv_system_randomseed(unsigned long seed);

int32_t udrv_system_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t udrv_system_user_app_timer_start (uint32_t count, void *m_data);

int32_t udrv_system_user_app_timer_stop (void);
#endif

#ifdef __cplusplus
}
#endif

#endif  // #ifndef _UDRV_SYSTEM_H_
