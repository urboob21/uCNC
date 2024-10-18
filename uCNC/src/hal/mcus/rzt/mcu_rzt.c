
// Description: Implements the µCNC HAL for RZT2M.

#include "../../../cnc.h"

/**
 *
 * Initializes the mcu:
 *   1. Configures all IO
 *   2. Configures UART/USB
 **/
static void mcu_rtc_init(void);
static void mcu_usart_init(void);

/**
 * initializes the mcu
 * this function needs to:
 *   - configure all IO pins (digital IO, PWM, Analog, etc...)
 *   - configure all interrupts
 *   - configure uart or usb
 *   - start the internal RTC
 * */
void mcu_init(void)
{
    // Configure
    mcu_io_init();    // The FSP generation almostly done this.
    mcu_usart_init(); // UART init
}

void mcu_usart_init(void)
{
#ifdef MCU_HAS_UART
// TODO: implement UART FSP config here
#endif
}