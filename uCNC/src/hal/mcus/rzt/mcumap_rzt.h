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

    // map to fsp_rzt2m config pin
    // TODO: need to update for the others GPIO input pins
#if (defined(DIN0_PORT) && defined(DIN0_BIT))
#define DIN0 BSP_IO_PORT_02_PIN_1
#endif
#if (defined(DIN3_PORT) && defined(DIN3_BIT))
#define DIN3 BSP_IO_PORT_03_PIN_2
#endif



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

#define mcu_config_input_isr(X) \
    {                           \
    }

// TODO: need to update
#define mcu_get_input(X)                          \
    {                                             \
        R_BSP_FastPinRead(BSP_IO_REGION_SAFE, X); \
    }

#define mcu_get_output(X) \
    {                     \
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

#ifdef __cplusplus
}
#endif

#endif
