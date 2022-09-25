#ifndef _DRV_BLE_H_
#define _DRV_BLE_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

#define APP_ADV_TIMEOUT_IN_SECONDS 30         /**< The advertising timeout (in units of seconds). */


    typedef enum
    {
        DRV_BLE_TX_POWER_8DBM = (0x8UL),      /**< 8 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_7DBM = (0x7UL),      /**< 7 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_6DBM = (0x6UL),      /**< 6 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_5DBM = (0x5UL),      /**< 5 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_4DBM = (0x4UL),      /**< 4 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_3DBM = (0x3UL),      /**< 3 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_2DBM = (0x2UL),      /**< 2 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_0DBM = (0x00UL),     /**< 0 dBm radio transmit power.   */
        DRV_BLE_TX_POWER_NEG4DBM = (0xFCUL),  /**< -4 dBm radio transmit power.  */
        DRV_BLE_TX_POWER_NEG8DBM = (0xF8UL),  /**< -8 dBm radio transmit power.  */
        DRV_BLE_TX_POWER_NEG12DBM = (0xF4UL), /**< -12 dBm radio transmit power. */
        DRV_BLE_TX_POWER_NEG16DBM = (0xF0UL), /**< -16 dBm radio transmit power. */
        DRV_BLE_TX_POWER_NEG20DBM = (0xECUL), /**< -20 dBm radio transmit power. */
        DRV_BLE_TX_POWER_NEG30DBM = (0xE2UL), /**< -30 dBm radio transmit power. (Deprecated)*/
        DRV_BLE_TX_POWER_NEG40DBM = (0xD8UL)  /**< -40 dBm radio transmit power. */
    } drv_ble_tx_power_t;

    typedef enum
    {
        DRV_BLE_ADV_MODE_IDLE,
        DRV_BLE_ADV_MODE_DIRECTED_HIGH_DUTY,
        DRV_BLE_ADV_MODE_DIRECTED,
        DRV_BLE_ADV_MODE_FAST,
        DRV_BLE_ADV_MODE_SLOW
    } drv_ble_adv_mode_t;

    typedef enum
    {
        DRV_BLE_UART_MODE,
        DRV_BLE_BEACON_MODE,
        DRV_BLE_HID_MODE,
        DRV_BLE_CUS_MODE
    } drv_ble_service_mode;

    typedef enum
    {
        CHR_PROPS_BROADCAST = 1,
        CHR_PROPS_READ = 2,
        CHR_PROPS_WRITE_WO_RESP = 4,
        CHR_PROPS_WRITE = 8,
        CHR_PROPS_NOTIFY = 16,
        CHR_PROPS_INDICATE = 32
    } chars_properties;

    typedef enum
    {
        SET_NO_ACCESS = 0,          /* Set sec_mode pointed to by ptr to have no access rights*/
        SET_OPEN = 1,               /* Set sec_mode pointed to by ptr to require no protection, open link.*/
        SET_ENC_NO_MITM = 2,        /* Set sec_mode pointed to by ptr to require encryption, but no MITM protection.*/
        SET_ENC_WITH_MITM = 3,      /* Set sec_mode pointed to by ptr to require encryption and MITM protection.*/
        SET_LESC_ENC_WITH_MITM = 4, /* Set sec_mode pointed to by ptr to require LESC encryption and MITM protection.*/
        SET_SIGNED_NO_MITM = 5,     /* Set sec_mode pointed to by ptr to require signing or encryption, no MITM protection needed.*/
        SET_SIGNED_WITH_MITM = 6    /* Set sec_mode pointed to by ptr to require signing or encryption with MITM protection.*/
    } chars_security_req;


    typedef enum
    {
        BLE_CONNECTED = 1,
        BLE_DISCONNECTED 
    } Event;


    typedef void (*BLE_CUS_NOTIFY_HANDLER) (uint16_t, uint8_t *);

    typedef void (*BLE_CUS_SEND_HANDLER) (uint16_t, uint8_t *);

    typedef void (*BLE_SCAN_DATA_HANDLER) (int8_t, uint8_t *, uint8_t *, uint16_t); //rssi, mac address, raw data, raw data length

    typedef void (*BLE_KEYBOARD_HANDLER) (uint16_t, uint8_t);

    typedef void (*BLE_HANDLER)(void);
    
    void udrv_ble_cus_register_notify_handler (BLE_CUS_NOTIFY_HANDLER handler);

    void udrv_ble_cus_register_send_handler (BLE_CUS_SEND_HANDLER handler);

    void udrv_ble_scan_data_handler (BLE_SCAN_DATA_HANDLER handler);

    void udrv_ble_keyboard_handler (BLE_KEYBOARD_HANDLER handler);
    
    void udrv_ble_register_callback_handler (Event event,BLE_HANDLER handler);
    
    void udrv_ble_stack_start(void);

    void udrv_ble_services_start(void);

    void udrv_ble_stop(void);

    /**
    * @brief       This API is used to get the read data length
    * @retval      uint32_t
    */
    int32_t udrv_ble_nus_available(void);

    int32_t udrv_ble_nus_read(uint8_t *Buffer, int32_t NumberOfBytes);

    void udrv_ble_nus_write(uint8_t *pdata, uint16_t length);

    void udrv_ble_set_txpower(drv_ble_tx_power_t tx_power);

    int32_t udrv_ble_get_txpower();

    int32_t udrv_ble_advertising_start(uint8_t time_out);

    int32_t udrv_ble_advertising_stop(void);

    int32_t udrv_ble_advertising_status();

    int32_t udrv_ble_set_device_name(char *devic_name, uint8_t device_name_length);

    char *udrv_ble_get_device_name();

    int32_t udrv_ble_get_macaddress(uint8_t *macaddr);

    int32_t udrv_ble_set_macaddress(uint8_t *macaddr);

    int32_t udrv_ble_set_adv_interval(uint32_t adv_interval);

    int32_t udrv_ble_get_adv_interval();

    void udrv_ble_set_adv_slow_mode(uint8_t adv_mode);

    uint8_t udrv_ble_get_adv_slow_mode();

    void udrv_ble_set_adv_fast_mode(uint8_t adv_mode);

    uint8_t udrv_ble_get_adv_fast_mode();

    void udrv_ble_switch_service_mode(drv_ble_service_mode service_mode);

    int32_t udrv_ble_set_beacon_major(uint16_t major_value);

    int32_t udrv_ble_set_beacon_minor(uint16_t minor_value);

    int32_t udrv_ble_set_beacon_uuid(uint8_t beaconUuid[]);
    
    int32_t udrv_ble_set_beacon_power(int8_t beacon_power);

    int32_t udrv_ble_set_beacon_custom_payload(uint8_t cus_adv_data[], uint8_t cus_adv_len);

    void udrv_ble_cus_init(void);

    void udrv_cus_services_init(uint8_t cus_service_uuid[]);

    int32_t udrv_cus_add_char(uint16_t chars_uuid, uint32_t chars_properties, uint8_t chars_permission, uint16_t len);

    void udrv_cus_notify(uint8_t *notify_data, uint16_t chars_uuid);

    void udrv_cus_write(uint8_t *send_data, uint16_t chars_uuid);

    void udrv_ble_cus_start(void);

    uint8_t udrv_cus_is_notifyEnabled(uint16_t chars_uuid);

    int32_t udrv_ble_set_scan_interval_window(uint16_t scan_interval, uint16_t scan_window);

    void udrv_ble_scan_start(uint16_t scan_sec); 

    void udrv_ble_hid_start();

    void udrv_ble_hid_keys_send(uint8_t key_len, uint8_t * key_pattern);

    void udrv_ble_delete_bonds();

    void udrv_print_current_service();

    int32_t udrv_nus_set_keypairing(uint8_t *pairing_key, uint8_t key_length);
    
    int32_t udrv_nus_set_permission(uint8_t permission);

    
#ifdef __cplusplus
}
#endif

#endif // #ifndef _DRV_BLE_H_
