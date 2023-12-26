/**
 * Copyright (c) 2016 - 2018, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include "sdk_common.h"
#if NRF_MODULE_ENABLED(NRF_SERIAL)
#include "nrf_serial.h"
#include "udrv_system.h"
#include "udrv_serial.h"
#include "nrf_log.h"
#if defined (UART_PRESENT)

#ifndef RUI_BOOTLOADER
extern bool udrv_powersave_in_sleep;
static udrv_system_event_t rui_uart_event = {.request = UDRV_SYS_EVT_OP_SERIAL_UART, .p_context = NULL};
#endif
static volatile uint8_t tx_done =0;

uint32_t queue_put(serial_queues_ctx_t * ctx, uint8_t byte)
{
    if (queue_length(ctx) <= ctx->buf_size_mask)
    {
        ctx->p_buff[ctx->write_pos & ctx->buf_size_mask] = byte;
        ctx->write_pos++;
        return NRF_SUCCESS;
    }

    return NRF_ERROR_NO_MEM;
}

uint32_t queue_peek(serial_queues_ctx_t * ctx, uint8_t *byte)
{
    if (queue_length(ctx) != 0)
    {
        *byte = ctx->p_buff[ctx->read_pos & ctx->buf_size_mask];
        return NRF_SUCCESS;
    }

    return NRF_ERROR_NO_MEM;
}

uint32_t queue_get(serial_queues_ctx_t * ctx, uint8_t *byte)
{
    if (queue_length(ctx) != 0)
    {
        *byte = ctx->p_buff[ctx->read_pos & ctx->buf_size_mask];
        ctx->read_pos++;
        return NRF_SUCCESS;
    }

    return NRF_ERROR_NO_MEM;
}

uint32_t queue_flush(serial_queues_ctx_t * ctx)
{
    ctx->read_pos = ctx->write_pos;
    return NRF_SUCCESS;
}


uint32_t queue_length(serial_queues_ctx_t * ctx)
{

    uint32_t tmp = ctx->read_pos;
    return ctx->write_pos - tmp;
}

uint32_t queue_read(serial_queues_ctx_t * ctx,uint8_t * p_byte_array,uint32_t p_size)
{
    const uint32_t byte_count    = queue_length(ctx);
    const uint32_t requested_len = p_size;
    uint32_t       index         = 0;
    uint32_t       read_size     = MIN(requested_len, byte_count);

    // Check if the FIFO is empty.
    if (byte_count == 0)
    {
        return read_size;
    }
    // Fetch bytes from the FIFO.
    while (index < read_size)
    {
        queue_get(ctx,&p_byte_array[index++]);
    }

    return read_size;
}


static void event_handler(nrf_serial_t const * p_serial,
                          nrf_serial_event_t event)
{
    if (p_serial->p_ctx->p_config->ev_handler)
    {
        if(p_serial->instance.inst_idx == 0)
            p_serial->p_ctx->p_config->ev_handler(SERIAL_UART0, event);
        else if(p_serial->instance.inst_idx == 1)
            p_serial->p_ctx->p_config->ev_handler(SERIAL_UART1, event);
        else if(p_serial->instance.inst_idx == 2)
            p_serial->p_ctx->p_config->ev_handler(SERIAL_UART2, event);
    }
}

static void sleep_handler(nrf_serial_t const * p_serial)
{
    if (p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_POLLING)
    {
        return;
    }

    if (p_serial->p_ctx->p_config->sleep_handler)
    {
        p_serial->p_ctx->p_config->sleep_handler();
    }
}

static size_t serial_rx(nrf_serial_t const * p_serial,
                        uint8_t * p_buff,
                        size_t length)
{
    if (p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_POLLING)
    {
        size_t rx_len = MIN(length, UINT8_MAX);
        size_t len = rx_len;

        while (nrf_drv_uart_rx_ready(&p_serial->instance) && len)
        {
            ret_code_t ret = nrf_drv_uart_rx(&p_serial->instance, p_serial->p_ctx->p_config->p_buffers->p_rxb, p_serial->p_ctx->p_config->p_buffers->rx_size);
            if (ret != NRF_SUCCESS)
            {
                break;
            }
            p_buff++;
            len--;
        }

        return rx_len - len;
    }

    serial_queues_ctx_t * p_rxq = p_serial->p_ctx->p_config->p_queues->p_rxq;
    //return nrf_queue_out(p_rxq, p_buff, length);
    return queue_read(p_rxq, p_buff, length);
}

static size_t serial_tx(nrf_serial_t const * p_serial,
                        uint8_t * p_buff,
                        size_t length)
{
    size_t tx_len = 0;
    size_t i;
    uint32_t send_length;
    ret_code_t ret;
    if (p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_POLLING)
    {
        tx_len = MIN(length, UINT8_MAX);
        ret_code_t ret = nrf_drv_uart_tx(&p_serial->instance, p_buff, tx_len);
        ASSERT(ret == NRF_SUCCESS)
        return tx_len;
    }

    serial_queues_ctx_t const * p_txq = p_serial->p_ctx->p_config->p_queues->p_txq;
    nrf_serial_buffers_t const * p_buffs = p_serial->p_ctx->p_config->p_buffers;

    /* Try to enqueue data. */
    //size_t queue_in_len = nrf_queue_in(p_txq, p_buff, length);
    uint32_t write_pos = p_txq->write_pos;
    /*if (length >= 256)
        send_length = 128;
    else
        send_length = (uint8_t)length;*/
    for(i = 0; i < length; i++)
    {
        queue_put(p_txq, p_buff[i]);

  }
    if (nrf_drv_uart_tx_in_progress(&p_serial->instance))
    {
        return p_txq->write_pos - write_pos;
    }
    //for(i = 0; i < send_length; i++)
    {
        ret = queue_get(p_txq,(uint8_t *)p_buffs->p_txb);
        ASSERT(ret == NRF_SUCCESS);
    }
    //size_t len = nrf_queue_out(p_txq, p_buffs->p_txb, p_buffs->tx_size);
    //udrv_serial_log_printf("p_buff:%s\r\n",p_buff);
    ret = nrf_drv_uart_tx(&p_serial->instance, p_buff, 1);
    ASSERT(ret == NRF_SUCCESS);

    return length;
}

static void uart_event_handler(nrf_drv_uart_event_t * p_event, void * p_context)
{
    uint32_t ret;
    nrf_serial_t const * p_serial = p_context;

    switch (p_event->type)
    {
        case NRF_DRV_UART_EVT_RX_DONE:
        {
            nrf_serial_buffers_t const * p_buffs =
                    p_serial->p_ctx->p_config->p_buffers;
            if(p_event->data.rxtx.bytes == 0)
            {
               // A new start RX is needed to continue to receive data
               (void)nrf_drv_uart_rx(&p_serial->instance, p_serial->p_ctx->p_config->p_buffers->p_rxb, p_serial->p_ctx->p_config->p_buffers->rx_size);
               break;
            }

            serial_queues_ctx_t * p_rxq = p_serial->p_ctx->p_config->p_queues->p_rxq;
#ifndef RUI_BOOTLOADER

            udrv_powersave_in_sleep = false;
            if (p_serial->instance.inst_idx == 0) {
                for (int i = 0 ; i < p_event->data.rxtx.bytes ; i++) {
                    serial_fallback_handler(SERIAL_UART0, p_event->data.rxtx.p_data[i]);
                    queue_put(p_rxq, p_event->data.rxtx.p_data[i]);
                }
            } 
            else if (p_serial->instance.inst_idx == 1) {
                for (int i = 0 ; i < p_event->data.rxtx.bytes ; i++) {
                    serial_fallback_handler(SERIAL_UART1, p_event->data.rxtx.p_data[i]);
                    queue_put(p_rxq, p_event->data.rxtx.p_data[i]);
                }
	    }
#endif
            if(ret == NRF_SUCCESS && queue_length(p_rxq) != 0)
            {
#ifndef RUI_BOOTLOADER
            udrv_system_event_produce(&rui_uart_event);
#endif
            }
            
            event_handler(p_serial, NRF_SERIAL_EVENT_RX_DATA);
            if(queue_length(p_rxq) <= p_rxq->buf_size_mask)
            {
                (void)nrf_drv_uart_rx(&p_serial->instance,
                                  p_buffs->p_rxb,
                                  p_buffs->rx_size);
            }
            else
            {
                p_rxq->m_ovf = true;
            }
            break;
        }
        case NRF_DRV_UART_EVT_ERROR:
        {
            (void)nrf_drv_uart_rx(&p_serial->instance, p_serial->p_ctx->p_config->p_buffers->p_rxb, p_serial->p_ctx->p_config->p_buffers->rx_size);
            event_handler(p_serial, NRF_SERIAL_EVENT_DRV_ERR);
            break;
        }
        case NRF_DRV_UART_EVT_TX_DONE:
        {
            uint8_t tmp;
            serial_queues_ctx_t * p_txq = p_serial->p_ctx->p_config->p_queues->p_txq;
            nrf_serial_buffers_t const * p_buffs = p_serial->p_ctx->p_config->p_buffers;
            event_handler(p_serial, NRF_SERIAL_EVENT_TX_DONE);
            if(queue_get(p_txq,&tmp) == NRF_SUCCESS)
                (void)nrf_drv_uart_tx(&p_serial->instance, &tmp,1);
            if(queue_length(p_txq) == 0)
                tx_done = 1;
            break;
        }
        default:
            break;
    }
}

ret_code_t nrf_serial_init(nrf_serial_t const * p_serial,
                           nrf_drv_uart_config_t const * p_drv_uart_config,
                           nrf_serial_config_t const * p_config)
{
    ret_code_t ret;
    ASSERT(p_serial && p_drv_uart_config && p_config);

    if (p_serial->p_ctx->p_config)
    {
        /*Already initialized.*/
        return NRF_ERROR_MODULE_ALREADY_INITIALIZED;
    }

    if (p_config->mode != NRF_SERIAL_MODE_POLLING)
    {
        ASSERT(p_config->p_queues && p_config->p_buffers);
    }

    nrf_drv_uart_config_t drv_config;
    memcpy(&drv_config, p_drv_uart_config, sizeof(nrf_drv_uart_config_t));
    drv_config.p_context = (void *)p_serial;
#if defined(UARTE_PRESENT) && defined(UART_PRESENT)
    drv_config.use_easy_dma = (p_config->mode == NRF_SERIAL_MODE_DMA);
#endif

    p_serial->p_ctx->p_config = p_config;

    if (p_serial->p_ctx->p_config->p_queues)
    {
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_txq);
#ifdef RAK5010_EVB
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_rxq);
#endif
    }
    ret = nrf_drv_uart_init(&p_serial->instance,
                            &drv_config,
                            p_config->mode == NRF_SERIAL_MODE_POLLING ?
                            NULL : uart_event_handler);
    if (ret != NRF_SUCCESS)
    {
        return ret;
    }
    nrf_mtx_init(&p_serial->p_ctx->read_lock);
    nrf_mtx_init(&p_serial->p_ctx->write_lock);

    p_serial->p_ctx->flags = NRF_SERIAL_RX_ENABLED_FLAG |
                             NRF_SERIAL_TX_ENABLED_FLAG;

    if (drv_config.pseltxd == NRF_UART_PSEL_DISCONNECTED)
    {
        p_serial->p_ctx->flags &= ~NRF_SERIAL_TX_ENABLED_FLAG;
    }

    if (drv_config.pselrxd == NRF_UART_PSEL_DISCONNECTED)
    {
        p_serial->p_ctx->flags &= ~NRF_SERIAL_RX_ENABLED_FLAG;
        return NRF_SUCCESS;
    }

    if (p_serial->p_ctx->p_config->mode != NRF_SERIAL_MODE_DMA)
    {
        nrf_drv_uart_rx_enable(&p_serial->instance);
        if (p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_POLLING)
        {
            return NRF_SUCCESS;
        }
    }
    p_serial->p_ctx->p_config->p_queues->p_rxq->m_ovf= false;    
    return nrf_drv_uart_rx(&p_serial->instance,
                           p_serial->p_ctx->p_config->p_buffers->p_rxb,
                           p_serial->p_ctx->p_config->p_buffers->rx_size);
}

ret_code_t nrf_serial_uninit(nrf_serial_t const * p_serial)
{
    ASSERT(p_serial);

    if (!p_serial->p_ctx->p_config)
    {
        /*Already uninitialized.*/
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->write_lock))
    {
        return NRF_ERROR_BUSY;
    }
    if (!nrf_mtx_trylock(&p_serial->p_ctx->read_lock))
    {
        nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
        return NRF_ERROR_BUSY;
    }

    nrf_drv_uart_uninit(&p_serial->instance);
    if (p_serial->p_ctx->p_config->p_queues)
    {
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_txq);
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_rxq);
    }

    memset(p_serial->p_ctx, 0, sizeof(nrf_serial_ctx_t));
    return NRF_SUCCESS;
}

ret_code_t nrf_serial_single_wire_uninit(nrf_serial_t const * p_serial)
{
    ASSERT(p_serial);

    if (!p_serial->p_ctx->p_config)
    {
        /*Already uninitialized.*/
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->write_lock))
    {
        return NRF_ERROR_BUSY;
    }
    if (!nrf_mtx_trylock(&p_serial->p_ctx->read_lock))
    {
        nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
        return NRF_ERROR_BUSY;
    }

    nrf_drv_uart_uninit(&p_serial->instance);
    if (p_serial->p_ctx->p_config->p_queues)
    {
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_txq);
    }

    memset(p_serial->p_ctx, 0, sizeof(nrf_serial_ctx_t));
    return NRF_SUCCESS;
}

typedef struct {
    volatile bool expired;
} nrf_serial_timeout_ctx_t;

static void serial_timeout_handler(void * p_context)
{
    nrf_serial_timeout_ctx_t * p_tout_ctx = p_context;
    p_tout_ctx->expired = true;
}


static ret_code_t timeout_setup(nrf_serial_t const * p_serial,
                                app_timer_id_t const * p_timer_id,
                                uint32_t timeout_ms,
                                nrf_serial_timeout_ctx_t * p_tout_ctx)
{
    uint32_t ticks = APP_TIMER_TICKS(timeout_ms);

    if (ticks < APP_TIMER_MIN_TIMEOUT_TICKS)
    {
        p_tout_ctx->expired = true;
        return NRF_SUCCESS;
    }

    ret_code_t ret = app_timer_create(p_timer_id,
                                      APP_TIMER_MODE_SINGLE_SHOT,
                                      serial_timeout_handler);
    if (ret != NRF_SUCCESS)
    {
        return ret;
    }

    return app_timer_start(*p_timer_id, ticks, p_tout_ctx);
}

ret_code_t nrf_serial_write(nrf_serial_t const * p_serial,
                            void const * p_data,
                            size_t size,
                            size_t * p_written,
                            uint32_t timeout_ms)
{
    ret_code_t ret;

    ASSERT(p_serial);
    if (!p_serial->p_ctx->p_config)
    {
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!(p_serial->p_ctx->flags & NRF_SERIAL_TX_ENABLED_FLAG))
    {
        return NRF_ERROR_INVALID_STATE;
    }

    if (size == 0)
    {
        return NRF_SUCCESS;
    }

    /*if (!nrfx_is_in_ram(p_data) &&
         p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_DMA)
    {
        return NRF_ERROR_INVALID_ADDR;
    }*/

    if (!nrf_mtx_trylock(&p_serial->p_ctx->write_lock))
    {
        return NRF_ERROR_BUSY;
    }

    nrf_serial_timeout_ctx_t tout_ctx = {
            .expired = false,
    };

    if (timeout_ms != NRF_SERIAL_MAX_TIMEOUT)
    {
        ret = timeout_setup(p_serial,
                            p_serial->p_tx_timer,
                            timeout_ms,
                            &tout_ctx);
        if (ret != NRF_SUCCESS)
        {
            nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
            return ret;
        }
    }

    size_t left = size;
    tx_done = 0;
    size_t wcnt = 0;
    if (!nrfx_is_in_ram(p_data) &&
         p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_DMA)
    {
        uint8_t p_buff_ram[size];
        memcpy(p_buff_ram,p_data,size);    
        wcnt = serial_tx(p_serial, p_buff_ram, left);
    }
    else
    {
        uint8_t  * p_buff = p_data;
        wcnt = serial_tx(p_serial, p_buff, left);
    }
    do
    {
        if (tx_done == 1)
        {
            break;
        }
        sleep_handler(p_serial);
    } while (!tout_ctx.expired);

    if (p_written)
    {
        *p_written = size - left;
    }

    if (!tout_ctx.expired && (timeout_ms != NRF_SERIAL_MAX_TIMEOUT))
    {
        (void)app_timer_stop(*p_serial->p_tx_timer);
    }

    nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
    if (left && tout_ctx.expired)
    {
        return NRF_ERROR_TIMEOUT;
    }

    return NRF_SUCCESS;
}

ret_code_t nrf_serial_read(nrf_serial_t const * p_serial,
                           void * p_data,
                           size_t size,
                           size_t * p_read,
                           uint32_t timeout_ms)
{
    ret_code_t ret;

    ASSERT(p_serial);
    if (!p_serial->p_ctx->p_config)
    {
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!(p_serial->p_ctx->flags & NRF_SERIAL_RX_ENABLED_FLAG))
    {
        return NRF_ERROR_INVALID_STATE;
    }

    if (size == 0)
    {
        return NRF_SUCCESS;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->read_lock))
    {
        return NRF_ERROR_BUSY;
    }

    nrf_serial_timeout_ctx_t tout_ctx = {
            .expired = false,
    };

    if (timeout_ms != NRF_SERIAL_MAX_TIMEOUT)
    {
        ret = timeout_setup(p_serial,
                            p_serial->p_rx_timer,
                            timeout_ms,
                            &tout_ctx);

        if (ret != NRF_SUCCESS)
        {
            nrf_mtx_unlock(&p_serial->p_ctx->read_lock);
            return ret;
        }
    }

    size_t left = size;
    uint8_t * p_buff = p_data;
    do
    {
        size_t rcnt = serial_rx(p_serial, p_buff, left);
        left -= rcnt;
        p_buff += rcnt;
        if (!left)
        {
            break;
        }

        if (tout_ctx.expired)
        {
            if (p_serial->p_ctx->p_config->mode != NRF_SERIAL_MODE_POLLING)
            {
                nrf_drv_uart_rx_abort(&p_serial->instance);
            }
            break;
        }

        sleep_handler(p_serial);
    } while (1);

    if (p_read)
    {
        *p_read = size - left;
    }

    if (!tout_ctx.expired && (timeout_ms != NRF_SERIAL_MAX_TIMEOUT))
    {
        (void)app_timer_stop(*p_serial->p_rx_timer);
    }

    nrf_mtx_unlock(&p_serial->p_ctx->read_lock);
    if (left && tout_ctx.expired)
    {
        return NRF_ERROR_TIMEOUT;
    }
    bool rx_ovf = p_serial->p_ctx->p_config->p_queues->p_rxq->m_ovf;
    if (rx_ovf)
    {
        p_serial->p_ctx->p_config->p_queues->p_rxq->m_ovf = false;
        uint32_t uart_err_code = nrf_drv_uart_rx(&p_serial->instance, p_serial->p_ctx->p_config->p_buffers->p_rxb, p_serial->p_ctx->p_config->p_buffers->rx_size);

        // RX resume should never fail.
        APP_ERROR_CHECK(uart_err_code);
    }
    return NRF_SUCCESS;
}

ret_code_t nrf_serial_flush(nrf_serial_t const * p_serial, uint32_t timeout_ms)
{

    ret_code_t ret;

    ASSERT(p_serial);
    if (!p_serial->p_ctx->p_config)
    {
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!(p_serial->p_ctx->flags & NRF_SERIAL_TX_ENABLED_FLAG))
    {
        return NRF_ERROR_INVALID_STATE;
    }

    if (p_serial->p_ctx->p_config->mode == NRF_SERIAL_MODE_POLLING)
    {
        return NRF_SUCCESS;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->write_lock))
    {
        return NRF_ERROR_BUSY;
    }

    nrf_serial_timeout_ctx_t tout_ctx = {
            .expired = false,
    };

    if (timeout_ms != NRF_SERIAL_MAX_TIMEOUT)
    {
        ret = timeout_setup(p_serial,
                            p_serial->p_tx_timer,
                            timeout_ms,
                            &tout_ctx);
        if (ret != NRF_SUCCESS)
        {
            nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
            return ret;
        }
    }

    bool empty;
    do
    {
        //empty = nrf_queue_is_empty(p_serial->p_ctx->p_config->p_queues->p_txq) && !nrf_drv_uart_tx_in_progress(&p_serial->instance);
        empty = (queue_length(p_serial->p_ctx->p_config->p_queues->p_txq) == 0 ) && !nrf_drv_uart_tx_in_progress(&p_serial->instance);
        if (empty)
        {
            break;
        }

        sleep_handler(p_serial);
    } while (!tout_ctx.expired);

    if (!tout_ctx.expired && (timeout_ms != NRF_SERIAL_MAX_TIMEOUT))
    {
        (void)app_timer_stop(*p_serial->p_tx_timer);
    }

    nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
    if (!empty && tout_ctx.expired)
    {
        return NRF_ERROR_TIMEOUT;
    }

    return NRF_SUCCESS;
}

ret_code_t nrf_serial_tx_abort(nrf_serial_t const * p_serial)
{
    ASSERT(p_serial);
    if (!p_serial->p_ctx->p_config)
    {
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!(p_serial->p_ctx->flags & NRF_SERIAL_TX_ENABLED_FLAG))
    {
        return NRF_ERROR_INVALID_STATE;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->write_lock))
    {
        return NRF_ERROR_BUSY;
    }

    nrf_drv_uart_tx_abort(&p_serial->instance);
    if (p_serial->p_ctx->p_config->p_queues->p_txq)
    {
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_txq);
        //nrf_queue_reset(p_serial->p_ctx->p_config->p_queues->p_txq);
    }

    nrf_mtx_unlock(&p_serial->p_ctx->write_lock);
    return NRF_SUCCESS;
}

ret_code_t nrf_serial_rx_drain(nrf_serial_t const * p_serial)
{
    ASSERT(p_serial);
    if (!p_serial->p_ctx->p_config)
    {
        return NRF_ERROR_MODULE_NOT_INITIALIZED;
    }

    if (!(p_serial->p_ctx->flags & NRF_SERIAL_RX_ENABLED_FLAG))
    {
        return NRF_ERROR_INVALID_STATE;
    }

    if (!nrf_mtx_trylock(&p_serial->p_ctx->read_lock))
    {
        return NRF_ERROR_BUSY;
    }

    uint8_t c;
    /*Drain HW FIFO*/
    while (serial_rx(p_serial, &c, sizeof(c)))
    {

    }

    /*Drain SW FIFO*/
    if (p_serial->p_ctx->p_config->p_queues->p_rxq)
    {
        queue_flush(p_serial->p_ctx->p_config->p_queues->p_rxq);
    }
    nrf_mtx_unlock(&p_serial->p_ctx->read_lock);
    return NRF_SUCCESS;
}
#else
ret_code_t nrf_serial_init(nrf_serial_t const * p_serial,
                           nrf_drv_uart_config_t const * p_drv_uart_config,
                           nrf_serial_config_t const * p_config)
{
    return NRF_ERROR_NOT_SUPPORTED;
}

ret_code_t nrf_serial_uninit(nrf_serial_t const * p_serial)
{
    return NRF_ERROR_NOT_SUPPORTED;
}
ret_code_t nrf_serial_write(nrf_serial_t const * p_serial,
                            void const * p_data,
                            size_t size,
                            size_t * p_written,
                            uint32_t timeout_ms)
{
    return NRF_ERROR_NOT_SUPPORTED;
}
ret_code_t nrf_serial_read(nrf_serial_t const * p_serial,
                           void * p_data,
                           size_t size,
                           size_t * p_read,
                           uint32_t timeout_ms)
{
    return NRF_ERROR_NOT_SUPPORTED;
}
ret_code_t nrf_serial_flush(nrf_serial_t const * p_serial, uint32_t timeout_ms)
{
    return NRF_ERROR_NOT_SUPPORTED;
}
ret_code_t nrf_serial_tx_abort(nrf_serial_t const * p_serial)
{
    return NRF_ERROR_NOT_SUPPORTED;
}
ret_code_t nrf_serial_rx_drain(nrf_serial_t const * p_serial)
{
    return NRF_ERROR_NOT_SUPPORTED;
}


#endif // UART_PRESENT
#endif //NRF_MODULE_ENABLED(NRF_SERIAL)


