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

#ifdef __cplusplus
}
#endif

#endif
