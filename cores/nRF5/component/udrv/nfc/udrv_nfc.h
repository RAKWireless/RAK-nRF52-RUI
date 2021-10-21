#ifndef _UDRV_NFC_H_
#define _UDRV_NFC_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

void udrv_nfc_init(void);
void udrv_nfc_msg_add(uint8_t const* code,uint32_t code_size, uint8_t const* p_data,uint32_t p_data_size);
void udrv_nfc_start();

#ifdef __cplusplus
}
#endif

#endif // #ifndef _TDRV_NFC_H_
