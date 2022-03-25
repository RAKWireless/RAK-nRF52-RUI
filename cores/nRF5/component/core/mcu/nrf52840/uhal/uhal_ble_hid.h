#ifndef _UHAL_BLE_HID_H_
#define _UHAL_BLE_HID_H_


//BLE_ADVERTISING_DEF(m_hid_advertising);                                 /**< Advertising module instance. */

void uhal_ble_hid_init();
int32_t uhal_ble_hid_advertising_start();
void uhal_ble_hid_keys_send(uint8_t key_len, uint8_t * key_pattern);
void uhal_ble_delete_bonds(void);

#endif  // #ifndef _UHAL_BLE_H_
