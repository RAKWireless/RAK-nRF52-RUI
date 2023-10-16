// https://devzone.nordicsemi.com/f/nordic-q-a/43980/aes-256-bit-keys-with-cc310-cryptocell
// CC310 supports 128-bit key length !!! (Hardware accelerated crypto!)

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <ctype.h>

#include "nrf.h"
#include "nrf_drv_clock.h"
#include "nrf_delay.h"

#include "nrf_drv_power.h"

#include "app_error.h"
#include "app_util.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "boards.h"

#include "nrf_crypto.h"
#include "nrf_crypto_error.h"
#include "nrf_crypto_aes_shared.h"

#include "uhal_crypto.h"
#include "udrv_errno.h"

#define AES128_SIZE 16
#define AES192_SIZE 24
#define AES256_SIZE 32

/**@internal @brief Type declaration for an nrf_crypto_aes info structure.
 *
 * @details     This structure contains the calling interface and any metadata required
 *              to call the nrf_crypto_aes API functions.
 */
typedef struct
{
    nrf_crypto_aes_mode_t     mode;
    nrf_crypto_key_size_id_t  key_size;
    size_t                    context_size;

    aes_init_fn_t             init_fn;
    aes_uninit_fn_t           uninit_fn;
    aes_key_set_fn_t          key_set_fn;
    aes_iv_set_fn_t           iv_set_fn;
    aes_iv_get_fn_t           iv_get_fn;
    aes_update_fn_t           update_fn;
    aes_finalize_fn_t         finalize_fn;
} crypto_aes_info_t;

typedef enum
{
    TYPE_ENCRYPT = NRF_CRYPTO_ENCRYPT,
    TYPE_DECRYPT = NRF_CRYPTO_DECRYPT
} AES_Crypt_type_t;

/*
Modes:  ECB (Electronic Code Book) 
        CBC (Cipher Block Chaining) 
        CFB (Cipher FeedBack) 
        OFB (Output FeedBack)
        CTR (Counter)
*/ 
typedef enum 
{
    AES_MODE_ECB,
    AES_MODE_CBC,
    //AES_MODE_CFB,
    //AES_MODE_OFB,
    AES_MODE_CTR
} AES_mode_t;

static uint8_t key[AES256_SIZE] = {0};
static uint16_t key_size=0;

static uint8_t iv[16] = {0};
static uint16_t iv_size=16;

static int uhal_crypto_aes_crypt(AES_mode_t mode, AES_Crypt_type_t type,
                             uint8_t *pKey, uint16_t keySize, 
                             unsigned char *pIV, uint16_t ivSize, 
                             char *intputBuffer, uint16_t intputBuffer_size, 
                             unsigned char *outputBuffer, uint16_t outputBuffer_size)
{
    // ASSERT(keySize == AES128_SIZE || keySize == AES192_SIZE || keySize == AES256_SIZE);
    if(keySize != AES128_SIZE /* && keySize != AES192_SIZE && keySize != AES256_SIZE */) // Please read description above. For HW acceleration, only 128-bit key must be used.
        return -UDRV_INVALID_KEY_LENGTH;

    if(mode == AES_MODE_CBC)
    {
        // ASSERT(ivSize == 16);
        if(ivSize != 16)
            return -UDRV_INVALID_KEY_LENGTH;
    }

    // ASSERT(outputBuffer_size%16 == 0);
    if(mode != AES_MODE_CTR)
    {
        if(outputBuffer_size%16 != 0)
            return -UDRV_INVALID_INPUT_LENGTH;
    }


    // ... AES ... //
    uint32_t  ret_val;
    crypto_aes_info_t nrf_crypto_aes; 
    nrf_crypto_aes_context_t aes_ctx;

    memcpy((void *) &nrf_crypto_aes, (const void *) &g_nrf_crypto_aes_cbc_128_info, sizeof(nrf_crypto_aes_info_t));

    if(mode == AES_MODE_ECB)
    {
        nrf_crypto_aes.mode = NRF_CRYPTO_AES_MODE_ECB;
    }
    else if(mode == AES_MODE_CBC)
    {
        nrf_crypto_aes.mode = NRF_CRYPTO_AES_MODE_CBC; 
    }
    else if(mode == AES_MODE_CTR)
    {
        nrf_crypto_aes.mode = NRF_CRYPTO_AES_MODE_CTR; 
    }
    else
    {
        return -UDRV_WRONG_ARG;
    }

    if(keySize == AES128_SIZE)
        nrf_crypto_aes.key_size = NRF_CRYPTO_KEY_SIZE_128;
    else
        return -UDRV_INVALID_KEY_LENGTH;


    if(mode == AES_MODE_ECB)
    {
        nrf_crypto_aes.context_size = sizeof(nrf_crypto_backend_aes_ecb_context_t);
        nrf_crypto_aes.iv_set_fn    = NULL;
        nrf_crypto_aes.iv_get_fn    = NULL;
    }
    else if(mode == AES_MODE_CTR)
    {
        nrf_crypto_aes.context_size = sizeof(nrf_crypto_backend_aes_ctr_context_t);
    }

    if(type == TYPE_ENCRYPT)
    {
        /* Init cbc context */
        ret_val = nrf_crypto_aes_init(&aes_ctx,
                                    &nrf_crypto_aes,
                                    NRF_CRYPTO_ENCRYPT);
        //APP_ERROR_CHECK(ret_val);
        if(ret_val != 0)
            return ret_val;
    }
    else if(type == TYPE_DECRYPT)
    {
        /* Init cbc context */
        ret_val = nrf_crypto_aes_init(&aes_ctx,
                                    &nrf_crypto_aes,
                                    NRF_CRYPTO_DECRYPT);
        //APP_ERROR_CHECK(ret_val);
        if(ret_val != 0)
            return ret_val;
    }
    else
    {
        // ERROR_CHECK(-1);
        return -UDRV_WRONG_ARG;
    }
    

    /* Set encryption key */
    ret_val = nrf_crypto_aes_key_set(&aes_ctx, pKey);
    //APP_ERROR_CHECK(ret_val);
    if(ret_val != 0)
        return ret_val;

    if(mode != AES_MODE_ECB) {
        ret_val = nrf_crypto_aes_iv_set(&aes_ctx, pIV);
        //APP_ERROR_CHECK(ret_val);
        if(ret_val != 0)
            return ret_val;
    }

    #define PARTIAL_MESSAGE_SIZE (16u)  // 16 bytes
    // intputBuffer_size must be always multiple of 16 bytes 
    // If not, you must partially encrypt data.

    uint16_t offset = 0;
    while(intputBuffer_size)
    {
        char partial_message[PARTIAL_MESSAGE_SIZE];
        unsigned char output_message[PARTIAL_MESSAGE_SIZE];
        memset(partial_message, 0x00, PARTIAL_MESSAGE_SIZE);
        memset(output_message, 0x00, PARTIAL_MESSAGE_SIZE);
        if(intputBuffer_size < PARTIAL_MESSAGE_SIZE)
        {
            memcpy(partial_message, intputBuffer + offset, intputBuffer_size);
        }
        else
        {
            memcpy(partial_message, intputBuffer + offset, PARTIAL_MESSAGE_SIZE); 
        }
        
        ret_val = nrf_crypto_aes_update(&aes_ctx,
                                    (const unsigned char*) partial_message,
                                    PARTIAL_MESSAGE_SIZE,
                                    (uint8_t *) output_message);
                                    
        //APP_ERROR_CHECK(ret_val);
        if(ret_val != 0)
            return ret_val;
        
        if(intputBuffer_size < PARTIAL_MESSAGE_SIZE)
        {
            memcpy(outputBuffer + offset, output_message, outputBuffer_size);
            intputBuffer_size = 0;
            outputBuffer_size = 0;
        }
        else
        {
            memcpy(outputBuffer + offset, output_message, PARTIAL_MESSAGE_SIZE);
            intputBuffer_size -= PARTIAL_MESSAGE_SIZE;
            outputBuffer_size -= PARTIAL_MESSAGE_SIZE;
        }

        offset += PARTIAL_MESSAGE_SIZE;
    }


    ret_val = nrf_crypto_aes_uninit(&aes_ctx);
    //APP_ERROR_CHECK(ret_val);
    if(ret_val != 0)
        return ret_val;
        
    return 0;
}

int uhal_cyrpto_set_key(uint8_t *pKey, uint16_t keySize)
{
    // ASSERT(keySize == AES128_SIZE || keySize == AES192_SIZE || keySize == AES256_SIZE);
    if(keySize != AES128_SIZE /*&& keySize != AES192_SIZE && keySize != AES256_SIZE*/)
         return -UDRV_INVALID_KEY_LENGTH;

    memcpy(key, pKey, keySize);
    key_size = keySize;
    return 0;
}

int uhal_cyrpto_set_iv(unsigned char *pIV, uint16_t ivSize)
{
    // ASSERT(ivSize == 16);
    if(ivSize != 16)
        return -UDRV_INVALID_KEY_LENGTH;

    memcpy(iv, pIV, ivSize);
    iv_size = ivSize;
    return 0;
}

int uhal_crypto_aes_ecb_encrypt(char *input, uint16_t inputSize, 
                                unsigned char *output, uint16_t outputSize)
{
    // Encryption with AES-ECB
    return uhal_crypto_aes_crypt(AES_MODE_ECB, TYPE_ENCRYPT,
                          (uint8_t *) key, key_size,
                          NULL, 0,
                          input, inputSize, 
                          output, outputSize);
}

int uhal_crypto_aes_ecb_decrypt(char *input, uint16_t inputSize, 
                                unsigned char *output, uint16_t outputSize)
{
    // Decryption with AES-ECB
    return uhal_crypto_aes_crypt(AES_MODE_ECB, TYPE_DECRYPT,
                          (uint8_t *) key, key_size,
                          NULL, 0,
                          input, inputSize, 
                          output, outputSize);
}

int uhal_crypto_aes_cbc_encrypt(char *input, uint16_t inputSize, 
                                 unsigned char *output, uint16_t outputSize)
{
    uint8_t iv_enc[16] = {0};

    memcpy(iv_enc, iv, iv_size);

    // Encryption with AES128-CBC
    return uhal_crypto_aes_crypt(AES_MODE_CBC, TYPE_ENCRYPT,
                          (uint8_t *) key, key_size,
                          (uint8_t *) iv_enc, sizeof(iv_enc),
                          input, inputSize, 
                          output, outputSize);
}

int uhal_crypto_aes_cbc_decrypt(char *input, uint16_t inputSize, 
                                unsigned char *output, uint16_t outputSize)
{
    uint8_t iv_dec[16] = {0};

    memcpy(iv_dec, iv, iv_size);

    // Encryption with AES128-CBC
    return uhal_crypto_aes_crypt(AES_MODE_CBC, TYPE_DECRYPT,
                          (uint8_t *) key, key_size,
                          (uint8_t *) iv_dec, sizeof(iv_dec),
                          input, inputSize, 
                          output, outputSize);    
}

int uhal_crypto_aes_ctr_encrypt(char *input, uint16_t inputSize, 
                                unsigned char *output, uint16_t outputSize)
{
    uint8_t iv[16] = {0};

    memcpy(iv, iv, iv_size);

    // Encryption with AES128-CTR
    return uhal_crypto_aes_crypt(AES_MODE_CTR, TYPE_ENCRYPT,
                          (uint8_t *) key, key_size,
                          (uint8_t *) iv, sizeof(iv),
                          input, inputSize, 
                          output, outputSize);
}

int uhal_crypto_aes_ctr_decrypt(char *input, uint16_t inputSize, 
                                unsigned char *output, uint16_t outputSize)
{
    uint8_t iv[16] = {0};

    memcpy(iv, iv, iv_size);

    // Decryption with AES128-CTR
    return uhal_crypto_aes_crypt(AES_MODE_CTR, TYPE_DECRYPT,
                          (uint8_t *) key, key_size,
                          (uint8_t *) iv, sizeof(iv),
                          input, inputSize, 
                          output, outputSize);  
}