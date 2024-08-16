#include <stddef.h>
#include "udrv_ble.h"
#include "udrv_delay.h"
#include "uhal_ble.h"
#include "service_nvm.h"
#include "uhal_cus_ble.h"
#include "uhal_ble_hid.h"

#ifdef SUPPORT_BLE

static uint8_t ble_services_is_enable = 0;
uint8_t ble_current_service = DRV_BLE_UART_MODE;

void udrv_ble_stack_start(void)
{
    #ifndef rak11720
    udrv_ble_stop();
    #endif
    uhal_ble_stack_init();
    ble_services_is_enable = 0;
 /*
    if(!ble_services_is_enable)
    {
        uhal_ble_stack_init();
    }
*/
}

void udrv_ble_services_start(void)
{
    char mac[12];
    service_nvm_get_ble_mac_from_nvm(mac,12);
    if(!ble_services_is_enable)
    {
        uhal_scan_init(false);
        uhal_gap_params_init();
        #ifndef rak11720
        udrv_ble_set_macaddress(mac);
        #endif
        uhal_gatt_init();
        uhal_conn_params_init();
        uhal_nus_peer_manager_init();
        uhal_services_init();
        uhal_advertising_init();
        ble_services_is_enable = 1;
    }
    else
    {
        uhal_scan_init(false);
        uhal_gap_params_init();
        udrv_ble_set_macaddress(mac);
        uhal_gatt_init();
        uhal_conn_params_init();
        //uhal_nus_peer_manager_init();
        uhal_advertising_init();
    }
}

void udrv_ble_stop(void)
{
    uhal_stop_ble();
    //ble_services_is_enable = 0;
}

int32_t udrv_ble_nus_available(void)
{
    return uhal_nus_available();
}

int32_t udrv_ble_nus_read(uint8_t *Buffer, int32_t NumberOfBytes)
{
    return uhal_nus_read(Buffer, NumberOfBytes);
}

void udrv_ble_nus_write(uint8_t *pdata, uint16_t length)
{
    uhal_nus_write(pdata, length);
}

void udrv_ble_set_txpower(drv_ble_tx_power_t tx_power)
{
    uhal_ble_set_txpower(tx_power);
}

int32_t udrv_ble_get_txpower()
{
    return uhal_ble_get_txpower();
}

int32_t udrv_ble_advertising_start(uint8_t time_out)
{
    return uhal_advertising_start(time_out);
}

int32_t udrv_ble_advertising_stop(void)
{
    return uhal_advertising_stop(0);
}

int32_t udrv_ble_advertising_status()
{
    return uhal_advertising_status();
}

int32_t udrv_ble_set_device_name(char *devic_name, uint8_t device_name_length)
{
    return uhal_ble_set_device_name(devic_name, device_name_length);
}

char *udrv_ble_get_device_name()
{
    return uhal_ble_get_device_name();
}

int32_t udrv_ble_get_macaddress(uint8_t *macaddr)
{
    return uhal_ble_get_macaddress(macaddr);
}

int32_t udrv_ble_set_macaddress(uint8_t *macaddr)
{
    UDRV_RETURN_CODE err_code;
    if (strlen(macaddr) != 12)
        return -UDRV_WRONG_ARG;
    for (int i = 0 ; i < strlen(macaddr) ; i++) {
            if ((macaddr[i] < 0x30 || macaddr[i] > 0x39) &&
                (macaddr[i] < 0x41 || macaddr[i] > 0x46) &&
                (macaddr[i] < 0x61 || macaddr[i] > 0x66)) {
            return -UDRV_WRONG_ARG;
        }
    }
    err_code = uhal_ble_set_macaddress(macaddr);
    if (err_code != UDRV_RETURN_OK)
        return -err_code;
    err_code = service_nvm_set_ble_mac_to_nvm(macaddr, 6); // Edited by Sercan ERAT -- FIXED!
    if (err_code != UDRV_RETURN_OK)
        return -err_code;
    return UDRV_RETURN_OK;
}

int32_t udrv_ble_set_adv_interval(uint32_t adv_interval)
{
    return uhal_ble_set_adv_interval(adv_interval);
}

int32_t udrv_ble_get_adv_interval()
{
    return uhal_ble_get_adv_interval();
}

void udrv_ble_set_adv_slow_mode(uint8_t adv_mode)
{
    uhal_ble_set_adv_slow_mode(adv_mode);
}

uint8_t udrv_ble_get_adv_slow_mode()
{
    return uhal_ble_get_adv_slow_mode();
}

void udrv_ble_set_adv_fast_mode(uint8_t adv_mode)
{
    uhal_ble_set_adv_fast_mode(adv_mode);
}

uint8_t udrv_ble_get_adv_fast_mode()
{
    return uhal_ble_get_adv_fast_mode();
}

void udrv_ble_switch_service_mode(drv_ble_service_mode service_mode)
{
    ble_current_service = service_mode;
    uhal_ble_switch_service_mode(service_mode);
    udrv_ble_stack_start();
    udrv_ble_services_start();
}

int32_t udrv_ble_set_beacon_major(uint16_t major_value)
{
    return uhal_ble_set_beacon_major(major_value);
}

int32_t udrv_ble_set_beacon_minor( uint16_t minor_value)
{
    return uhal_ble_set_beacon_minor(minor_value);
}

int32_t udrv_ble_set_beacon_uuid(uint8_t beaconUuid[])
{
    return uhal_ble_set_beacon_uuid(beaconUuid);
}

int32_t udrv_ble_set_beacon_power(int8_t beacon_power)
{
    return uhal_ble_set_beacon_power(beacon_power);
}

int32_t udrv_ble_set_beacon_custom_payload(uint8_t cus_adv_data[], uint8_t cus_adv_len)
{
    return uhal_ble_set_beacon_custom_payload(cus_adv_data, cus_adv_len);
}

void udrv_ble_cus_init(void)
{
    udrv_ble_stop();
    uhal_ble_switch_service_mode(DRV_BLE_CUS_MODE);
    cus_timers_init();
    cus_ble_stack_init();
    cus_gap_params_init();
    cus_gatt_init();
}

void udrv_cus_services_init(uint8_t cus_service_uuid[])
{
    cus_services_init(cus_service_uuid);
}

int32_t udrv_cus_add_char(uint16_t chars_uuid, uint32_t chars_properties, uint8_t chars_permission, uint16_t len)
{
    cus_add_char(chars_uuid, chars_properties, chars_permission, len);
}

void udrv_cus_notify(uint8_t *notify_data, uint16_t chars_uuid)
{
    cus_notify(notify_data, chars_uuid);
}

void udrv_cus_write(uint8_t *send_data, uint16_t chars_uuid)
{
    cus_write(send_data, chars_uuid);
}

void udrv_ble_cus_start(void)
{
    cus_conn_params_init();
    cus_peer_manager_init();
    cus_advertising_init();
    cus_advertising_start(0);
}

uint8_t udrv_cus_is_notifyEnabled(uint16_t chars_uuid)
{
    return cus_is_notifyEnabled(chars_uuid);
}

void udrv_ble_cus_register_notify_handler(BLE_CUS_NOTIFY_HANDLER handler)
{
    uhal_ble_cus_register_notify_handler(handler);
}

void udrv_ble_cus_register_send_handler(BLE_CUS_SEND_HANDLER handler)
{
    uhal_ble_cus_register_send_handler(handler);
}

void udrv_ble_scan_data_handler (BLE_SCAN_DATA_HANDLER handler)
{
    uhal_ble_scan_data_handler(handler);
}
void udrv_ble_keyboard_handler (BLE_KEYBOARD_HANDLER handler)
{
    uhal_ble_keyboard_handler(handler);
}

int32_t udrv_ble_set_scan_interval_window(uint16_t scan_interval, uint16_t scan_window)
{
    return uhal_ble_set_scan_interval_window(scan_interval, scan_window);
}

void udrv_ble_register_callback_handler (Event event,BLE_HANDLER handler)
{
    if(event == BLE_CONNECTED)
        uhal_ble_connect_handler(handler); 
    else if(event == BLE_DISCONNECTED)
        uhal_ble_disconnect_handler(handler); 
}
 
  
void udrv_ble_scan_start(uint16_t scan_sec)
{
    uhal_ble_scan_start(scan_sec);
}

void udrv_ble_scan_stop(void)
{
    uhal_ble_scan_stop();
}

void udrv_ble_hid_start()
{
    //if(ble_services_is_enable)
        udrv_ble_stop();
    
    uhal_ble_switch_service_mode(DRV_BLE_HID_MODE);
    uhal_ble_hid_init();
    uhal_ble_hid_advertising_start();
}

void udrv_ble_hid_keys_send(uint8_t key_len, uint8_t * key_pattern)
{
    uhal_ble_hid_keys_send(key_len, key_pattern);
}

void udrv_ble_delete_bonds()
{
    uhal_ble_delete_bonds();
}

int32_t udrv_nus_set_keypairing(uint8_t *pairing_key, uint8_t key_length)
{
    return uhal_nus_set_keypairing(pairing_key, key_length);
}

int32_t udrv_nus_set_permission(uint8_t permission)
{
    return uhal_nus_set_permission(permission);
}

#endif
