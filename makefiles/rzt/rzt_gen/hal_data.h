/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_tsu.h"
#include "r_adc_api.h"
#include "r_dsmif.h"
#include "r_adc_api.h"
#include "r_adc.h"
#include "r_adc_api.h"
#include "r_poe3.h"
#include "r_poe3_api.h"
#include "r_mtu3.h"
#include "r_timer_api.h"
#include "r_mtu3_three_phase.h"
#include "r_three_phase_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
FSP_HEADER
/** ADC on TSU Instance. */
extern const adc_instance_t g_tsu0;

/** Access the TSU instance using these structures when calling API functions directly (::p_api is not used). */
extern tsu_instance_ctrl_t g_tsu0_ctrl;
extern const adc_cfg_t g_tsu0_cfg;
/** ADC on DSMIF Instance. */
extern const adc_instance_t g_dsmif1;
extern dsmif_instance_ctrl_t g_dsmif1_ctrl;
extern const adc_cfg_t g_dsmif1_cfg;
#ifndef NULL
void NULL(adc_callback_args_t *p_args);
#endif
/** ADC on DSMIF Instance. */
extern const adc_instance_t g_dsmif0;
extern dsmif_instance_ctrl_t g_dsmif0_ctrl;
extern const adc_cfg_t g_dsmif0_cfg;
#ifndef NULL
void NULL(adc_callback_args_t *p_args);
#endif
/** ADC on ADC Instance. */
extern const adc_instance_t g_adc1;

/** Access the ADC instance using these structures when calling API functions directly (::p_api is not used). */
extern adc_instance_ctrl_t g_adc1_ctrl;
extern const adc_cfg_t g_adc1_cfg;
extern const adc_channel_cfg_t g_adc1_channel_cfg;

#ifndef adc1_sample_callback
void adc1_sample_callback(adc_callback_args_t *p_args);
#endif
/** ADC on ADC Instance. */
extern const adc_instance_t g_adc0;

/** Access the ADC instance using these structures when calling API functions directly (::p_api is not used). */
extern adc_instance_ctrl_t g_adc0_ctrl;
extern const adc_cfg_t g_adc0_cfg;
extern const adc_channel_cfg_t g_adc0_channel_cfg;

#ifndef adc0_sample_callback
void adc0_sample_callback(adc_callback_args_t *p_args);
#endif
/** POE3 Instance. */
extern const poe3_instance_t g_mtu3_three_phase_poe;

/** Access the POE3 instance using these structures when calling API functions directly (::p_api is not used). */
extern poe3_instance_ctrl_t g_mtu3_three_phase_poe_ctrl;
extern const poe3_cfg_t g_mtu3_three_phase_poe_cfg;

#ifndef NULL
void NULL(poe3_callback_args_t *p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer6;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer6_ctrl;
extern const timer_cfg_t g_timer6_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer5;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer5_ctrl;
extern const timer_cfg_t g_timer5_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** MTU3 Three-Phase Instance. */
extern const three_phase_instance_t g_mtu3_m1_3ph_drv;

/** Access the MTU3 Three-Phase instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_three_phase_instance_ctrl_t g_mtu3_m1_3ph_drv_ctrl;
extern const three_phase_cfg_t g_mtu3_m1_3ph_drv_cfg;
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer4;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer4_ctrl;
extern const timer_cfg_t g_timer4_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer3;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer3_ctrl;
extern const timer_cfg_t g_timer3_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** MTU3 Three-Phase Instance. */
extern const three_phase_instance_t g_mtu3_m0_3ph_drv;

/** Access the MTU3 Three-Phase instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_three_phase_instance_ctrl_t g_mtu3_m0_3ph_drv_ctrl;
extern const three_phase_cfg_t g_mtu3_m0_3ph_drv_cfg;
/** Timer on GPT Instance. */
extern const timer_instance_t g_gpt2_slowLoop;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_gpt2_slowLoop_ctrl;
extern const timer_cfg_t g_gpt2_slowLoop_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_gpt1_fastLoop;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_gpt1_fastLoop_ctrl;
extern const timer_cfg_t g_gpt1_fastLoop_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_gpt0_hyperLoop;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_gpt0_hyperLoop_ctrl;
extern const timer_cfg_t g_gpt0_hyperLoop_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
