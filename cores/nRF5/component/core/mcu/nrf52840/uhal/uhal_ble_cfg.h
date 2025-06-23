#ifndef BLE_CFG_H__
#define BLE_CFG_H__

struct uhal_ble_parameter
{
    int8_t txpower;
    char custom_dev_name[30];
    uint8_t adv_mode;
    uint32_t adv_interval;
    uint8_t service_mode;
    uint8_t adv_timeout;
    uint8_t pairing_key[BLE_GAP_PASSKEY_LEN + 1];
    uint8_t permission;
} ;

#endif // BLE_CFG_H__