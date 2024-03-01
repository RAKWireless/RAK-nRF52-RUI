#include <stdarg.h>
#include "uhal_uart.h"

extern const char *sw_version;
extern const char *model_id;

//extern rui_cfg_t g_rui_cfg_t;
extern uint8_t user_uart_transparent_cnt;
extern int sensor_init_flag;

uint8_t uart_err_flag = 0;

static void (*ONEWIRE_HANDLER) (SERIAL_PORT, SERIAL_UART_EVT);

//static void serial_event_handler(struct nrf_serial_s const * p_serial,nrf_serial_event_t event);

static nrf_drv_uart_config_t m_uart0_drv_config = {
        .pselrxd = UART0_RXD_PIN,
        .pseltxd = UART0_TXD_PIN,
        .pselrts = 0,
        .pselcts = 0,
        .hwfc = NRF_UART_HWFC_DISABLED,
        .parity = NRF_UART_PARITY_EXCLUDED,
        .baudrate = NRF_UART_BAUDRATE_115200,
        .interrupt_priority = UART_DEFAULT_CONFIG_IRQ_PRIORITY,
};

static nrf_drv_uart_config_t m_uart1_drv_config = {
        .pselrxd = UART1_RXD_PIN,
        .pseltxd = UART1_TXD_PIN,
        .pselrts = 0,
        .pselcts = 0,
        .hwfc = NRF_UART_HWFC_DISABLED,
        .parity = NRF_UART_PARITY_EXCLUDED,
        .baudrate = NRF_UART_BAUDRATE_115200,
        .interrupt_priority = UART_DEFAULT_CONFIG_IRQ_PRIORITY,
};

NRF_SERIAL_QUEUES_DEF(serial0_queues, UHAL_UART_FIFO_TX_SIZE, UHAL_UART_FIFO_RX_SIZE);
NRF_SERIAL_QUEUES_DEF(serial1_queues, UHAL_UART_FIFO_TX_SIZE, UHAL_UART_FIFO_RX_SIZE);

NRF_SERIAL_BUFFERS_DEF(serial0_buffs, UHAL_UART_BUFF_TX_SIZE, UHAL_UART_BUFF_RX_SIZE);
NRF_SERIAL_BUFFERS_DEF(serial1_buffs, UHAL_UART_BUFF_TX_SIZE, UHAL_UART_BUFF_RX_SIZE);

NRF_SERIAL_CONFIG_DEF(serial0_config, NRF_SERIAL_MODE_DMA,
                      &serial0_queues, &serial0_buffs,
		      NULL,
		      NULL);
NRF_SERIAL_CONFIG_DEF(serial1_config, NRF_SERIAL_MODE_DMA,
                      &serial1_queues, &serial1_buffs,
		      NULL,
		      NULL);

NRF_SERIAL_UART_DEF(serial_uart0, 0);
NRF_SERIAL_UART_DEF(serial_uart1, 1);

typedef struct uhal_uart_status {
    bool active;
    uint32_t baudrate;
} uhal_uart_status_t;

static uhal_uart_status_t uart_status[UHAL_UART_MAX];
static SERIAL_WIRE_MODE_E uart_wire_mode[UHAL_UART_MAX];

typedef enum _SINGLE_WIRE_MODE_E {
    SINGLE_WIRE_MODE_RX = 0,
    SINGLE_WIRE_MODE_TX = 1,
} SINGLE_WIRE_MODE_E;

static SINGLE_WIRE_MODE_E single_wire_mode[UHAL_UART_MAX];


static nrf_uart_baudrate_t get_nrf_uart_baudrate(uint32_t baudrate)
{
    if (baudrate > 0 && baudrate <= 1800/* (1200+2400)/2 */) {
        return NRF_UART_BAUDRATE_1200;
    } else if (baudrate > 1800/* (1200+2400)/2 */ && baudrate <= 3600/* (2400+4800)/2 */) {
        return NRF_UART_BAUDRATE_2400;
    } else if (baudrate > 3600/* (2400+4800)/2 */ && baudrate <= 7200/* (4800+9600)/2 */) {
        return NRF_UART_BAUDRATE_4800;
    } else if (baudrate > 7200/* (4800+9600)/2 */ && baudrate <= 12000/* (9600+14400)/2 */) {
        return NRF_UART_BAUDRATE_9600;
    } else if (baudrate > 12000/* (9600+14400)/2 */ && baudrate <= 16800/* (14400+19200)/2 */) {
        return NRF_UART_BAUDRATE_14400;
    } else if (baudrate > 16800/* (14400+19200)/2 */ && baudrate <= 24000/* (19200+28800)/2 */) {
        return NRF_UART_BAUDRATE_19200;
    } else if (baudrate > 24000/* (19200+28800)/2 */ && baudrate <= 30025/* (28800+31250)/2 */) {
        return NRF_UART_BAUDRATE_28800;
    } else if (baudrate > 30025/* (28800+31250)/2 */ && baudrate <= 34825/* (31250+38400)/2 */) {
        return NRF_UART_BAUDRATE_31250;
    } else if (baudrate > 34825/* (31250+38400)/2 */ && baudrate <= 47200/* (38400+56000)/2 */) {
        return NRF_UART_BAUDRATE_38400;
    } else if (baudrate > 47200/* (38400+56000)/2 */ && baudrate <= 56800/* (56000+57600)/2 */) {
        return NRF_UART_BAUDRATE_56000;
    } else if (baudrate > 56800/* (56000+57600)/2 */ && baudrate <= 67200/* (57600+76800)/2 */) {
        return NRF_UART_BAUDRATE_57600;
    } else if (baudrate > 67200/* (57600+76800)/2 */ && baudrate <= 96000/* (76800+115200)/2 */) {
        return NRF_UART_BAUDRATE_76800;
    } else if (baudrate > 96000/* (76800+115200)/2 */ && baudrate <= 172800/* (115200+230400)/2 */) {
        return NRF_UART_BAUDRATE_115200;
    } else if (baudrate > 172800/* (115200+230400)/2 */ && baudrate <= 240200/* (230400+250000)/2 */) {
        return NRF_UART_BAUDRATE_230400;
    } else if (baudrate > 240200/* (230400+250000)/2 */ && baudrate <= 355400/* (250000+460800)/2 */) {
        return NRF_UART_BAUDRATE_250000;
    } else if (baudrate > 355400/* (250000+460800)/2 */ && baudrate <= 691200/* (460800+921600)/2 */) {
        return NRF_UART_BAUDRATE_460800;
    } else if (baudrate > 691200/* (460800+921600)/2 */ && baudrate <= 960800/* (921600+1000000)/2 */) {
        return NRF_UART_BAUDRATE_921600;
    } else if (baudrate > 960800/* (921600+1000000)/2 */) {
        return NRF_UART_BAUDRATE_1000000;
    }
}

static void uart_init(SERIAL_PORT port, uint32_t baudrate, SERIAL_WIRE_MODE_E WireMode)
{
    ret_code_t ret;

    if (port == SERIAL_UART0) {
        m_uart0_drv_config.baudrate = get_nrf_uart_baudrate(baudrate);

        uart_wire_mode[SERIAL_UART0] = WireMode;
        switch (WireMode) {
            case SERIAL_ONE_WIRE_TX_PIN_MODE:
            {
                m_uart0_drv_config.pselrxd = UART0_TXD_PIN;
                m_uart0_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

                single_wire_mode[port] = SINGLE_WIRE_MODE_RX;
                break;
            }
            case SERIAL_ONE_WIRE_RX_PIN_MODE:
            {
                m_uart0_drv_config.pselrxd = UART0_RXD_PIN;
                m_uart0_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

                single_wire_mode[port] = SINGLE_WIRE_MODE_RX;
                break;
            }
            case SERIAL_TWO_WIRE_NORMAL_MODE:
            default:
            {
                m_uart0_drv_config.pselrxd = UART0_RXD_PIN;
                m_uart0_drv_config.pseltxd = UART0_TXD_PIN;
                break;
            }
        }

        ret = nrf_serial_init(&serial_uart0, &m_uart0_drv_config, &serial0_config);
        //APP_ERROR_CHECK(ret);

    } else if (port == SERIAL_UART1) {
        m_uart1_drv_config.baudrate = get_nrf_uart_baudrate(baudrate);

        uart_wire_mode[SERIAL_UART1] = WireMode;
        switch (WireMode) {
            case SERIAL_ONE_WIRE_TX_PIN_MODE:
            {
                m_uart1_drv_config.pselrxd = UART1_TXD_PIN;
                m_uart1_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

                single_wire_mode[port] = SINGLE_WIRE_MODE_RX;
                break;
            }
            case SERIAL_ONE_WIRE_RX_PIN_MODE:
            {
                m_uart1_drv_config.pselrxd = UART1_RXD_PIN;
                m_uart1_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

                single_wire_mode[port] = SINGLE_WIRE_MODE_RX;
                break;
            }
            case SERIAL_TWO_WIRE_NORMAL_MODE:
            default:
            {
                m_uart1_drv_config.pselrxd = UART1_RXD_PIN;
                m_uart1_drv_config.pseltxd = UART1_TXD_PIN;
                break;
            }
        }

        ret = nrf_serial_init(&serial_uart1, &m_uart1_drv_config, &serial1_config);
        //APP_ERROR_CHECK(ret);

    }
}

static void uart_deinit(SERIAL_PORT port)
{
    ret_code_t ret;

    if (port == SERIAL_UART0) {
        ret = nrf_serial_uninit(&serial_uart0);
        if ((ret != NRF_SUCCESS) &&
            (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
            (ret != NRF_ERROR_BUSY))
        {
            APP_ERROR_CHECK(ret);
        }
    } else if (port == SERIAL_UART1) {
        ret = nrf_serial_uninit(&serial_uart1);
        if ((ret != NRF_SUCCESS) &&
            (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
            (ret != NRF_ERROR_BUSY))
        {
            APP_ERROR_CHECK(ret);
        }
    }

    //uart_status[port].active = false;
}

static void uhal_single_wire_tx_mode(SERIAL_PORT port)
{
    if (uart_wire_mode[port] == SERIAL_ONE_WIRE_TX_PIN_MODE) {
        if (port == SERIAL_UART0) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart0);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart0_drv_config.pselrxd = NRF_UART_PSEL_DISCONNECTED,
            m_uart0_drv_config.pseltxd = UART0_TXD_PIN,

            ret = nrf_serial_init(&serial_uart0, &m_uart0_drv_config, &serial0_config);
            APP_ERROR_CHECK(ret);
        } else  if (port == SERIAL_UART1) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart1);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart1_drv_config.pselrxd = NRF_UART_PSEL_DISCONNECTED,
            m_uart1_drv_config.pseltxd = UART1_TXD_PIN,

            ret = nrf_serial_init(&serial_uart1, &m_uart1_drv_config, &serial1_config);
            APP_ERROR_CHECK(ret);
        }
    } else if (uart_wire_mode[port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
        if (port == SERIAL_UART0) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart0);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart0_drv_config.pselrxd = NRF_UART_PSEL_DISCONNECTED;
            m_uart0_drv_config.pseltxd = UART0_RXD_PIN;

            ret = nrf_serial_init(&serial_uart0, &m_uart0_drv_config, &serial0_config);
            APP_ERROR_CHECK(ret);
        } else  if (port == SERIAL_UART1) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart1);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart1_drv_config.pselrxd = NRF_UART_PSEL_DISCONNECTED;
            m_uart1_drv_config.pseltxd = UART1_RXD_PIN;
            ret = nrf_serial_init(&serial_uart1, &m_uart1_drv_config, &serial1_config);
            APP_ERROR_CHECK(ret);
        }
    }

    single_wire_mode[port] = SINGLE_WIRE_MODE_TX;
}

static void uhal_single_wire_rx_mode(SERIAL_PORT port)
{
    if (uart_wire_mode[port] == SERIAL_ONE_WIRE_TX_PIN_MODE) {
        if (port == SERIAL_UART0) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart0);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart0_drv_config.pselrxd = UART0_TXD_PIN,
            m_uart0_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED,

            ret = nrf_serial_init(&serial_uart0, &m_uart0_drv_config, &serial0_config);
            APP_ERROR_CHECK(ret);
        } else  if (port == SERIAL_UART1) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart1);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart1_drv_config.pselrxd = UART1_TXD_PIN,
            m_uart1_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED,

            ret = nrf_serial_init(&serial_uart1, &m_uart1_drv_config, &serial1_config);
            APP_ERROR_CHECK(ret);
        }
    } else if (uart_wire_mode[port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
        if (port == SERIAL_UART0) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart0);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart0_drv_config.pselrxd = UART0_RXD_PIN;
            m_uart0_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

            ret = nrf_serial_init(&serial_uart0, &m_uart0_drv_config, &serial0_config);
            APP_ERROR_CHECK(ret);
        } else  if (port == SERIAL_UART1) {
            ret_code_t ret = nrf_serial_single_wire_uninit(&serial_uart1);
            if ((ret != NRF_SUCCESS) &&
                (ret != NRF_ERROR_MODULE_NOT_INITIALIZED) &&
                (ret != NRF_ERROR_BUSY))
            {
                APP_ERROR_CHECK(ret);
            }
            m_uart1_drv_config.pselrxd = UART1_RXD_PIN;
            m_uart1_drv_config.pseltxd = NRF_UART_PSEL_DISCONNECTED;

            ret = nrf_serial_init(&serial_uart1, &m_uart1_drv_config, &serial1_config);
            APP_ERROR_CHECK(ret);
        }
    }

    single_wire_mode[port] = SINGLE_WIRE_MODE_RX;
}

void uhal_uart_register_onewire_handler (SERIAL_UART_HANDLER handler)
{
    ONEWIRE_HANDLER = handler;
    serial1_config.ev_handler = ONEWIRE_HANDLER;
}

void uhal_uart_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode)
{
    uart_init(Port, BaudRate, WireMode);

    uart_status[Port].active = true;
    uart_status[Port].baudrate = BaudRate;
    return;
}

void uhal_uart_deinit (SERIAL_PORT Port)
{
    uart_deinit(Port);

    uart_status[Port].active = false;
    return;
}

int32_t uhal_uart_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout)
{
    size_t Count = 0;
    uint32_t err_code = NRF_ERROR_INTERNAL;

    if (Buffer == NULL) {
        return -UDRV_WRONG_ARG;
    }

    if (uart_wire_mode[Port] == SERIAL_ONE_WIRE_TX_PIN_MODE || uart_wire_mode[Port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
        if (single_wire_mode[Port] != SINGLE_WIRE_MODE_TX) {
            uhal_single_wire_tx_mode(Port);
        }
    }

    if (Port == SERIAL_UART0) {
        err_code = nrf_serial_write(&serial_uart0, Buffer, NumberOfBytes, &Count, Timeout);
        if (uart_wire_mode[Port] == SERIAL_ONE_WIRE_TX_PIN_MODE || uart_wire_mode[Port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
            nrf_serial_flush(&serial_uart0, Timeout);
        }
    } else if (Port == SERIAL_UART1) {
        err_code = nrf_serial_write(&serial_uart1, Buffer, NumberOfBytes, &Count, Timeout);
        if (uart_wire_mode[Port] == SERIAL_ONE_WIRE_TX_PIN_MODE || uart_wire_mode[Port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
            nrf_serial_flush(&serial_uart1, Timeout);
        }
    }

    if (uart_wire_mode[Port] == SERIAL_ONE_WIRE_TX_PIN_MODE || uart_wire_mode[Port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
        if (single_wire_mode[Port] != SINGLE_WIRE_MODE_RX) {
            uhal_single_wire_rx_mode(Port);
        }
    }

    switch (err_code) {
        case NRF_SUCCESS:
            return Count;
        case NRF_ERROR_BUSY:
            return -UDRV_BUSY;
        case NRF_ERROR_INVALID_STATE:
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_uart_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout)
{
    size_t Count = 0;

    if (Buffer == NULL) {
        return -UDRV_WRONG_ARG;
    }

    if (Port == SERIAL_UART0) {
        nrf_serial_read(&serial_uart0, Buffer, NumberOfBytes, &Count, Timeout);
    } else if (Port == SERIAL_UART1) {
        if (uart_wire_mode[Port] == SERIAL_ONE_WIRE_TX_PIN_MODE || uart_wire_mode[Port] == SERIAL_ONE_WIRE_RX_PIN_MODE) {
            if (single_wire_mode[Port] != SINGLE_WIRE_MODE_RX) {
                uhal_single_wire_rx_mode(Port);
            }
        }
        nrf_serial_read(&serial_uart1, Buffer, NumberOfBytes, &Count, Timeout);
    }

    return Count;
}

int32_t uhal_uart_peek (SERIAL_PORT Port)
{
    uint8_t ch;

    if (Port == SERIAL_UART0) {
        if(queue_peek(serial_uart0.p_ctx->p_config->p_queues->p_rxq,&ch) == NRF_SUCCESS) {
            return (int32_t)ch;
        }
    } else if (Port == SERIAL_UART1) {
        if(queue_peek(serial_uart1.p_ctx->p_config->p_queues->p_rxq,&ch ) == NRF_SUCCESS) {
            return (int32_t)ch;
        }
    }
    return -UDRV_INTERNAL_ERR;
}

void uhal_uart_flush (SERIAL_PORT Port, uint32_t Timeout)
{
    if (Port == SERIAL_UART0) {
        nrf_serial_flush(&serial_uart0, Timeout);
        //queue_flush(serial_uart0.p_ctx->p_config->p_queues->p_rxq);
    } else if (Port == SERIAL_UART1) {
        nrf_serial_flush(&serial_uart1, Timeout);
        //queue_flush(serial_uart1.p_ctx->p_config->p_queues->p_rxq);
    }
}

int32_t uhal_uart_read_available(SERIAL_PORT Port) {
    if (Port == SERIAL_UART0) {
        return queue_length(serial_uart0.p_ctx->p_config->p_queues->p_rxq);
    } else if (Port == SERIAL_UART1) {
        return queue_length(serial_uart1.p_ctx->p_config->p_queues->p_rxq);
    }
    return -UDRV_INTERNAL_ERR;
}

void uhal_uart_suspend(void) {
    for (int i = SERIAL_UART0 ; i < UHAL_UART_MAX ; i++) {
        if (uart_status[i].active == true) {
            uhal_uart_flush(i, 100);
            uart_deinit(i);
	}
    }

    //[89] GPIOTE: Static 400 µA current while using GPIOTE:
    //https://infocenter.nordicsemi.com/topic/errata_nRF52832_Rev2/ERR/nRF52832/Rev2/latest/anomaly_832_89.html?cp=4_2_1_0_1_26
    {
        *(volatile uint32_t *)0x40028FFC = 0;
        *(volatile uint32_t *)0x40028FFC;
        *(volatile uint32_t *)0x40028FFC = 1;

        *(volatile uint32_t *)0x40002FFC = 0;
        *(volatile uint32_t *)0x40002FFC;
        *(volatile uint32_t *)0x40002FFC = 1;
    }
}

void uhal_uart_resume(void) {
    for (int i = SERIAL_UART0 ; i < UHAL_UART_MAX ; i++) {
        if (uart_status[i].active == true) {
            uart_init(i, uart_status[i].baudrate, uart_wire_mode[i]);
	}
    }
}


