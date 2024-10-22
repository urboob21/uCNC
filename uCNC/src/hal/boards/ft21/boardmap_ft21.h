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

// Define GPIO pins (Mode: Input) ========================================================================================================
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

// Define UART pins ========================================================================================================
// #define SCI0_TXD_MOSI0 (BSP_IO_PORT_16_PIN_0)
// #define SCI0_RXD_MISO0 (BSP_IO_PORT_16_PIN_6)
#define UART_PORT 0 // TODO: need to check: assume we are using SCI0 => UART0
#define TX_BIT 0
#define TX_PORT 16
#define RX_BIT 6
#define RX_PORT 16

// Define PWM pins ========================================================================================================
// #define MTU33_MTIOC3B (BSP_IO_PORT_17_PIN_6)
// #define MTU33_MTIOC3D (BSP_IO_PORT_18_PIN_1)
// #define MTU34_MTIOC4B (BSP_IO_PORT_18_PIN_2)
// #define MTU34_MTIOC4D (BSP_IO_PORT_18_PIN_3)
// #define MTU34_MTIOC4A (BSP_IO_PORT_17_PIN_7)
// #define MTU34_MTIOC4C (BSP_IO_PORT_18_PIN_0)

// #define MTU36_MTIOC6B (BSP_IO_PORT_19_PIN_3)
// #define MTU36_MTIOC6D (BSP_IO_PORT_19_PIN_6)
// #define MTU37_MTIOC7B (BSP_IO_PORT_19_PIN_7)
// #define MTU37_MTIOC7D (BSP_IO_PORT_20_PIN_0)
// #define MTU37_MTIOC7A (BSP_IO_PORT_19_PIN_4)
// #define MTU37_MTIOC7C (BSP_IO_PORT_19_PIN_5)
#define PWM0_BIT 6   // assigns PWM0 pin
#define PWM0_PORT 17 // assigns PWM0 pin
#define PWM0_CHANNEL
#define PWM0_TIMER

#define PWM1_BIT 1
#define PWM1_PORT 18
#define PWM1_CHANNEL
#define PWM1_TIMER

#define PWM2_BIT 2
#define PWM2_PORT 18
#define PWM2_CHANNEL
#define PWM2_TIMER

#define PWM3_BIT 3
#define PWM3_PORT 18
#define PWM3_CHANNEL
#define PWM3_TIMER

#define PWM4_BIT 7
#define PWM4_PORT 17
#define PWM4_CHANNEL
#define PWM4_TIMER

#define PWM5_BIT 0
#define PWM5_PORT 18
#define PWM5_CHANNEL
#define PWM5_TIMER

#define PWM6_BIT 3
#define PWM6_PORT 19
#define PWM6_CHANNEL
#define PWM6_TIMER

#define PWM7_BIT 6
#define PWM7_PORT 19
#define PWM7_CHANNEL
#define PWM7_TIMER

#define PWM8_BIT 7
#define PWM8_PORT 19
#define PWM8_CHANNEL
#define PWM8_TIMER

#define PWM9_BIT 0
#define PWM9_PORT 20
#define PWM9_CHANNEL
#define PWM9_TIMER

#define PWM10_BIT 4
#define PWM10_PORT 19
#define PWM10_CHANNEL
#define PWM10_TIMER

#define PWM11_BIT 5
#define PWM11_PORT 19
#define PWM11_CHANNEL
#define PWM11_TIMER

#define ONESHOT_TIMER 4
#ifdef __cplusplus
}
#endif

#endif
