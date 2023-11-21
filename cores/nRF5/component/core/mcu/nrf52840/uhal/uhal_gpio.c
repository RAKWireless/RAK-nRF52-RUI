#include "uhal_gpio.h"
#include "pin_define.h"
#include "udrv_system.h"
#include "udrv_errno.h"

extern bool udrv_powersave_in_sleep;
extern bool udrv_powersave_in_deep_sleep;
extern bool udrv_powersave_early_wakeup;
extern void RadioOnDioIrq( void* context );

static udrv_system_event_t rui_gpio_int_event[M_MAX_GPIO_PIN];

static gpio_isr_func sg_gpio_isr[M_MAX_GPIO_PIN];

static gpio_intc_trigger_mode_t uhal_gpio_wakeup_mode = GPIO_INTC_RISING_FALLING_EDGE;

typedef struct uhal_gpio_status {
    nrf_gpio_pin_dir_t dir;
    nrf_gpio_pin_pull_t pull;
    nrf_gpio_pin_input_t input;
    nrf_gpio_pin_sense_t sense;
    nrf_gpio_pin_drive_t drive;
    bool wakeup_source;
} uhal_gpio_status_t;

static uhal_gpio_status_t gpio_status[M_MAX_GPIO_PIN];

void uhal_gpio_handler_handler(void *pdata)
{
    if (sg_gpio_isr[(uint32_t)pdata]) {
        sg_gpio_isr[(uint32_t)pdata]((uint32_t)pdata);
    }
}

static void gpio_event_handler( nrf_drv_gpiote_pin_t pin, nrf_gpiote_polarity_t action )
{
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    udrv_powersave_in_sleep = false;

    rui_gpio_int_event[pin].request = UDRV_SYS_EVT_OP_GPIO_INTERRUPT;
    rui_gpio_int_event[pin].p_context = (void *)pin;
    udrv_system_event_produce(&rui_gpio_int_event[pin]);
}

static void gpio_wakeup_handler( nrf_drv_gpiote_pin_t pin, nrf_gpiote_polarity_t action )
{
    udrv_powersave_in_sleep = false;
    udrv_powersave_early_wakeup = true;
}

void uhal_gpio_init(uint32_t pin, gpio_dir_t dir, gpio_pull_t pull, gpio_logic_t logic) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    uhal_gpio_set_dir(pin, dir);
    if (dir == GPIO_DIR_OUT) {
        uhal_gpio_set_logic(pin, logic);
    }
    uhal_gpio_set_pull(pin, pull);
}

void uhal_gpio_set_dir(uint32_t pin, gpio_dir_t dir) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (dir == GPIO_DIR_OUT) {
        nrf_gpio_cfg_output((uint32_t)pin);
    } else if (dir == GPIO_DIR_IN) {
        nrf_gpio_cfg_input((uint32_t)pin, NRF_GPIO_PIN_NOPULL);
    }
}

void uhal_gpio_set_pull(uint32_t pin, gpio_pull_t pull) {
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode((uint32_t *)&pin);

    uint32_t cnf = reg->PIN_CNF[pin] & ~GPIO_PIN_CNF_PULL_Msk;

    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (pull == GPIO_PULL_DOWN) {
        reg->PIN_CNF[pin] = cnf | (GPIO_PIN_CNF_PULL_Pulldown << GPIO_PIN_CNF_PULL_Pos);
    } else if (pull == GPIO_PULL_UP) {
        reg->PIN_CNF[pin] = cnf | (GPIO_PIN_CNF_PULL_Pullup << GPIO_PIN_CNF_PULL_Pos);
    } else if (pull == GPIO_PULL_NONE) {
        reg->PIN_CNF[pin] = cnf | (GPIO_PIN_CNF_PULL_Disabled << GPIO_PIN_CNF_PULL_Pos);
    }
}

void uhal_gpio_set_logic(uint32_t pin, gpio_logic_t logic) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (logic == GPIO_LOGIC_LOW) {
        nrf_gpio_pin_clear((uint32_t)pin);
    } else if (logic == GPIO_LOGIC_HIGH) {
        nrf_gpio_pin_set((uint32_t)pin);
    }
}

gpio_logic_t uhal_gpio_get_logic(uint32_t pin) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (nrf_gpio_pin_read((uint32_t)pin) == 0) {
        return GPIO_LOGIC_LOW;
    } else {
        return GPIO_LOGIC_HIGH;
    }
}

void uhal_gpio_toggle_logic(uint32_t pin) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    nrf_gpio_pin_toggle(pin);
}

void uhal_gpio_intc_trigger_mode(uint32_t pin, gpio_intc_trigger_mode_t mode) {
    ret_code_t err_code;
    nrf_drv_gpiote_in_config_t config;

    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (!nrf_drv_gpiote_is_init()) {
        err_code = nrf_drv_gpiote_init();
        APP_ERROR_CHECK(err_code);
    }

    config.is_watcher = false;
    config.hi_accuracy = true;

    switch (mode) {
        case GPIO_INTC_HIGH_LEVEL:
        case GPIO_INTC_RISING_EDGE:
            config.sense = NRF_GPIOTE_POLARITY_LOTOHI;
            config.pull = NRF_GPIO_PIN_PULLDOWN;
            break;
        case GPIO_INTC_LOW_LEVEL:
        case GPIO_INTC_FALLING_EDGE:
            config.sense = NRF_GPIOTE_POLARITY_HITOLO;
            config.pull = NRF_GPIO_PIN_PULLUP;
            break;
        default:
            config.sense = GPIOTE_CONFIG_POLARITY_Toggle;
            break;
    }

    nrf_drv_gpiote_in_event_disable((nrfx_gpiote_pin_t)pin);
    nrf_drv_gpiote_in_uninit((nrfx_gpiote_pin_t)pin);
    nrf_drv_gpiote_in_init((nrfx_gpiote_pin_t)pin, &config, gpio_event_handler);
    nrf_drv_gpiote_in_event_enable((nrfx_gpiote_pin_t)pin, true);
}

static void uhal_gpio_wakeup_trigger_mode(uint32_t pin, gpio_intc_trigger_mode_t mode) {
    ret_code_t err_code;
    nrf_drv_gpiote_in_config_t config;

    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (!nrf_drv_gpiote_is_init()) {
        err_code = nrf_drv_gpiote_init();
        APP_ERROR_CHECK(err_code);
    }

    config.is_watcher = false;
    config.hi_accuracy = false;

    switch (mode) {
        case GPIO_INTC_HIGH_LEVEL:
        case GPIO_INTC_RISING_EDGE:
            config.sense = NRF_GPIOTE_POLARITY_LOTOHI;
            config.pull = NRF_GPIO_PIN_PULLDOWN;
            break;
        case GPIO_INTC_LOW_LEVEL:
        case GPIO_INTC_FALLING_EDGE:
            config.sense = NRF_GPIOTE_POLARITY_HITOLO;
            config.pull = NRF_GPIO_PIN_PULLUP;
            break;
        default:
            config.sense = GPIOTE_CONFIG_POLARITY_Toggle;
            break;
    }

    nrf_drv_gpiote_in_event_disable((nrfx_gpiote_pin_t)pin);
    nrf_drv_gpiote_in_uninit((nrfx_gpiote_pin_t)pin);
    nrf_drv_gpiote_in_init((nrfx_gpiote_pin_t)pin, &config, gpio_wakeup_handler);
    nrf_drv_gpiote_in_event_enable((nrfx_gpiote_pin_t)pin, true);
}

int32_t uhal_gpio_register_isr(uint32_t pin, gpio_isr_func handler) {
    if (pin >= M_MAX_GPIO_PIN) {
        return -UDRV_WRONG_ARG;
    }

    sg_gpio_isr[pin] = handler;
    return 0;
}

void uhal_gpio_intc_clear(uint32_t pin) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    nrf_drv_gpiote_in_uninit((nrfx_gpiote_pin_t)pin);
    sg_gpio_isr[pin] = NULL;
}

void uhal_gpio_set_wakeup_enable(uint32_t pin) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    gpio_status[pin].wakeup_source = true;
}

void uhal_gpio_set_wakeup_disable(uint32_t pin) {
    if (pin >= M_MAX_GPIO_PIN) {
        return;
    }

    if (sg_gpio_isr[pin] != NULL) {
        return;
    }

#if defined(SUPPORT_LORA) || defined(SUPPORT_LORA_P2P)
    if (pin != 47) {//LoRa interrupt
#endif
        nrf_drv_gpiote_in_uninit((nrfx_gpiote_pin_t)pin);
        gpio_status[pin].wakeup_source = false;
#if defined(SUPPORT_LORA) || defined(SUPPORT_LORA_P2P)
    }
#endif
}

void uhal_gpio_set_wakeup_mode(gpio_intc_trigger_mode_t mode) {
    uhal_gpio_wakeup_mode = mode;
}

void uhal_gpio_suspend(void) {
    for (int i = 0 ; i < M_MAX_GPIO_PIN ; i++) {
        if (i != 4 && i != 5 && i != 6 && i != 7 && i != 8 && \
            i != 11 && i != 12 && i != 13 && i != 14 && i != 15 && i != 16 && i != 17 && \
            i != 19 && i != 20 && i != 21 && i != 22 && i != 23 && i != 24 && i != 25 && \
            i != 2 && i != 3 && \
            i != 9 && i != 10 && \
            i != 26 && i != 27 && \
            i != 28 && i != 29 && i != 30 && i != 31 && \
            i != 32 && i != 33 && i != 34 && i != 35 && i != 36 && i != 37 && i != 39 && \
            i != 47 && i != 43 && i != 44 && i != 45
            ) {
            continue;
	}

#if defined(SUPPORT_LORA) || defined(SUPPORT_LORA_P2P)
        if (i == 47)
        {
            continue;
        }
#endif

        if (sg_gpio_isr[i] != NULL) {
            continue;
        }

        uint32_t pin = i;
	NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin);
	gpio_status[i].dir = (nrf_gpio_pin_dir_t)((reg->PIN_CNF[pin] & GPIO_PIN_CNF_DIR_Msk) >> GPIO_PIN_CNF_DIR_Pos);
	gpio_status[i].input = (nrf_gpio_pin_input_t)((reg->PIN_CNF[pin] & GPIO_PIN_CNF_INPUT_Msk) >> GPIO_PIN_CNF_INPUT_Pos);
	gpio_status[i].pull = (nrf_gpio_pin_pull_t)((reg->PIN_CNF[pin] & GPIO_PIN_CNF_PULL_Msk) >> GPIO_PIN_CNF_PULL_Pos);
	gpio_status[i].drive = (nrf_gpio_pin_drive_t)((reg->PIN_CNF[pin] & GPIO_PIN_CNF_DRIVE_Msk) >> GPIO_PIN_CNF_DRIVE_Pos);
	gpio_status[i].sense = (nrf_gpio_pin_sense_t)((reg->PIN_CNF[pin] & GPIO_PIN_CNF_SENSE_Msk) >> GPIO_PIN_CNF_SENSE_Pos);

        if (gpio_status[i].wakeup_source == true)
        {
            uhal_gpio_wakeup_trigger_mode(i, uhal_gpio_wakeup_mode);
            continue;
        }

        //nrf_gpio_cfg_default(i);
    }
    return;
}

void uhal_gpio_resume(void) {
    for (int i = 0 ; i < M_MAX_GPIO_PIN ; i++) {
        if (i != 4 && i != 5 && i != 6 && i != 7 && i != 8 && \
            i != 11 && i != 12 && i != 13 && i != 14 && i != 15 && i != 16 && i != 17 && \
            i != 19 && i != 20 && i != 21 && i != 22 && i != 23 && i != 24 && i != 25 && \
            i != 2 && i != 3 && \
            i != 9 && i != 10 && \
            i != 26 && i != 27 && \
            i != 28 && i != 29 && i != 30 && i != 31 && \
            i != 32 && i != 33 && i != 34 && i != 35 && i != 36 && i != 37 && i != 39 && \
            i != 47 && i != 43 && i != 44 && i != 45
            ) {
            continue;
	}

#if defined(SUPPORT_LORA) || defined(SUPPORT_LORA_P2P)
        if (i == 47) {//LoRa interrupt
            continue;
        }
#endif

        if (sg_gpio_isr[i] != NULL) {
            continue;
        }

        nrf_gpio_cfg(
        i,
        gpio_status[i].dir,
        gpio_status[i].input,
        gpio_status[i].pull,
        gpio_status[i].drive,
        gpio_status[i].sense);
    }
    return;
}

