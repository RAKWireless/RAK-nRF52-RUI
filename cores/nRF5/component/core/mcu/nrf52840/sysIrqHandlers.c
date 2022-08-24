#include "sysIrqHandlers.h"
#include "nrf52840.h"

#ifdef SUPPORT_MULTITASK
#include "uhal_sched.h"

extern tcb_ thread_pool[THREAD_POOL_SIZE];
extern tcb_ *run_queue;
extern tcb_ *current_thread;
extern tcb_ *next_thread;

extern volatile unsigned long int total_tasks;
extern unsigned long int current_sp;
extern unsigned long int next_sp;
extern bool sched_start;
extern bool sched_pending;
#endif

void HardFault_Handler( void )
{
    //while(1);
    NVIC_SystemReset();
}

/**
  * @brief This function handles Pendable request for system service.
  */
__attribute__((naked)) void PendSV_Handler(void)
{
#ifdef SUPPORT_MULTITASK
    if (sched_start == false || sched_pending == true) {
        __asm("BX LR");
    }
    __asm("CPSID I");
    __asm("PUSH  {r4-r11}");

    if (current_thread == NULL) {
        current_thread = run_queue;
        current_sp = (unsigned long int)(current_thread->sp);
        __asm("LDR R10, =current_sp");
        __asm("LDR SP,[R10,#0x00]");
        __asm("POP {R4-R11}");
        //if (total_tasks == 1) {
            //sched_start = false;
        //}
        __asm("CPSIE I");
        __asm("BX LR");
    }

    if (current_thread->next == NULL) {
        next_thread = run_queue;
    } else {
        next_thread = current_thread->next;
    }

    current_sp = (unsigned long int)&current_thread->sp;
    __asm("LDR r10, =current_sp");
    __asm("LDR r11, [r10]");
    __asm("STR sp,[r11,#0x00]");

    next_sp = (unsigned long int)(next_thread->sp);
    __asm("LDR r10, =next_sp");
    __asm("LDR sp,[r10,#0x00]");
    current_thread = next_thread;

    __asm("POP {r4-r11}");
    __asm("CPSIE I");
    __asm("BX LR");
#endif
}

#ifdef SUPPORT_MULTITASK
static void set_pendsv() {
    // Set the 28th Bit to trigger PendSV interrupt
    *(unsigned long int volatile *)0xE000ED04 = (1U << 28);
}
#endif

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
#ifdef SUPPORT_MULTITASK
    if (sched_start == true) {
        set_pendsv();
    }
#endif
}
