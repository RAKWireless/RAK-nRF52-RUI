/*!
 * \file      gpio-board.c
 *
 * \brief     Target board GPIO driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 */
#include "utilities.h"
//#include "sysIrqHandlers.h"
#include "board-config.h"
#include "rtc-board.h"
#include "gpio-board.h"
#include "udrv_gpio.h"

/*!
 * Generic definition
 */
#ifndef SUCCESS
#define SUCCESS                                     1
#endif

#ifndef FAIL
#define FAIL                                        0
#endif

void GpioMcuInit( Gpio_t *obj, PinNames pin, PinModes mode, PinConfigs config, PinTypes type, uint32_t value )
{
    if( pin < IOE_0 )
    {
        obj->pin = pin;

        if( pin == NC )
        {
            return;
        }

        switch (mode) {
            case PIN_INPUT:
                switch (type) {
                    case PIN_NO_PULL:
                        udrv_gpio_set_pull((uint32_t)pin, GPIO_PULL_NONE);
			obj->pull = PIN_NO_PULL;
	        	break;
                    case PIN_PULL_UP:
                        udrv_gpio_set_pull((uint32_t)pin, GPIO_PULL_UP);
			obj->pull = PIN_PULL_UP;
	        	break;
                    case PIN_PULL_DOWN:
                        udrv_gpio_set_pull((uint32_t)pin, GPIO_PULL_DOWN);
			obj->pull = PIN_PULL_DOWN;
	        	break;
                    default:
                        break;
	        }

		udrv_gpio_set_dir((uint32_t)pin, GPIO_DIR_IN);
		break;
            case PIN_OUTPUT:
                udrv_gpio_set_dir((uint32_t)pin, GPIO_DIR_OUT);
		udrv_gpio_set_logic((uint32_t)pin, (gpio_logic_t)!!value);
		break;
            case PIN_ALTERNATE_FCT:
		/* do nothing */
	    case PIN_ANALOGIC:
            default:
                return;
	}
    }

    return;
}

void GpioMcuSetContext( Gpio_t *obj, void* context )
{
    obj->Context = context;
}

void GpioMcuSetInterrupt( Gpio_t *obj, IrqModes irqMode, IrqPriorities irqPriority, GpioIrqHandler *irqHandler )
{
    if( obj->pin < IOE_0 )
    {
        if( irqHandler == NULL )
        {
            return;
        }

        obj->IrqHandler = irqHandler;

        switch (irqMode) {
            case IRQ_RISING_EDGE:
                udrv_gpio_intc_trigger_mode((uint32_t)obj->pin, GPIO_INTC_RISING_EDGE);
                break;
            case IRQ_FALLING_EDGE:
                udrv_gpio_intc_trigger_mode((uint32_t)obj->pin, GPIO_INTC_FALLING_EDGE);
                break;
            case IRQ_RISING_FALLING_EDGE:
                udrv_gpio_intc_trigger_mode((uint32_t)obj->pin, GPIO_INTC_RISING_FALLING_EDGE);
                break;
            case NO_IRQ:
            default:
                return;
	}
        udrv_gpio_register_isr((uint32_t)obj->pin, (gpio_isr_func)irqHandler);
    }
}

void GpioMcuRemoveInterrupt( Gpio_t *obj )
{
    if( obj->pin < IOE_0 )
    {
        udrv_gpio_intc_clear((uint32_t)obj->pin);
        udrv_gpio_register_isr((uint32_t)obj->pin, NULL);
    }
}

void GpioMcuWrite( Gpio_t *obj, uint32_t value )
{
    if( obj->pin < IOE_0 )
    {
        if( obj == NULL )
        {
            assert_param( FAIL );
        }
        // Check if pin is not connected
        if( obj->pin == NC )
        {
            return;
        }
        udrv_gpio_set_logic((uint32_t)obj->pin, (gpio_logic_t)!!value);
    }
}

void GpioMcuToggle( Gpio_t *obj )
{
    if( obj->pin < IOE_0 )
    {
        if( obj == NULL )
        {
            assert_param( FAIL );
        }

        // Check if pin is not connected
        if( obj->pin == NC )
        {
            return;
        }
        udrv_gpio_toggle_logic((uint32_t)obj->pin);
    }
}

uint32_t GpioMcuRead( Gpio_t *obj )
{
    if( obj->pin < IOE_0 )
    {
        if( obj == NULL )
        {
            assert_param( FAIL );
        }
        // Check if pin is not connected
        if( obj->pin == NC )
        {
            return 0;
        }
        return udrv_gpio_get_logic((uint32_t)obj->pin);;
    }
    else
    {
        return 0;
    }
}

