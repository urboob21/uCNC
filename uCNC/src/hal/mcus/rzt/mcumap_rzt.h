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

// PWM 1000Hz
#define MTU_C_SET_CYCLE (0x3E8) // Carrier cycle = 1ms (PCLKC/4)
#define MTU_C_CYCLE (0x1F4)     // Carrier cycle/2 = 0.5ms (PCLKC/4)
#define MTU_DEAD_TIME (0x64)    // Dead time = 2us (remains unchanged, consider if needed)
#define MTU_DUTY(x) ((uint16_t)MTU_C_CYCLE * (x) / 100 + (MTU_DEAD_TIME / 2))

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

// TODO: Need to recheck and update
#if (defined(PWM0_PORT) && defined(PWM0_BIT))
#define PWM0 0
    static three_phase_duty_cycle_t duty_cycle_pwm0;

#endif
#if (defined(PWM1_PORT) && defined(PWM1_BIT))
#define PWM1 1
    static three_phase_duty_cycle_t duty_cycle_pwm1;
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
// TODO: Need to update following PWM FSP. PWM should be worked at 1000Hz ?
#define mcu_config_pwm(diopin, freq)                                                    \
    {                                                                                   \
        if (diopin == 0)                                                                \
        {                                                                               \
            R_MTU3_THREE_PHASE_Open(&g_mtu3_m0_3ph_drv_ctrl, &g_mtu3_m0_3ph_drv_cfg);   \
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_U] = 0;                            \
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_V] = 0;                            \
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_W] = 0;                            \
            R_MTU3_THREE_PHASE_DutyCycleSet(&g_mtu3_m0_3ph_drv_ctrl, &duty_cycle_pwm0); \
            R_POE3_Open(&g_mtu3_three_phase_poe_ctrl, &g_mtu3_three_phase_poe_cfg);     \
            R_MTU3_THREE_PHASE_Start(&g_mtu3_m0_3ph_drv_ctrl);                          \
        }                                                                               \
        else if (diopin == 1)                                                           \
        {                                                                               \
            R_MTU3_THREE_PHASE_Open(&g_mtu3_m1_3ph_drv_ctrl, &g_mtu3_m1_3ph_drv_cfg);   \
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_U] = 0;                            \
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_V] = 0;                            \
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_W] = 0;                            \
            R_MTU3_THREE_PHASE_DutyCycleSet(&g_mtu3_m1_3ph_drv_ctrl, &duty_cycle_pwm1); \
            R_POE3_Open(&g_mtu3_three_phase_poe_ctrl, &g_mtu3_three_phase_poe_cfg);     \
            R_MTU3_THREE_PHASE_Start(&g_mtu3_m1_3ph_drv_ctrl);                          \
        }                                                                               \
    }

    static void mtu_change_duty(int pin, int duty)
    {
        if (pin == 0)
        {
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_U] = MTU_DUTY(duty);
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_V] = MTU_DUTY(duty);
            duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_W] = MTU_DUTY(duty);
            R_MTU3_THREE_PHASE_DutyCycleSet(&g_mtu3_m0_3ph_drv_ctrl, &duty_cycle_pwm0);
            R_POE3_Open(&g_mtu3_three_phase_poe_ctrl, &g_mtu3_three_phase_poe_cfg);
            R_MTU3_THREE_PHASE_Start(&g_mtu3_m0_3ph_drv_ctrl);
        }
        else if (pin == 1)
        {
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_U] = MTU_DUTY(duty);
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_V] = MTU_DUTY(duty);
            duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_W] = MTU_DUTY(duty);
            R_MTU3_THREE_PHASE_DutyCycleSet(&g_mtu3_m1_3ph_drv_ctrl, &duty_cycle_pwm1);
            R_POE3_Open(&g_mtu3_three_phase_poe_ctrl, &g_mtu3_three_phase_poe_cfg);
            R_MTU3_THREE_PHASE_Start(&g_mtu3_m1_3ph_drv_ctrl);
        }
    }

#define mcu_set_pwm(diopin, duty)      \
    {                                  \
        mtu_change_duty(diopin, duty); \
    }

#define mcu_get_pwm(diopin)                                     \
    {                                                           \
        if (diopin == 0)                                        \
            return duty_cycle_pwm0.duty[THREE_PHASE_CHANNEL_U]; \
        else if (diopin == 1)                                   \
            return duty_cycle_pwm1.duty[THREE_PHASE_CHANNEL_U]  \
    }

#define mcu_stop_pwm(diopin)                                   \
    {                                                          \
        if (diopin == 0)                                       \
        {                                                      \
            R_MTU3_THREE_PHASE_Stop(&g_mtu3_m0_3ph_drv_ctrl);  \
            R_MTU3_THREE_PHASE_Close(&g_mtu3_m0_3ph_drv_ctrl); \
            R_POE3_Close(&g_mtu3_three_phase_poe_ctrl);        \
        }                                                      \
        else if (diopin == 1)                                  \
        {                                                      \
            R_MTU3_THREE_PHASE_Stop(&g_mtu3_m1_3ph_drv_ctrl);  \
            R_MTU3_THREE_PHASE_Close(&g_mtu3_m1_3ph_drv_ctrl); \
            R_POE3_Close(&g_mtu3_three_phase_poe_ctrl);        \
        }
}

// Timer -----------------------------------------------------------------
extern void rzt_delay_us(uint16_t delay);
#define mcu_delay_us(X) rzt_delay_us(X)

#ifdef __cplusplus
}
#endif

#endif
