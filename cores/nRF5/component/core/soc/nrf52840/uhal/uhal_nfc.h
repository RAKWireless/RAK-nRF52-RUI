#ifndef _UHAL_NFC_H_
#define _UHAL_NFC_H_

void uhal_nfc_init();
void uhal_nfc_msg_add(uint8_t const* code,uint32_t code_size, uint8_t const* p_data, uint32_t p_data_size);
void uhal_nfc_start();

#endif // BLE_CFG_H__
