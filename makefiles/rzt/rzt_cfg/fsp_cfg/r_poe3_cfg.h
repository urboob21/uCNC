/* generated configuration header file - do not edit */
#ifndef R_POE3_CFG_H_
#define R_POE3_CFG_H_
#define POE3_CFG_PARAM_CHECKING_ENABLE (BSP_CFG_PARAM_CHECKING_ENABLE)
#define POE3_CFG_MULTIPLEX_INTERRUPT_SUPPORTED (0)
#if POE3_CFG_MULTIPLEX_INTERRUPT_SUPPORTED
 #define POE3_CFG_MULTIPLEX_INTERRUPT_ENABLE        BSP_INTERRUPT_ENABLE
 #define POE3_CFG_MULTIPLEX_INTERRUPT_DISABLE       BSP_INTERRUPT_DISABLE
#else
#define POE3_CFG_MULTIPLEX_INTERRUPT_ENABLE
#define POE3_CFG_MULTIPLEX_INTERRUPT_DISABLE
#endif
#endif /* R_POE3_CFG_H_ */
