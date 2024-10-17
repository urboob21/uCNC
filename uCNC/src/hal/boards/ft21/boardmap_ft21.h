/*
    Name: mcumap_grbl.h
    Description: Contains all MCU and PIN definitions for RZT2M to run µCNC.
*/

#ifndef BOARDMAP_FT21_H
#define BOARDMAP_FT21_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef MCU
#define MCU MCU_RZT
#endif

#ifndef BOARD_NAME
#define BOARD_NAME "RZT"
#endif

// Setup GPIO pins (Mode: Input)
// #define GPIO_0 (BSP_IO_PORT_02_PIN_1)
#define DIN0_BIT 1
#define DIN0_PORT 2
#define DIN0_ISR 0

// #define GPIO_3 (BSP_IO_PORT_03_PIN_2)
#define DIN3_BIT 3
#define DIN3_PORT 2
#define DIN3_ISR 0

// #define GPIO_7 (BSP_IO_PORT_04_PIN_5)
#define DIN7_BIT 5
#define DIN7_PORT 4
#define DIN7_ISR 0

// #define GPIO_8 (BSP_IO_PORT_07_PIN_5)
#define DIN8_BIT 7
#define DIN8_PORT 5
#define DIN8_ISR 0

    // #define GPIO_15 (BSP_IO_PORT_13_PIN_5)
    // #define GPIO_16 (BSP_IO_PORT_13_PIN_6)
    // #define GPIO_17 (BSP_IO_PORT_13_PIN_7)
    // #define GPIO_18 (BSP_IO_PORT_14_PIN_0)
    // #define GPIO_19 (BSP_IO_PORT_14_PIN_1)
    // #define GPIO_20 (BSP_IO_PORT_16_PIN_4)
    // #define GPIO_21 (BSP_IO_PORT_17_PIN_0)
    // #define GPIO_22 (BSP_IO_PORT_17_PIN_1)
    // #define GPIO_23 (BSP_IO_PORT_19_PIN_0)
    // #define GPIO_27 (BSP_IO_PORT_20_PIN_4)
    // #define GPIO_28 (BSP_IO_PORT_21_PIN_6)
    // TODO: need to update

        // Setup step pins

#define ONESHOT_TIMER 4
#ifdef __cplusplus
}
#endif

#endif
