
// Description: Implements the µCNC HAL for RZT2M.

#include "../../../cnc.h"

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
    // mcu_io_init();             R_IOPORT_Open(&g_ioport_ctrl, &g_bsp_pin_cfg);
}