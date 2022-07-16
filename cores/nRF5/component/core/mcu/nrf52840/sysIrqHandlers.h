#ifndef SYS_IRQ_HANDLERS_H
#define SYS_IRQ_HANDLERS_H

#ifdef __cplusplus
 extern "C" {
#endif

void NMI_Handler( void );

void HardFault_Handler( void );

void MemManage_Handler( void );

void BusFault_Handler( void );

void UsageFault_Handler( void );

void DebugMon_Handler( void );

__attribute__((naked)) void PendSV_Handler(void);

void SysTick_Handler( void );

void EXTI0_1_IRQHandler( void );

void EXTI2_3_IRQHandler( void );

void EXTI4_15_IRQHandler( void );

void RTC_IRQHandler( void );

void USART2_IRQHandler( void );

#ifdef __cplusplus
}
#endif

#endif // SYS_IRQ_HANDLERS_H
