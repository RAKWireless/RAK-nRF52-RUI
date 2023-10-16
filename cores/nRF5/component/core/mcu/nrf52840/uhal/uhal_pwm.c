#include "uhal_pwm.h"
#include "udrv_pwm.h"
#include "udrv_errno.h"

#if (APP_PWM_ENABLED && TIMER1_ENABLED)
APP_PWM_INSTANCE(PWM0,1);
#endif
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
APP_PWM_INSTANCE(PWM1,2);
#endif
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
APP_PWM_INSTANCE(PWM2,3);
#endif

APP_TIMER_DEF(uhal_pwm_timer_id);

typedef struct uhal_pwm_status {
    bool initialized;
    bool enabled;
    uint32_t freq_hz;
    uint8_t is_invert;
    uint32_t pin;
    uint32_t duty;
} uhal_pwm_status_t;

static uhal_pwm_status_t pwm_status[UDRV_PWM_MAX];

static UDRV_PWM_RESOLUTION pwm_resolution = UDRV_PWM_RESOLUTION_8BIT;

static volatile bool ready_flag[UDRV_PWM_MAX];            // A flag indicating PWM status.

void pwm_ready_callback(uint32_t pwm_id)    // PWM callback function
{
    //udrv_serial_log_printf("pwm_id=%u\r\n", pwm_id);
    ready_flag[pwm_id] = true;
}

UDRV_PWM_RESOLUTION uhal_pwm_get_resolution (void) {
    return pwm_resolution;
}

void uhal_pwm_set_resolution (UDRV_PWM_RESOLUTION resolution) {
    if (resolution > UDRV_PWM_RESOLUTION_14BIT) {
        return;
    }
    pwm_resolution = resolution;
}

static void pwm_init(udrv_pwm_port port, uint32_t freq_hz, uint8_t is_invert, uint32_t pin) {
    ret_code_t err_code;
    uint32_t period_in_us = 1000000/freq_hz;
    app_pwm_config_t pwm_cfg = APP_PWM_DEFAULT_CONFIG_1CH(period_in_us, pin);

    if (is_invert) {
        pwm_cfg.pin_polarity[0] = APP_PWM_POLARITY_ACTIVE_HIGH;
    } else {
        pwm_cfg.pin_polarity[0] = APP_PWM_POLARITY_ACTIVE_LOW;
    }

    if (port == UDRV_PWM_0) {
#if (APP_PWM_ENABLED && TIMER1_ENABLED)
        err_code = app_pwm_init(&PWM0, &pwm_cfg, pwm_ready_callback);
        APP_ERROR_CHECK(err_code);
        ready_flag[port] = true;
#endif
    } else if (port == UDRV_PWM_1) {
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
        err_code = app_pwm_init(&PWM1, &pwm_cfg, pwm_ready_callback);
        APP_ERROR_CHECK(err_code);
        ready_flag[port] = true;
#endif
    } else if (port == UDRV_PWM_2) {
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
        err_code = app_pwm_init(&PWM2, &pwm_cfg, pwm_ready_callback);
        APP_ERROR_CHECK(err_code);
        ready_flag[port] = true;
#endif
    }
}

void uhal_pwm_init(udrv_pwm_port port, uint32_t freq_hz, uint8_t is_invert, uint32_t pin) {
    if (port >= UDRV_PWM_MAX) {
        return;
    }

    pwm_init(port, freq_hz, is_invert, pin);

    pwm_status[port].initialized = true;
    pwm_status[port].freq_hz = freq_hz;
    pwm_status[port].is_invert = is_invert;
    pwm_status[port].pin = pin;
}

int32_t uhal_pwm_set_duty(udrv_pwm_port port, uint32_t duty) {
    switch (pwm_resolution) {
        case UDRV_PWM_RESOLUTION_8BIT:
            if (duty > 255) {
                return -UDRV_WRONG_ARG;
	    } else {
                duty = duty*100/255;
	    }
            break;
        case UDRV_PWM_RESOLUTION_10BIT:
            if (duty > 1023) {
                return -UDRV_WRONG_ARG;
	    } else {
                duty = duty*100/1023;
	    }
            break;
        case UDRV_PWM_RESOLUTION_12BIT:
            if (duty > 4095) {
                return -UDRV_WRONG_ARG;
	    } else {
                duty = duty*100/4095;
	    }
            break;
        case UDRV_PWM_RESOLUTION_14BIT:
            if (duty > 16383) {
                return -UDRV_WRONG_ARG;
	    } else {
                duty = duty*100/16383;
	    }
            break;
        default:
	    return -UDRV_INTERNAL_ERR;
    }

    if (port == UDRV_PWM_0) {
#if (APP_PWM_ENABLED && TIMER1_ENABLED)
        if (pwm_status[port].enabled == false) {
            return -UDRV_NOT_INIT;
	}

        ready_flag[port] = false;
	while (app_pwm_channel_duty_set(&PWM0, 0, duty) == NRF_ERROR_BUSY);
        while (!ready_flag[port]);
        pwm_status[port].duty = duty;
#endif
    } else if (port == UDRV_PWM_1) {
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
        if (pwm_status[port].enabled == false) {
            return -UDRV_NOT_INIT;
	}

        ready_flag[port] = false;
	while (app_pwm_channel_duty_set(&PWM1, 0, duty) == NRF_ERROR_BUSY);
        while (!ready_flag[port]);
        pwm_status[port].duty = duty;
#endif
    } else if (port == UDRV_PWM_2) {
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
        if (pwm_status[port].enabled == false) {
            return -UDRV_NOT_INIT;
	}

        ready_flag[port] = false;
	while (app_pwm_channel_duty_set(&PWM2, 0, duty) == NRF_ERROR_BUSY);
        while (!ready_flag[port]);
        pwm_status[port].duty = duty;
#endif
    }

    return UDRV_RETURN_OK;
}

static void pwm_deinit(udrv_pwm_port port) {
    ret_code_t err_code;

    if (port == UDRV_PWM_0) {
#if (APP_PWM_ENABLED && TIMER1_ENABLED)
        err_code = app_pwm_uninit(&PWM0);
#endif
    } else if (port == UDRV_PWM_1) {
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
        err_code = app_pwm_uninit(&PWM1);
#endif
    } else if (port == UDRV_PWM_2) {
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
        err_code = app_pwm_uninit(&PWM2);
#endif
    }
}

void uhal_pwm_deinit(udrv_pwm_port port) {
    if (port >= UDRV_PWM_MAX) {
        return;
    }

    pwm_deinit(port);

    pwm_status[port].initialized = false;
}

static void pwm_enable(udrv_pwm_port port) {
    if (port == UDRV_PWM_0) {
#if (APP_PWM_ENABLED && TIMER1_ENABLED)
        app_pwm_enable(&PWM0);
#endif
    } else if (port == UDRV_PWM_1) {
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
        app_pwm_enable(&PWM1);
#endif
    } else if (port == UDRV_PWM_2) {
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
        app_pwm_enable(&PWM2);
#endif
    }
}

void uhal_pwm_enable(udrv_pwm_port port) {
    if (port >= UDRV_PWM_MAX) {
        return;
    }

    pwm_enable(port);
    pwm_status[port].enabled = true;
}

static void pwm_disable(udrv_pwm_port port) {
    if (port == UDRV_PWM_0) {
#if (APP_PWM_ENABLED && TIMER1_ENABLED)
        app_pwm_disable(&PWM0);
#endif
    } else if (port == UDRV_PWM_1) {
#if (APP_PWM_ENABLED && TIMER2_ENABLED)
        app_pwm_disable(&PWM1);
#endif
    } else if (port == UDRV_PWM_2) {
#if (APP_PWM_ENABLED && TIMER3_ENABLED)
        app_pwm_disable(&PWM2);
#endif
    }
}

void uhal_pwm_disable(udrv_pwm_port port) {
    if (port >= UDRV_PWM_MAX) {
        return;
    }

    pwm_disable(port);
    pwm_status[port].enabled = false;
}

void uhal_pwm_suspend(void) {
    for (int i = UDRV_PWM_0 ; i < UDRV_PWM_MAX ; i++) {
        if (pwm_status[i].enabled == true) {
            pwm_disable(i);
	}
        if (pwm_status[i].initialized == true) {
            pwm_deinit(i);
	}
    }
}

void uhal_pwm_resume(void) {
    for (int i = UDRV_PWM_0 ; i < UDRV_PWM_MAX ; i++) {
        if (pwm_status[i].initialized == true) {
            pwm_init(i, pwm_status[i].freq_hz, pwm_status[i].is_invert, pwm_status[i].pin);
	}
        if (pwm_status[i].enabled == true) {
	    pwm_enable(i);
	    uhal_pwm_set_duty(i, pwm_status[i].duty);
	}
    }
}

int32_t uhal_pwm_timer_create (timer_handler tmr_handler, TimerMode_E mode) {
    if (app_timer_create((app_timer_id_t *)&uhal_pwm_timer_id, get_nrf_timer_mode(mode), (app_timer_timeout_handler_t)tmr_handler) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_pwm_timer_start (uint32_t count, void *m_data) {
    if (app_timer_start((app_timer_id_t)uhal_pwm_timer_id, APP_TIMER_TICKS(count), m_data) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_pwm_timer_stop (void) {
    if (app_timer_stop((app_timer_id_t)uhal_pwm_timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}
