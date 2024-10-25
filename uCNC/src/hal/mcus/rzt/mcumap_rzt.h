// Description: Contains all MCU and PIN definitions for RZT2M to run µCNC.

#ifndef MCUMAP_RZT_H
#define MCUMAP_RZT_H

#ifdef __cplusplus
extern "C"
{
#endif

// Include
#include "..\..\..\..\makefiles\rzt\rzt_gen\hal_data.h"

// needed by software delays
#ifndef MCU_CLOCKS_PER_CYCLE
#define MCU_CLOCKS_PER_CYCLE 1
#endif
#ifndef MCU_CYCLES_PER_LOOP
#define MCU_CYCLES_PER_LOOP 1
#endif
#ifndef MCU_CYCLES_PER_LOOP_OVERHEAD
#define MCU_CYCLES_PER_LOOP_OVERHEAD 0
#endif

    // TODO: need to update
    extern volatile bool rzt2m_global_isr_enabled;
#define mcu_enable_global_isr()          \
    {                                    \
        rzt2m_global_isr_enabled = true; \
    }
#define mcu_disable_global_isr()          \
    {                                     \
        rzt2m_global_isr_enabled = false; \
    }
#define mcu_get_global_isr() rzt2m_global_isr_enabled

    // map to fsp_rzt2m config pins
    // TODO: need to update for the others GPIO input pins
#if (defined(DIN0_PORT) && defined(DIN0_BIT))
#define DIN0 BSP_IO_PORT_02_PIN_1
#endif
#if (defined(DIN3_PORT) && defined(DIN3_BIT))
#define DIN3 BSP_IO_PORT_03_PIN_2
#endif

#if (defined(TX_PORT) && defined(TX_BIT))
#define TX BSP_IO_PORT_16_PIN_0
#endif
#if (defined(RX_PORT) && defined(RX_BIT))
#define RX BSP_IO_PORT_16_PIN_6
#endif

#if (defined(TX) && defined(RX))
#define MCU_HAS_UART
#endif

#if (defined(PWM0_PORT) && defined(PWM0_BIT))
#define DIO25 BSP_IO_PORT_17_PIN_6
#define PWM0 BSP_IO_PORT_17_PIN_6
#endif
#if (defined(PWM1_PORT) && defined(PWM1_BIT))
#define DIO26 BSP_IO_PORT_18_PIN_1
#define PWM1 BSP_IO_PORT_18_PIN_1
#endif
#if (defined(PWM2_PORT) && defined(PWM2_BIT))
#define DIO27 BSP_IO_PORT_18_PIN_2
#define PWM2 BSP_IO_PORT_18_PIN_2
#endif
#if (defined(PWM3_PORT) && defined(PWM3_BIT))
#define DIO28 BSP_IO_PORT_18_PIN_3
#define PWM3 BSP_IO_PORT_18_PIN_3
#endif
#if (defined(PWM4_PORT) && defined(PWM4_BIT))
#define DIO29 BSP_IO_PORT_17_PIN_7
#define PWM4 BSP_IO_PORT_17_PIN_7
#endif
#if (defined(PWM5_PORT) && defined(PWM5_BIT))
#define DIO30 BSP_IO_PORT_18_PIN_0
#define PWM5 BSP_IO_PORT_18_PIN_0
#endif
#if (defined(PWM6_PORT) && defined(PWM6_BIT))
#define DIO31 BSP_IO_PORT_19_PIN_3
#define PWM6 BSP_IO_PORT_19_PIN_3
#endif
#if (defined(PWM7_PORT) && defined(PWM7_BIT))
#define DIO32 BSP_IO_PORT_19_PIN_6
#define PWM7 BSP_IO_PORT_19_PIN_6
#endif
#if (defined(PWM8_PORT) && defined(PWM8_BIT))
#define DIO33 BSP_IO_PORT_19_PIN_7
#define PWM8 BSP_IO_PORT_19_PIN_7
#endif
#if (defined(PWM9_PORT) && defined(PWM9_BIT))
#define DIO34 BSP_IO_PORT_20_PIN_0
#define PWM9 BSP_IO_PORT_20_PIN_0
#endif
#if (defined(PWM10_PORT) && defined(PWM10_BIT))
#define DIO35 BSP_IO_PORT_19_PIN_4
#define PWM10 BSP_IO_PORT_19_PIN_4
#endif
#if (defined(PWM11_PORT) && defined(PWM11_BIT))
#define DIO36 BSP_IO_PORT_19_PIN_5
#define PWM11 BSP_IO_PORT_19_PIN_5
#endif


// COM registers
#ifdef MCU_HAS_UART
// this MCU does not work well with both TX and RX interrupt
// this forces the sync TX method to fix communication
// TODO: update this
#endif

// IO -----------------------------------------------------------------
// TODO: ioport_pin_cfg_t g_bsp_pin_cfg_data[] already do these one. Need to update.
#define mcu_config_output(X) \
    {                        \
    }

#define mcu_config_input(X) \
    {                       \
    }

#define mcu_config_analog(X) \
    {                        \
    }

#define mcu_config_pullup(X) \
    {                        \
    }

// TODO: Register the isr callback functions
#define mcu_config_input_isr(X) \
    {                           \
    }

#define mcu_get_input(X)                          \
    {                                             \
        R_BSP_FastPinRead(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_get_output(X)                         \
    {                                             \
        R_BSP_FastPinRead(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_set_output(X)                    \
    {                                        \
        R_BSP_PinSet(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_clear_output(X)                    \
    {                                          \
        R_BSP_PinClear(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_toggle_output(X)                    \
    {                                           \
        R_BSP_PinToggle(BSP_IO_REGION_SAFE, X); \
    }

// PWM -----------------------------------------------------------------
// TODO: Need to update
#define mcu_config_pwm(diopin, freq)            \
    {                                           \
        R_BSP_PinToggle(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_set_pwm(X, Y)                                                       \
	{                                                                             \
	}    

#define mcu_get_pwm(X, Y)                                                       \
	{                                                                             \
	} 

// Timer -----------------------------------------------------------------
    extern void rzt_delay_us(uint16_t delay);
#define mcu_delay_us(X) rzt_delay_us(X)

#ifdef __cplusplus
}
#endif

#endif
