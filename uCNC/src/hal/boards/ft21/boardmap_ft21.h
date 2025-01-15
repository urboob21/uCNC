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

// @see rzt_gen/pin_data.c && rzt_cfg/fsp_cfg/bsp/bsp_pin_cfg.h

/* ===========================================================================================================================================
 * Input pins - generic
 * DIN# pin defines a generic input pin.
 * ===========================================================================================================================================*/
// GPIO_0 (BSP_IO_PORT_02_PIN_1)
#define DIN0_BIT 1
#define DIN0_PORT 2
#define DIN0_ISR 0

// GPIO_3 (BSP_IO_PORT_03_PIN_2)
#define DIN3_BIT 3
#define DIN3_PORT 2
#define DIN3_ISR 0

// GPIO_7 (BSP_IO_PORT_04_PIN_5)
#define DIN7_BIT 5
#define DIN7_PORT 4
#define DIN7_ISR 0

// GPIO_8 (BSP_IO_PORT_07_PIN_5)
#define DIN8_BIT 7
#define DIN8_PORT 5
#define DIN8_ISR 0

// GPIO_15 (BSP_IO_PORT_13_PIN_5)
#define DIN15_BIT 5
#define DIN15_PORT 13
#define DIN15_ISR 0

// GPIO_16 (BSP_IO_PORT_13_PIN_6)
#define DIN16_BIT 6
#define DIN16_PORT 13
#define DIN16_ISR 0

// GPIO_17 (BSP_IO_PORT_13_PIN_7)
#define DIN17_BIT 7
#define DIN17_PORT 13
#define DIN17_ISR 0

// GPIO_18 (BSP_IO_PORT_14_PIN_0)
#define DIN18_BIT 0
#define DIN18_PORT 14
#define DIN18_ISR 0

// GPIO_19 (BSP_IO_PORT_14_PIN_1)
#define DIN19_BIT 1
#define DIN19_PORT 14
#define DIN19_ISR 0

// GPIO_20 (BSP_IO_PORT_16_PIN_4)
#define DIN20_BIT 4
#define DIN20_PORT 16
#define DIN20_ISR 0

// GPIO_21 (BSP_IO_PORT_17_PIN_0)
#define DIN21_BIT 0
#define DIN21_PORT 17
#define DIN21_ISR 0

// GPIO_22 (BSP_IO_PORT_17_PIN_1)
#define DIN22_BIT 1
#define DIN22_PORT 17
#define DIN22_ISR 0

// GPIO_23 (BSP_IO_PORT_19_PIN_0)
#define DIN23_BIT 0
#define DIN23_PORT 19
#define DIN23_ISR 0

// GPIO_27 (BSP_IO_PORT_20_PIN_4)
#define DIN27_BIT 4
#define DIN27_PORT 20
#define DIN27_ISR 0

// GPIO_28 (BSP_IO_PORT_21_PIN_6)
#define DIN28_BIT 6
#define DIN28_PORT 21
#define DIN28_ISR 0

/* ===========================================================================================================================================
 * Input pins - special
 * the input pins that controls some actions using interrupt
 * @TODO: need to update
 * ===========================================================================================================================================*/
// INT_BMS1 (BSP_IO_PORT_02_PIN_4)
#define BMS1_BIT 4
#define BMS1_PORT 2
#define BMS1_ISR 1

// INT_BMS0 (BSP_IO_PORT_02_PIN_5)
#define BMS0_BIT 5
#define BMS0_PORT 2
#define BMS0_ISR 1

// TJA_INT (BSP_IO_PORT_08_PIN_0)
#define TJA_INT_BIT 0
#define TJA_INT_PORT 8
#define TJA_INT_ISR 1

// TJA_INH (BSP_IO_PORT_08_PIN_2)
#define TJA_INH_BIT 2
#define TJA_INH_PORT 8
#define TJA_INH_ISR 1

// TJA_WAKE (BSP_IO_PORT_08_PIN_3)
#define TJA_WAKE_BIT 3
#define TJA_WAKE_PORT 8
#define TJA_WAKE_ISR 1

/* ===========================================================================================================================================
 * Output pins - generic
 * Defines a generic output pin.
 * @TODO: need to update
 * ===========================================================================================================================================*/

// M2_OC_LED (BSP_IO_PORT_04_PIN_1)
#define M2_OC_LED_BIT 4
#define M2_OC_LED_PORT 8

// M2_OV_LED (BSP_IO_PORT_04_PIN_2)
#define M2_OV_LED_BIT 5
#define M2_OV_LED_PORT 8

// SHDN_BMS0 (BSP_IO_PORT_07_PIN_6)
#define SHDN_BMS0_BIT 6
#define SHDN_BMS0_PORT 7

// ETH_EN (BSP_IO_PORT_07_PIN_7)
#define ETH_EN_BIT 7
#define ETH_EN_PORT 7

// SHDN_BMS1 (BSP_IO_PORT_11_PIN_7)
#define SHDN_BMS1_BIT 7
#define SHDN_BMS1_PORT 11

// ETH0_LINK_LED (BSP_IO_PORT_20_PIN_1)
#define ETH0_LINK_LED_BIT 1
#define ETH0_LINK_LED_PORT 20

// ETH1_LINK_LED (BSP_IO_PORT_20_PIN_2)
#define ETH1_LINK_LED_BIT 2
#define ETH1_LINK_LED_PORT 20

// ETH2_LINK_LED (BSP_IO_PORT_20_PIN_3)
#define ETH2_LINK_LED_BIT 3
#define ETH2_LINK_LED_PORT 20

// M1_OT_LED (BSP_IO_PORT_22_PIN_3)
#define M1_OT_LED_BIT 3
#define M1_OT_LED_PORT 22

// M1_OC_LED (BSP_IO_PORT_22_PIN_4)
#define M1_OC_LED_BIT 4
#define M1_OC_LED_PORT 22

// M1_OV_LED (BSP_IO_PORT_22_PIN_5)
#define M1_OV_LED_BIT 5
#define M1_OV_LED_PORT 22

/* ===========================================================================================================================================
 * COM pins - special
* TX pin defines the UART port tx pin.
* RX pin defines the UART port rx.
* @TODO: need to update && need to check: assume we are using SCI0 => UART0
* ===========================================================================================================================================*/

// SCI0_TXD_MOSI0 (BSP_IO_PORT_16_PIN_0)
// SCI0_RXD_MISO0 (BSP_IO_PORT_16_PIN_6)
#define UART_PORT 0
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

#define PWM0_BIT  // assigns PWM0 pin
#define PWM0_PORT // assigns PWM0 pin
#define PWM0_CHANNEL
#define PWM0_TIMER

#define PWM1_BIT
#define PWM1_PORT
#define PWM1_CHANNEL
#define PWM1_TIMER

#define ONESHOT_TIMER 4
#ifdef __cplusplus
}
#endif

#endif
