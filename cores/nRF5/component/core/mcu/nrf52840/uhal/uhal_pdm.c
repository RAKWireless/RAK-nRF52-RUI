#include <stdarg.h>
#include "nrf_pdm.h"
#include "uhal_pdm.h"

#define PDM_IRQ_PRIORITY     7

#define NRF_PDM_FREQ_1280K  (nrf_pdm_freq_t)(0x0A000000UL)               ///< PDM_CLK= 1.280 MHz (32 MHz / 25) => Fs= 20000 Hz
#define NRF_PDM_FREQ_2000K  (nrf_pdm_freq_t)(0x10000000UL)               ///< PDM_CLK= 2.000 MHz (32 MHz / 16) => Fs= 31250 Hz
#define NRF_PDM_FREQ_2667K  (nrf_pdm_freq_t)(0x15000000UL)               ///< PDM_CLK= 2.667 MHz (32 MHz / 12) => Fs= 41667 Hz
#define NRF_PDM_FREQ_3200K  (nrf_pdm_freq_t)(0x19000000UL)               ///< PDM_CLK= 3.200 MHz (32 MHz / 10) => Fs= 50000 Hz
#define NRF_PDM_FREQ_4000K  (nrf_pdm_freq_t)(0x20000000UL)               ///< PDM_CLK= 4.000 MHz (32 MHz /  8) => Fs= 62500 Hz


void uhal_pdm_enable_frequency(void)
{
    // Enable high frequency oscillator if not already enabled
    if (NRF_CLOCK->EVENTS_HFCLKSTARTED == 0) {
        NRF_CLOCK->TASKS_HFCLKSTART    = 1;
        while (NRF_CLOCK->EVENTS_HFCLKSTARTED == 0) { }
    }
}
bool uhal_pdm_set_rate(long rate)
{
    // configure the sample rate 	
  switch (rate) {
    case 16000:
      #ifndef NRF52832_XXAA
      NRF_PDM->RATIO = ((PDM_RATIO_RATIO_Ratio80 << PDM_RATIO_RATIO_Pos) & PDM_RATIO_RATIO_Msk);
      #endif
      nrf_pdm_clock_set(NRF_PDM_FREQ_1280K);
      break;
    case 41667:
      nrf_pdm_clock_set(NRF_PDM_FREQ_2667K);
      break;
    default:
      return 0; // unsupported
  }
  return 1;
}
 
bool uhal_pdm_set_channel(int channels)
{
    // configure the sample channels 	
    switch (channels) {
    case 2:
      nrf_pdm_mode_set(NRF_PDM_MODE_STEREO, NRF_PDM_EDGE_LEFTFALLING);
      break;

    case 1:
      nrf_pdm_mode_set(NRF_PDM_MODE_MONO, NRF_PDM_EDGE_LEFTFALLING);
      break;

    default:
      return 0; // unsupported
  }
  return 1;
}


void uhal_pdm_psel_connect(uint32_t psel_clk,uint32_t psel_din)
{
    nrf_pdm_psel_connect(psel_clk, psel_din);
}

void uhal_pdm_event_clear(udrv_pdm_event_t event)
{
    switch (event) {
        case UDRV_PDM_EVENT_STARTED:
        {
            nrf_pdm_event_clear(NRF_PDM_EVENT_STARTED);
            break;
        }
        case UDRV_PDM_EVENT_STOPPED:
        {
            nrf_pdm_event_clear(NRF_PDM_EVENT_STOPPED);
            break;
        }
        case UDRV_PDM_EVENT_END:
        {
            nrf_pdm_event_clear(NRF_PDM_EVENT_END);
            break;
        }
        default:
        {
            break;
        }
    }
}

void uhal_pdm_int_enable(void)
{
    nrf_pdm_int_enable(NRF_PDM_INT_STARTED | NRF_PDM_INT_STOPPED);
}

void uhal_pdm_set_nvic(void)
{
    NVIC_SetPriority(PDM_IRQn, PDM_IRQ_PRIORITY);
    NVIC_ClearPendingIRQ(PDM_IRQn);
    NVIC_EnableIRQ(PDM_IRQn);
}

void uhal_pdm_enable(void)
{
    nrf_pdm_enable();
}

void uhal_pdm_task_trigger(udrv_pdm_task_t task)
{
    switch (task) {
        case UDRV_PDM_TASK_START:
        {
            nrf_pdm_task_trigger(NRF_PDM_TASK_START);
            break;
        }
        case UDRV_PDM_TASK_STOP:
        {
            nrf_pdm_task_trigger(NRF_PDM_TASK_STOP);
            break;
        }
        default:
        {
            break;
        }
    }
}

void uhal_pdm_disable(void)
{
    nrf_pdm_disable();
}

void uhal_pdm_disable_nvic(void)
{
    NVIC_DisableIRQ(PDM_IRQn);
}

void uhal_pdm_enable_nvic(void)
{
    NVIC_EnableIRQ(PDM_IRQn);
}

void uhal_pdm_psel_disconnect(void)
{
    nrf_pdm_psel_disconnect();
}

void uhal_pdm_set_gain(int gain)
{
    nrf_pdm_gain_set(gain, gain);
}

bool uhal_pdm_event_check(udrv_pdm_event_t event)
{
    switch (event) {
        case UDRV_PDM_EVENT_STARTED:
        {
            return nrf_pdm_event_check(NRF_PDM_EVENT_STARTED);
        }
        case UDRV_PDM_EVENT_STOPPED:
        {
            return nrf_pdm_event_check(NRF_PDM_EVENT_STOPPED);
        }
        case UDRV_PDM_EVENT_END:
        {
            return nrf_pdm_event_check(NRF_PDM_EVENT_END);
        }
        default:
        {
            return false;
        }
    }
}

bool uhal_pdm_buffer_set(uint32_t * p_buffer, uint32_t num)
{
    nrf_pdm_buffer_set(p_buffer,num);
}

