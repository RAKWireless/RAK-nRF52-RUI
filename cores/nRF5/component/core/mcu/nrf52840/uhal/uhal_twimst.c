#include "uhal_twimst.h"

/* TWI instance. */
#if TWI0_ENABLED
static const nrf_drv_twi_t m_twi_0 = NRF_DRV_TWI_INSTANCE(0);

static nrf_drv_twi_config_t twi_config_0 =
    {
        .scl                = I2C0_SCL,
        .sda                = I2C0_SDA,
        .interrupt_priority = APP_IRQ_PRIORITY_HIGHEST,
        .frequency          = NRF_TWI_FREQ_400K,
    };

volatile static bool twi0_xfer_done = true;
volatile nrf_drv_twi_evt_type_t twi0_xfer_status;
#endif
#if TWI1_ENABLED
static const nrf_drv_twi_t m_twi_1 = NRF_DRV_TWI_INSTANCE(1);

static nrf_drv_twi_config_t twi_config_1 =
    {
        .scl                = I2C1_SCL,
        .sda                = I2C1_SDA,
        .interrupt_priority = APP_IRQ_PRIORITY_HIGHEST,
        .frequency          = NRF_TWI_FREQ_400K,
    };

volatile static bool twi1_xfer_done = true;
volatile nrf_drv_twi_evt_type_t twi1_xfer_status;
#endif

typedef struct uhal_twimst_status {
    bool active;
} uhal_twimst_status_t;

static uhal_twimst_status_t twimst_status[UDRV_TWIMST_MAX];

#if TWI0_ENABLED
static void nrf_drv_twi0_event_handler(nrf_drv_twi_evt_t const * p_event, void * p_context)
{
    twi0_xfer_status = p_event->type;
    switch(p_event->type)
    {
        case NRF_DRV_TWI_EVT_DONE:
        case NRF_DRV_TWI_EVT_ADDRESS_NACK:
        case NRF_DRV_TWI_EVT_DATA_NACK:
            twi0_xfer_done = true;
            break;
        default:
            break;
    }
}
#endif

#if TWI1_ENABLED
static void nrf_drv_twi1_event_handler(nrf_drv_twi_evt_t const * p_event, void * p_context)
{
    twi1_xfer_status = p_event->type;
    switch(p_event->type)
    {
        case NRF_DRV_TWI_EVT_DONE:
        case NRF_DRV_TWI_EVT_ADDRESS_NACK:
        case NRF_DRV_TWI_EVT_DATA_NACK:
            twi1_xfer_done = true;
            break;
        default:
            break;
    }
}
#endif

static void twimst_init(udrv_twimst_port port) {
    if (port == UDRV_TWIMST_0) {
#if TWI0_ENABLED
        nrf_drv_twi_init(&m_twi_0, &twi_config_0, nrf_drv_twi0_event_handler, NULL);
        nrf_drv_twi_enable(&m_twi_0);
#endif
    } else if (port == UDRV_TWIMST_1) {
#if TWI1_ENABLED
        nrf_drv_twi_init(&m_twi_1, &twi_config_1, nrf_drv_twi1_event_handler, NULL);
        nrf_drv_twi_enable(&m_twi_1);
#endif
    }
}

void uhal_twimst_init(udrv_twimst_port port) {
    twimst_init(port);

    twimst_status[port].active = true;
}

static void twimst_deinit(udrv_twimst_port port) {
    if (port == UDRV_TWIMST_0) {
#if TWI0_ENABLED
	nrf_drv_twi_disable(&m_twi_0);
        nrf_drv_twi_uninit(&m_twi_0);
#endif
    } else if (port == UDRV_TWIMST_1) {
#if TWI1_ENABLED
        nrf_drv_twi_uninit(&m_twi_1);
        nrf_drv_twi_uninit(&m_twi_1);
#endif
    }
}

void uhal_twimst_deinit(udrv_twimst_port port) {
    twimst_deinit(port);

    twimst_status[port].active = false;
}

void uhal_twimst_setup_freq(udrv_twimst_port port, uint32_t clk_Hz) {
    NRF_TWIM_Type *_p_twim;

    if (port == UDRV_TWIMST_0) {
#if TWI0_ENABLED
        _p_twim = NRF_TWIM0;
#else
        return;
#endif
    } else if (port == UDRV_TWIMST_1) {
#if TWI1_ENABLED
        _p_twim = NRF_TWIM1;
#else
        return;
#endif
    } else {
        return;
    }

    _p_twim->ENABLE = (TWIM_ENABLE_ENABLE_Disabled << TWIM_ENABLE_ENABLE_Pos);

    uint32_t frequency;

    if (clk_Hz <= 100000)
    {
      frequency = TWIM_FREQUENCY_FREQUENCY_K100;
    }
    else if (clk_Hz <= 250000)
    {
      frequency = TWIM_FREQUENCY_FREQUENCY_K250;
    }
    else
    {
      frequency = TWIM_FREQUENCY_FREQUENCY_K400;
    }

    _p_twim->FREQUENCY = frequency;

    if (twimst_status[port].active == true) {
        _p_twim->ENABLE = (TWIM_ENABLE_ENABLE_Enabled << TWIM_ENABLE_ENABLE_Pos);
    }
}	

int32_t uhal_twimst_write(udrv_twimst_port port, uint8_t twi_addr, uint8_t *data, uint16_t len, bool send_stop)
{
    NRF_TWIM_Type *_p_twim;

    if (port == UDRV_TWIMST_0) {
#if TWI0_ENABLED
        _p_twim = NRF_TWIM0;
#else
        return -UDRV_INTERNAL_ERR;
#endif
    } else if (port == UDRV_TWIMST_1) {
#if TWI1_ENABLED
        _p_twim = NRF_TWIM1;
#else
        return -UDRV_INTERNAL_ERR;
#endif
    } else {
        return -UDRV_INTERNAL_ERR;
    }

    // Start I2C transmission
    _p_twim->ADDRESS = twi_addr;//Address used in the TWI transfer

    _p_twim->TASKS_RESUME = 0x1UL;//Resume TWI transaction

    _p_twim->TXD.PTR = (uint32_t)data;//Data pointer
    _p_twim->TXD.MAXCNT = len;//Maximum number of bytes in transmit buffer

    _p_twim->TASKS_STARTTX = 0x1UL;//Start TWI transmit sequence

    while(!_p_twim->EVENTS_TXSTARTED && !_p_twim->EVENTS_ERROR);//Wait for transmit sequence started event or TWI error event are generated
    _p_twim->EVENTS_TXSTARTED = 0x0UL;//Clear transmit sequence started event

    if (len) {
        while(!_p_twim->EVENTS_LASTTX && !_p_twim->EVENTS_ERROR);//Wait for byte boundary (starting to transmit the last byte) event or TWI error event are generated
    }
    _p_twim->EVENTS_LASTTX = 0x0UL;//Clear byte boundary (starting to transmit the last byte) event

    if (send_stop || _p_twim->EVENTS_ERROR)
    {
        _p_twim->TASKS_STOP = 0x1UL;//Stop TWI transaction. Must be issued while the TWI master is not suspended.
        while(!_p_twim->EVENTS_STOPPED);//Wait for TWI stopped event is generated
        _p_twim->EVENTS_STOPPED = 0x0UL;//Clear TWI stopped event
    }
    else
    {
        _p_twim->TASKS_SUSPEND = 0x1UL;//Suspend TWI transaction
        while(!_p_twim->EVENTS_SUSPENDED);//Wait for SUSPEND task event is generated
        _p_twim->EVENTS_SUSPENDED = 0x0UL;//Clear SUSPEND task event
    }

    if (_p_twim->EVENTS_ERROR)//TWI error event are generated
    {
        _p_twim->EVENTS_ERROR = 0x0UL;//Clear TWI error event

        uint32_t error = _p_twim->ERRORSRC;

        _p_twim->ERRORSRC = error;

        if (error == TWIM_ERRORSRC_ANACK_Msk)
        {
            return -UDRV_NACK;
        }
        else if (error == TWIM_ERRORSRC_DNACK_Msk)
        {
            return -UDRV_NACK;
        }
        else
        {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return UDRV_RETURN_OK;
}

int32_t uhal_twimst_read(udrv_twimst_port port, uint8_t twi_addr, uint8_t * data, uint16_t len)
{
    uint32_t err_code = NRF_ERROR_INVALID_PARAM;

    if (port == UDRV_TWIMST_0) {
#if TWI0_ENABLED
        if (twi0_xfer_done == false) {
            return -UDRV_NACK;
        }

        twi0_xfer_done = false;
        err_code = nrf_drv_twi_rx(&m_twi_0, twi_addr, data, len);
        APP_ERROR_CHECK(err_code);
        while (twi0_xfer_done == false);

        switch (twi0_xfer_status) {
            case NRF_DRV_TWI_EVT_DONE:
                break;
	    default:
                return -UDRV_NACK;
	}
#endif
    } else if (port == UDRV_TWIMST_1) {
#if TWI1_ENABLED
        if (twi1_xfer_done == false) {
            return -UDRV_NACK;
        }

        twi1_xfer_done = false;
        err_code = nrf_drv_twi_rx(&m_twi_1, twi_addr, data, len);
        APP_ERROR_CHECK(err_code);
        while (twi1_xfer_done == false);

        switch (twi1_xfer_status) {
            case NRF_DRV_TWI_EVT_DONE:
                break;
	    default:
                return -UDRV_NACK;
	}
#endif
    }

    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        case NRF_ERROR_INVALID_PARAM:
            return -UDRV_WRONG_ARG;
        default:
            return -UDRV_NACK;
    }
}

void uhal_twimst_suspend(void)
{
    for (int i = UDRV_TWIMST_0 ; i < UDRV_TWIMST_MAX ; i++) {
        if (twimst_status[i].active == true) {
            twimst_deinit(i);
	}
    }
}

void uhal_twimst_resume(void)
{
    for (int i = UDRV_TWIMST_0 ; i < UDRV_TWIMST_MAX ; i++) {
        if (twimst_status[i].active == true) {
            twimst_init(i);
	}
    }
}
