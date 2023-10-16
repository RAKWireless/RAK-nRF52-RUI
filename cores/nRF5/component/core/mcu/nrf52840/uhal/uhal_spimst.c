#include "uhal_spimst.h"
#include "uhal_gpio.h"

#ifdef SUPPORT_SPI

#if SPI0_ENABLED
static nrfx_spi_config_t spi0_config = NRFX_SPI_DEFAULT_CONFIG;
static const nrfx_spi_t spi0 = NRFX_SPI_INSTANCE(0);
static volatile bool spi0_xfer_done;
#endif
#if SPI1_ENABLED
static nrfx_spi_config_t spi1_config = NRFX_SPI_DEFAULT_CONFIG;
static const nrfx_spi_t spi1 = NRFX_SPI_INSTANCE(1);
static volatile bool spi1_xfer_done;
#endif
#if SPI2_ENABLED
static nrfx_spi_config_t spi2_config = NRFX_SPI_DEFAULT_CONFIG;
static const nrfx_spi_t spi2 = NRFX_SPI_INSTANCE(2);
static volatile bool spi2_xfer_done;
#endif
#if SPI3_ENABLED
static nrfx_spim_config_t spi3_config = NRFX_SPIM_DEFAULT_CONFIG;
static const nrfx_spim_t spi3 = NRFX_SPIM_INSTANCE(3);
#endif

typedef struct uhal_spimst_status {
    bool active;
} uhal_spimst_status_t;

static uhal_spimst_status_t spimst_status[UDRV_SPIMST_MAX];

static void uhal_spimst_setup_pin(udrv_spimst_port port) {
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        spi0_config.ss_pin   = NRFX_SPI_PIN_NOT_USED;
        spi0_config.miso_pin = SPIM0_MISO;
        spi0_config.mosi_pin = SPIM0_MOSI;
        spi0_config.sck_pin  = SPIM0_SCK;
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        spi1_config.ss_pin   = NRFX_SPI_PIN_NOT_USED;
        spi1_config.miso_pin = SPIM1_MISO;
        spi1_config.mosi_pin = SPIM1_MOSI;
        spi1_config.sck_pin  = SPIM1_SCK;
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        spi2_config.ss_pin   = NRFX_SPI_PIN_NOT_USED;
        spi2_config.miso_pin = SPIM2_MISO;
        spi2_config.mosi_pin = SPIM2_MOSI;
        spi2_config.sck_pin  = SPIM2_SCK;
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        spi3_config.ss_pin   = NRFX_SPIM_PIN_NOT_USED;   
        spi3_config.miso_pin = SPIM3_MISO;
        spi3_config.mosi_pin = SPIM3_MOSI;
        spi3_config.sck_pin  = SPIM3_SCK;
    } else
#endif
    {
        //should not be here
    }
}

void uhal_spimst_setup_mode(udrv_spimst_port port, ENUM_SPI_MST_CPHA_T CPHA, ENUM_SPI_MST_CPOL_T CPOL) {

#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_0) {
            spi0_config.mode = NRF_SPI_MODE_0;
        } else if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_1) {
            spi0_config.mode = NRF_SPI_MODE_1;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_0) {
            spi0_config.mode = NRF_SPI_MODE_2;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_1) {
            spi0_config.mode = NRF_SPI_MODE_3;
        } else {
            spi0_config.mode = NRF_SPI_MODE_0;
        }
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_0) {
            spi1_config.mode = NRF_SPI_MODE_0;
        } else if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_1) {
            spi1_config.mode = NRF_SPI_MODE_1;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_0) {
            spi1_config.mode = NRF_SPI_MODE_2;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_1) {
            spi1_config.mode = NRF_SPI_MODE_3;
        } else {
            spi1_config.mode = NRF_SPI_MODE_0;
        }
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_0) {
            spi2_config.mode = NRF_SPI_MODE_0;
        } else if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_1) {
            spi2_config.mode = NRF_SPI_MODE_1;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_0) {
            spi2_config.mode = NRF_SPI_MODE_2;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_1) {
            spi2_config.mode = NRF_SPI_MODE_3;
        } else {
            spi2_config.mode = NRF_SPI_MODE_0;
        }
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_0) {
            spi3_config.mode = NRF_SPI_MODE_0;
        } else if (CPOL == SPI_MST_CPOL_0 && CPHA == SPI_MST_CPHA_1) {
            spi3_config.mode = NRF_SPI_MODE_1;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_0) {
            spi3_config.mode = NRF_SPI_MODE_2;
        } else if (CPOL == SPI_MST_CPOL_1 && CPHA == SPI_MST_CPHA_1) {
            spi3_config.mode = NRF_SPI_MODE_3;
        } else {
            spi3_config.mode = NRF_SPI_MODE_0;
        }
    } else
#endif
    {
        //should not be here
    }
}

void uhal_spimst_setup_freq(udrv_spimst_port port, uint32_t clk_Hz) {
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        if (clk_Hz <= 125000) {
            spi0_config.frequency = NRF_SPI_FREQ_125K;
        } else if (clk_Hz <= 250000) {
            spi0_config.frequency = NRF_SPI_FREQ_250K;
        } else if (clk_Hz <= 500000) {
            spi0_config.frequency = NRF_SPI_FREQ_500K;
        } else if (clk_Hz <= 1000000) {
            spi0_config.frequency = NRF_SPI_FREQ_1M;
        } else if (clk_Hz <= 2000000) {
            spi0_config.frequency = NRF_SPI_FREQ_2M;
        } else if (clk_Hz <= 4000000) {
            spi0_config.frequency = NRF_SPI_FREQ_4M;
        } else {
            spi0_config.frequency = NRF_SPI_FREQ_8M;
        }
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        if (clk_Hz <= 125000) {
            spi1_config.frequency = NRF_SPI_FREQ_125K;
        } else if (clk_Hz <= 250000) {
            spi1_config.frequency = NRF_SPI_FREQ_250K;
        } else if (clk_Hz <= 500000) {
            spi1_config.frequency = NRF_SPI_FREQ_500K;
        } else if (clk_Hz <= 1000000) {
            spi1_config.frequency = NRF_SPI_FREQ_1M;
        } else if (clk_Hz <= 2000000) {
            spi1_config.frequency = NRF_SPI_FREQ_2M;
        } else if (clk_Hz <= 4000000) {
            spi1_config.frequency = NRF_SPI_FREQ_4M;
        } else {
            spi1_config.frequency = NRF_SPI_FREQ_8M;
        }
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        if (clk_Hz <= 125000) {
            spi2_config.frequency = NRF_SPI_FREQ_125K;
        } else if (clk_Hz <= 250000) {
            spi2_config.frequency = NRF_SPI_FREQ_250K;
        } else if (clk_Hz <= 500000) {
            spi2_config.frequency = NRF_SPI_FREQ_500K;
        } else if (clk_Hz <= 1000000) {
            spi2_config.frequency = NRF_SPI_FREQ_1M;
        } else if (clk_Hz <= 2000000) {
            spi2_config.frequency = NRF_SPI_FREQ_2M;
        } else if (clk_Hz <= 4000000) {
            spi2_config.frequency = NRF_SPI_FREQ_4M;
        } else {
            spi2_config.frequency = NRF_SPI_FREQ_8M;
        }
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        if (clk_Hz <= 125000) {
            spi3_config.frequency = NRF_SPIM_FREQ_125K;
        } else if (clk_Hz <= 250000) {
            spi3_config.frequency = NRF_SPIM_FREQ_250K;
        } else if (clk_Hz <= 500000) {
            spi3_config.frequency = NRF_SPIM_FREQ_500K;
        } else if (clk_Hz <= 1000000) {
            spi3_config.frequency = NRF_SPIM_FREQ_1M;
        } else if (clk_Hz <= 2000000) {
            spi3_config.frequency = NRF_SPIM_FREQ_2M;
        } else if (clk_Hz <= 4000000) {
            spi3_config.frequency = NRF_SPIM_FREQ_4M;
        } else if (clk_Hz <= 8000000){
            spi3_config.frequency = NRF_SPIM_FREQ_8M;
        } else if (clk_Hz <= 16000000){
            spi3_config.frequency = NRF_SPIM_FREQ_16M;
        } else if (clk_Hz <= 32000000){
            spi3_config.frequency = NRF_SPIM_FREQ_32M;
        } else {
            spi3_config.frequency = NRF_SPIM_FREQ_8M;
        }
    } else
#endif
    {
        //should not be here
    }
}

void uhal_spimst_setup_byte_order(udrv_spimst_port port, bool msb_first) {
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        if (msb_first) {
            spi0_config.bit_order = NRF_SPI_BIT_ORDER_MSB_FIRST;
        } else {
            spi0_config.bit_order = NRF_SPI_BIT_ORDER_LSB_FIRST;
        }
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        if (msb_first) {
            spi1_config.bit_order = NRF_SPI_BIT_ORDER_MSB_FIRST;
        } else {
            spi1_config.bit_order = NRF_SPI_BIT_ORDER_LSB_FIRST;
        }
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        if (msb_first) {
            spi2_config.bit_order = NRF_SPI_BIT_ORDER_MSB_FIRST;
        } else {
            spi2_config.bit_order = NRF_SPI_BIT_ORDER_LSB_FIRST;
        }
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        if (msb_first) {
            spi3_config.bit_order = NRF_SPIM_BIT_ORDER_MSB_FIRST;
        } else {
            spi3_config.bit_order = NRF_SPIM_BIT_ORDER_LSB_FIRST;
        }
    } else
#endif
    {
        //should not be here
    }
}

static void spimst_init(udrv_spimst_port port) {
    ret_code_t ret;

    uhal_spimst_setup_pin(port);
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        ret = nrfx_spi_init(&spi0, &spi0_config, spi0_event_handler, NULL);
        APP_ERROR_CHECK(ret);
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        ret = nrfx_spi_init(&spi1, &spi1_config, spi1_event_handler, NULL);
        APP_ERROR_CHECK(ret);
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        ret = nrfx_spi_init(&spi2, &spi2_config, spi2_event_handler, NULL);
        APP_ERROR_CHECK(ret);
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        ret = nrfx_spim_init(&spi3, &spi3_config, NULL, NULL);
        //APP_ERROR_CHECK(ret);
        nrf_gpio_cfg(SPIM3_NSS,
                 NRF_GPIO_PIN_DIR_OUTPUT,
                 NRF_GPIO_PIN_INPUT_DISCONNECT,
                 NRF_GPIO_PIN_NOPULL,
                 NRF_GPIO_PIN_H0H1,       // Require High Drive high/low level
                 NRF_GPIO_PIN_NOSENSE);
        nrf_gpio_cfg(SPIM3_MOSI,
               NRF_GPIO_PIN_DIR_OUTPUT,
               NRF_GPIO_PIN_INPUT_DISCONNECT,
               NRF_GPIO_PIN_NOPULL,
               NRF_GPIO_PIN_H0H1,
               NRF_GPIO_PIN_NOSENSE);
        nrf_gpio_cfg(SPIM3_SCK,
               NRF_GPIO_PIN_DIR_OUTPUT,
               NRF_GPIO_PIN_INPUT_DISCONNECT,
               NRF_GPIO_PIN_NOPULL,
               NRF_GPIO_PIN_H0H1,
               NRF_GPIO_PIN_NOSENSE);

    } else
#endif
    {
        //should not be here
    }
}

void uhal_spimst_init(udrv_spimst_port port) {
    if (port >= UDRV_SPIMST_MAX) {
        return;
    }
    if (spimst_status[port].active == true){
        return;
    }
    spimst_init(port);

    spimst_status[port].active = true;
}

static void spimst_deinit(udrv_spimst_port port) {
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        //nrf_drv_spi_abort(&spi0);
        nrfx_spi_uninit(&spi0);
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        //nrf_drv_spi_abort(&spi1);
        nrfx_spi_uninit(&spi1);
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        //nrf_drv_spi_abort(&spi2);
        nrfx_spi_uninit(&spi2);
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        //nrfx_spim_abort(&spi3);
        nrfx_spim_uninit(&spi3);
    } else
#endif
    {
        //should not be here
    }
}

void uhal_spimst_deinit(udrv_spimst_port port) {
    if (port >= UDRV_SPIMST_MAX) {
        return;
    }

    if (spimst_status[port].active == false){
        return;
    }
    spimst_deinit(port);

    spimst_status[port].active = false;
}

int8_t uhal_spimst_trx(udrv_spimst_port port, uint8_t *write_data, uint32_t write_length, uint8_t *read_data, uint32_t read_length, uint32_t csn) {
    if (port >= UDRV_SPIMST_MAX) 
        return;
    int8_t res;
    bool set_logic = false;
#if SPI0_ENABLED
    if (port == UDRV_SPIMST_0) {
        if(nrf_gpio_pin_dir_get(csn) != GPIO_DIR_OUT)
        {
            uhal_gpio_set_dir(csn, GPIO_DIR_OUT);
        }
        if (uhal_gpio_get_logic(csn) != GPIO_LOGIC_LOW)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_LOW);
            set_logic = true;
        }
        nrfx_spi_xfer_desc_t xfer_desc = NRFX_SPI_XFER_TRX(write_data, write_length, read_data, read_length);
        spi0_xfer_done = false;
        res = nrfx_spi_xfer(&spi0, &xfer_desc,0);
        while(!spi0_xfer_done)
        {
#ifndef RUI_BOOTLOADER
            uhal_mcu_sleep();
#endif
        }
        if (set_logic)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_HIGH);
        }
        return res;
    } else
#endif
#if SPI1_ENABLED
    if (port == UDRV_SPIMST_1) {
        if(nrf_gpio_pin_dir_get(csn) != GPIO_DIR_OUT)
        {
            uhal_gpio_set_dir(csn, GPIO_DIR_OUT);
        }
        if (uhal_gpio_get_logic(csn) != GPIO_LOGIC_LOW)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_LOW);
            set_logic = true;
        }
        nrfx_spi_xfer_desc_t xfer_desc = NRFX_SPI_XFER_TRX(write_data, write_length, read_data, read_length);
        spi1_xfer_done = false;
        res = nrfx_spi_xfer(&spi1, &xfer_desc,0);
        while(!spi1_xfer_done)
        {
#ifndef RUI_BOOTLOADER
            uhal_mcu_sleep();
#endif
        }
        if (set_logic)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_HIGH);
        }
        return res;
    } else
#endif
#if SPI2_ENABLED
    if (port == UDRV_SPIMST_2) {
        if(nrf_gpio_pin_dir_get(csn) != GPIO_DIR_OUT)
        {
            uhal_gpio_set_dir(csn, GPIO_DIR_OUT);
        }
        if (uhal_gpio_get_logic(csn) != GPIO_LOGIC_LOW)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_LOW);
            set_logic = true;
        }
        nrfx_spi_xfer_desc_t xfer_desc = NRFX_SPI_XFER_TRX(write_data, write_length, read_data, read_length);
        spi2_xfer_done = false;
        res = nrfx_spi_xfer(&spi2, &xfer_desc,0);
        while(!spi2_xfer_done)
        {
#ifndef RUI_BOOTLOADER
            uhal_mcu_sleep();
#endif
        }
        if (set_logic)
        {
            uhal_gpio_set_logic(csn, GPIO_LOGIC_HIGH);
        }
        return res;
    } else
#endif
#if SPI3_ENABLED
    if (port == UDRV_SPIMST_3) {
        nrfx_spim_xfer_desc_t xfer_desc = NRFX_SPIM_XFER_TRX(write_data, write_length, read_data, read_length);
        return nrfx_spim_xfer(&spi3, &xfer_desc,0);
    } else
#endif
    {
        //should not be here
        return NRF_ERROR_INVALID_PARAM;
    }
}

void uhal_spimst_suspend(void) {
    for (int i = UDRV_SPIMST_0 ; i < UDRV_SPIMST_MAX ; i++) {
        if (spimst_status[i].active == true) {
            spimst_deinit(i);
        }
    }

    //[89] GPIOTE: Static 400 µA current while using GPIOTE:
    //https://infocenter.nordicsemi.com/topic/errata_nRF52832_Rev2/ERR/nRF52832/Rev2/latest/anomaly_832_89.html?cp=4_2_1_0_1_26
    {
        *(volatile uint32_t *)0x40003FFC = 0;
        *(volatile uint32_t *)0x40003FFC;
        *(volatile uint32_t *)0x40003FFC = 1;

        *(volatile uint32_t *)0x40004FFC = 0;
        *(volatile uint32_t *)0x40004FFC;
        *(volatile uint32_t *)0x40004FFC = 1;

        *(volatile uint32_t *)0x40023FFC = 0;
        *(volatile uint32_t *)0x40023FFC;
        *(volatile uint32_t *)0x40023FFC = 1;
    }
}

void uhal_spimst_resume(void) {
    for (int i = UDRV_SPIMST_0 ; i < UDRV_SPIMST_MAX ; i++) {
        if (spimst_status[i].active == true) {
            spimst_init(i);
        }
    }
}

#if SPI0_ENABLED
void spi0_event_handler(nrf_drv_spi_evt_t const * p_event,
                       void *                    p_context)
{
    spi0_xfer_done = true;
}
#endif
#if SPI1_ENABLED
void spi1_event_handler(nrf_drv_spi_evt_t const * p_event,
                       void *                    p_context)
{
    spi1_xfer_done = true;
}
#endif
#if SPI2_ENABLED
void spi2_event_handler(nrf_drv_spi_evt_t const * p_event,
                       void *                    p_context)
{
    spi2_xfer_done = true;
}
#endif
#endif
