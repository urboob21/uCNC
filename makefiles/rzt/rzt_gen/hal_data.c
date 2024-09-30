/* generated HAL source file - do not edit */
#include "hal_data.h"

/* Macros to tie dynamic ELC links to ADC_TRIGGER_SYNC_ELC option in adc_trigger_t. */
#define ADC_TRIGGER_ADC0_A      ADC_TRIGGER_SYNC_ELC
#define ADC_TRIGGER_ADC0_B      ADC_TRIGGER_SYNC_ELC
#define ADC_TRIGGER_ADC1_A      ADC_TRIGGER_SYNC_ELC
#define ADC_TRIGGER_ADC1_B      ADC_TRIGGER_SYNC_ELC

tsu_instance_ctrl_t g_tsu0_ctrl;
const adc_cfg_t g_tsu0_cfg =
{ .unit = 0,
  .mode = ADC_MODE_SINGLE_SCAN,
  .resolution = ADC_RESOLUTION_12_BIT,
  .alignment = ADC_ALIGNMENT_RIGHT,
  .trigger = ADC_TRIGGER_SOFTWARE,
  .scan_end_irq = FSP_INVALID_VECTOR,
  .scan_end_ipl = (BSP_IRQ_DISABLED),
  .scan_end_b_irq = FSP_INVALID_VECTOR,
  .scan_end_b_ipl = (BSP_IRQ_DISABLED),
  .scan_end_c_irq = FSP_INVALID_VECTOR,
  .scan_end_c_ipl = (BSP_IRQ_DISABLED),
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = NULL, };
/* Instance structure to use this module. */
const adc_instance_t g_tsu0 =
{ .p_ctrl = &g_tsu0_ctrl, .p_cfg = &g_tsu0_cfg, .p_channel_cfg = NULL, .p_api = &g_adc_on_tsu, };
dsmif_channel_cfg_t g_dsmif1_channel_cfg2 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_12
dsmif_channel_cfg_t g_dsmif1_channel_cfg1 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_11
dsmif_channel_cfg_t g_dsmif1_channel_cfg0 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_10
dsmif_instance_ctrl_t g_dsmif1_ctrl;
#define DSMIF_MASK_UNIT_10  (DSMIF_UNIT0_MASK_10 | DSMIF_UNIT0_MASK_11 | DSMIF_UNIT0_MASK_12)
#define DSMIF_MASK_UNIT_11  (DSMIF_UNIT1_MASK_10 | DSMIF_UNIT1_MASK_11 | DSMIF_UNIT1_MASK_12)
/** DSMIF configuration extension. This extension is required and must be provided in adc_cfg_t::p_extend. */
const dsmif_extended_cfg_t g_dsmif1_cfg_extend =
{ .isel = 0,
  .iseh = 0,
  .sedm = DSMIF_SUM_ERR_DETECT_CHANNEL_0_2,
  .scmptbl = 0x00000,
  .scmptbh = 0x00000,
  .seel = 0,
  .seeh = 0,
  .cap_trig_a = DSMIF_CAPTURE_TRIGGER_NOT,
  .cap_trig_b = DSMIF_CAPTURE_TRIGGER_NOT,
  .cnt_init_trig = DSMIF_COUNTER_INIT_TRIGGER_NOT,
  .edge = DSMIF_CLOCK_EDGE_NEGATIVE,
#if (1 == BSP_FEATURE_DSMIF_DATA_FORMAT_SEL)
    .dfs                 = 0,
#endif
#ifndef DSMIF_CHANNEL_10
#define DSMIF_UNIT0_MASK_10   (0)
#define DSMIF_UNIT1_MASK_10   (0)
    .p_channel_cfgs[0]   = NULL,
#else
#define DSMIF_UNIT0_MASK_10   (DSMIF_CHANNEL_MASK_0)
#define DSMIF_UNIT1_MASK_10   (DSMIF_CHANNEL_MASK_3)
  .p_channel_cfgs[0] = &g_dsmif1_channel_cfg0,
#endif
#ifndef DSMIF_CHANNEL_11
#define DSMIF_UNIT0_MASK_11   (0)
#define DSMIF_UNIT1_MASK_11   (0)
    .p_channel_cfgs[1]   = NULL,
#else
#define DSMIF_UNIT0_MASK_11   (DSMIF_CHANNEL_MASK_1)
#define DSMIF_UNIT1_MASK_11   (DSMIF_CHANNEL_MASK_4)
  .p_channel_cfgs[1] = &g_dsmif1_channel_cfg1,
#endif
#ifndef DSMIF_CHANNEL_12
#define DSMIF_UNIT0_MASK_12   (0)
#define DSMIF_UNIT1_MASK_12   (0)
    .p_channel_cfgs[2]   = NULL,
#else
#define DSMIF_UNIT0_MASK_12   (DSMIF_CHANNEL_MASK_2)
#define DSMIF_UNIT1_MASK_12   (DSMIF_CHANNEL_MASK_5)
  .p_channel_cfgs[2] = &g_dsmif1_channel_cfg2,
#endif
  .channel_mask = (dsmif_channel_mask_t)DSMIF_MASK_UNIT_11, };
const adc_cfg_t g_dsmif1_cfg =
{ .unit = 1, .mode = ADC_MODE_SYNCHRONIZE_SCAN,
#if defined(VECTOR_NUMBER_DSMIF1_CDRUI)
    .scan_end_irq        = VECTOR_NUMBER_DSMIF1_CDRUI,
#else
  .scan_end_irq = FSP_INVALID_VECTOR,
#endif
  .scan_end_ipl = (BSP_IRQ_DISABLED),
  .p_callback = NULL, .p_context = NULL, .p_extend = &g_dsmif1_cfg_extend, };
/* Instance structure to use this module. */
const adc_instance_t g_dsmif1 =
{ .p_ctrl = &g_dsmif1_ctrl, .p_cfg = &g_dsmif1_cfg, .p_api = &g_adc_on_dsmif };
dsmif_channel_cfg_t g_dsmif0_channel_cfg2 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_02
dsmif_channel_cfg_t g_dsmif0_channel_cfg1 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_01
dsmif_channel_cfg_t g_dsmif0_channel_cfg0 =
{
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_ISR)
    .ioel                =
    {
        0,
        0,
        0
    },
    .ioeh                =
    {
        0,
        0,
        0
    },
#else
  .ioel = 0,
  .ioeh = 0,
#endif
  .ise = 0,
  .iue = 0, .ckdir = DSMIF_CLOCK_CTRL_SLAVE, .sedge = DSMIF_CLOCK_EDGE_NEGATIVE, .ckdiv =
          DSMIF_MASTER_CLOCK_25MHZ_PCLKH200,
  .cmsinc = DSMIF_FILTER_ORDER_3RD, .cmdec = 3, .sde = 0, .ocsinc = DSMIF_FILTER_ORDER_3RD, .ocdec = 3,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .ocmptbl             =
    {
        0x0,
        0x0,
        0x0
    },
    .ocmptbh             =
    {
        0x0,
        0x0,
        0x0
    },
#else
  .ocmptbl = 0x0,
  .ocmptbh = 0x0,
#endif
  .scntl = 0x0,
  .scnth = 0x0,
#if (3 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                =
    {
        0,
        0,
        0
    },
    .odeh                =
    {
        0,
        0,
        0
    },
#endif
#if (4 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_NOTIFY)
    .owne                =
    {
        0,
        0,
        0,
        0
    },
    .owfe                =
    {
        0,
        0,
        0,
        0
    },
    .ownm0_2             =
    {
        0,
        0,
        0
    },
    .ownm3               = 0,
#endif
#if (1 == BSP_FEATURE_DSMIF_OVERCURRENT_DETECT_CONTROL)
    .odel                = 0,
    .odeh                = 0,
#endif
  .cmsh = (dsmif_data_shift_t) 18,
  .ocsh = (dsmif_data_shift_t) 18 };
#define DSMIF_CHANNEL_00
dsmif_instance_ctrl_t g_dsmif0_ctrl;
#define DSMIF_MASK_UNIT_00  (DSMIF_UNIT0_MASK_00 | DSMIF_UNIT0_MASK_01 | DSMIF_UNIT0_MASK_02)
#define DSMIF_MASK_UNIT_01  (DSMIF_UNIT1_MASK_00 | DSMIF_UNIT1_MASK_01 | DSMIF_UNIT1_MASK_02)
/** DSMIF configuration extension. This extension is required and must be provided in adc_cfg_t::p_extend. */
const dsmif_extended_cfg_t g_dsmif0_cfg_extend =
{ .isel = 0,
  .iseh = 0,
  .sedm = DSMIF_SUM_ERR_DETECT_CHANNEL_0_2,
  .scmptbl = 0x00000,
  .scmptbh = 0x00000,
  .seel = 0,
  .seeh = 0,
  .cap_trig_a = DSMIF_CAPTURE_TRIGGER_NOT,
  .cap_trig_b = DSMIF_CAPTURE_TRIGGER_NOT,
  .cnt_init_trig = DSMIF_COUNTER_INIT_TRIGGER_NOT,
  .edge = DSMIF_CLOCK_EDGE_NEGATIVE,
#if (1 == BSP_FEATURE_DSMIF_DATA_FORMAT_SEL)
    .dfs                 = 0,
#endif
#ifndef DSMIF_CHANNEL_00
#define DSMIF_UNIT0_MASK_00   (0)
#define DSMIF_UNIT1_MASK_00   (0)
    .p_channel_cfgs[0]   = NULL,
#else
#define DSMIF_UNIT0_MASK_00   (DSMIF_CHANNEL_MASK_0)
#define DSMIF_UNIT1_MASK_00   (DSMIF_CHANNEL_MASK_3)
  .p_channel_cfgs[0] = &g_dsmif0_channel_cfg0,
#endif
#ifndef DSMIF_CHANNEL_01
#define DSMIF_UNIT0_MASK_01   (0)
#define DSMIF_UNIT1_MASK_01   (0)
    .p_channel_cfgs[1]   = NULL,
#else
#define DSMIF_UNIT0_MASK_01   (DSMIF_CHANNEL_MASK_1)
#define DSMIF_UNIT1_MASK_01   (DSMIF_CHANNEL_MASK_4)
  .p_channel_cfgs[1] = &g_dsmif0_channel_cfg1,
#endif
#ifndef DSMIF_CHANNEL_02
#define DSMIF_UNIT0_MASK_02   (0)
#define DSMIF_UNIT1_MASK_02   (0)
    .p_channel_cfgs[2]   = NULL,
#else
#define DSMIF_UNIT0_MASK_02   (DSMIF_CHANNEL_MASK_2)
#define DSMIF_UNIT1_MASK_02   (DSMIF_CHANNEL_MASK_5)
  .p_channel_cfgs[2] = &g_dsmif0_channel_cfg2,
#endif
  .channel_mask = (dsmif_channel_mask_t)DSMIF_MASK_UNIT_00, };
const adc_cfg_t g_dsmif0_cfg =
{ .unit = 0, .mode = ADC_MODE_SYNCHRONIZE_SCAN,
#if defined(VECTOR_NUMBER_DSMIF0_CDRUI)
    .scan_end_irq        = VECTOR_NUMBER_DSMIF0_CDRUI,
#else
  .scan_end_irq = FSP_INVALID_VECTOR,
#endif
  .scan_end_ipl = (BSP_IRQ_DISABLED),
  .p_callback = NULL, .p_context = NULL, .p_extend = &g_dsmif0_cfg_extend, };
/* Instance structure to use this module. */
const adc_instance_t g_dsmif0 =
{ .p_ctrl = &g_dsmif0_ctrl, .p_cfg = &g_dsmif0_cfg, .p_api = &g_adc_on_dsmif };
adc_instance_ctrl_t g_adc1_ctrl;
const adc_extended_cfg_t g_adc1_cfg_extend =
{ .add_average_count = ADC_ADD_OFF,
  .clearing = ADC_CLEAR_AFTER_READ_ON,
  .trigger_group_b = ADC_TRIGGER_SYNC_ELC,
  .double_trigger_mode = ADC_DOUBLE_TRIGGER_DISABLED,
  .adc_start_trigger_a = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_start_trigger_b = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_start_trigger_c_enabled = 0,
  .adc_start_trigger_c = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_elc_ctrl = ADC_ELC_SINGLE_SCAN,
#if ((1 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE) || (2 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE))
#if defined(VECTOR_NUMBER_ADC1_CMPAI)
    .window_a_irq        = VECTOR_NUMBER_ADC1_CMPAI,
#else
    .window_a_irq        = FSP_INVALID_VECTOR,
#endif
    .window_a_ipl        = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC1_CMPBI)
    .window_b_irq      = VECTOR_NUMBER_ADC1_CMPBI,
#else
    .window_b_irq      = FSP_INVALID_VECTOR,
#endif
    .window_b_ipl      = (BSP_IRQ_DISABLED),
#endif
#if (3 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE)
#if defined(VECTOR_NUMBER_ADC121_CMPAI)
    .window_a_irq        = VECTOR_NUMBER_ADC121_CMPAI,
#else
    .window_a_irq        = FSP_INVALID_VECTOR,
#endif
    .window_a_ipl        = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC121_CMPBI)
    .window_b_irq      = VECTOR_NUMBER_ADC121_CMPBI,
#else
    .window_b_irq      = FSP_INVALID_VECTOR,
#endif
    .window_b_ipl      = (BSP_IRQ_DISABLED),
#endif
        };
const adc_cfg_t g_adc1_cfg =
        { .unit = 1, .mode = ADC_MODE_SINGLE_SCAN, .resolution = ADC_RESOLUTION_12_BIT, .alignment =
                  (adc_alignment_t) ADC_ALIGNMENT_RIGHT,
          .trigger = ADC_TRIGGER_SOFTWARE, .p_callback = adc1_sample_callback, .p_context = NULL, .p_extend =
                  &g_adc1_cfg_extend,
#if ((1 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE) || (2 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE))
#if defined(VECTOR_NUMBER_ADC1_ADI)
    .scan_end_irq        = VECTOR_NUMBER_ADC1_ADI,
#else
    .scan_end_irq        = FSP_INVALID_VECTOR,
#endif
    .scan_end_ipl        = (7),
#if defined(VECTOR_NUMBER_ADC1_GBADI)
    .scan_end_b_irq      = VECTOR_NUMBER_ADC1_GBADI,
#else
    .scan_end_b_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_b_ipl      = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC1_GCADI)
    .scan_end_c_irq      = VECTOR_NUMBER_ADC1_GCADI,
#else
    .scan_end_c_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_c_ipl      = (BSP_IRQ_DISABLED),
#endif
#if (3 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE)
#if defined(VECTOR_NUMBER_ADC121_ADI)
    .scan_end_irq        = VECTOR_NUMBER_ADC121_ADI,
#else
    .scan_end_irq        = FSP_INVALID_VECTOR,
#endif
    .scan_end_ipl        = (7),
#if defined(VECTOR_NUMBER_ADC121_GBADI)
    .scan_end_b_irq      = VECTOR_NUMBER_ADC121_GBADI,
#else
    .scan_end_b_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_b_ipl      = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC121_GCADI)
    .scan_end_c_irq      = VECTOR_NUMBER_ADC121_GCADI,
#else
    .scan_end_c_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_c_ipl      = (BSP_IRQ_DISABLED),
#endif
        };
#if ((0) | (0))
const adc_window_cfg_t g_adc1_window_cfg =
{
    .compare_mask        =  0,
    .compare_mode_mask   =  0,
    .compare_cfg         = (0) | (0) | (0),
    .compare_ref_low     = 0,
    .compare_ref_high    = 0,
    .compare_b_channel   = (ADC_WINDOW_B_CHANNEL_0),
    .compare_b_mode      = (ADC_WINDOW_B_MODE_LESS_THAN_OR_OUTSIDE),
    .compare_b_ref_low   = 0,
    .compare_b_ref_high  = 0,
};
#endif
const adc_channel_cfg_t g_adc1_channel_cfg =
        { .scan_mask = ADC_MASK_CHANNEL_0 | ADC_MASK_CHANNEL_1 | ADC_MASK_CHANNEL_2 | ADC_MASK_CHANNEL_3
                | ADC_MASK_CHANNEL_4 | ADC_MASK_CHANNEL_5 | ADC_MASK_CHANNEL_6 | ADC_MASK_CHANNEL_7 | 0,
          .scan_mask_group_b = 0, .priority_group_a = ADC_GROUP_A_PRIORITY_OFF, .add_mask = 0, .sample_hold_mask = 0, .sample_hold_states =
                  24,
          .scan_mask_group_c = 0,
#if ((0) | (0))
    .p_window_cfg        = (adc_window_cfg_t *) &g_adc1_window_cfg,
#else
          .p_window_cfg = NULL,
#endif
        };
/* Instance structure to use this module. */
const adc_instance_t g_adc1 =
{ .p_ctrl = &g_adc1_ctrl, .p_cfg = &g_adc1_cfg, .p_channel_cfg = &g_adc1_channel_cfg, .p_api = &g_adc_on_adc };
adc_instance_ctrl_t g_adc0_ctrl;
const adc_extended_cfg_t g_adc0_cfg_extend =
{ .add_average_count = ADC_ADD_OFF,
  .clearing = ADC_CLEAR_AFTER_READ_ON,
  .trigger_group_b = ADC_TRIGGER_SYNC_ELC,
  .double_trigger_mode = ADC_DOUBLE_TRIGGER_DISABLED,
  .adc_start_trigger_a = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_start_trigger_b = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_start_trigger_c_enabled = 0,
  .adc_start_trigger_c = ADC_ACTIVE_TRIGGER_DISABLED,
  .adc_elc_ctrl = ADC_ELC_SINGLE_SCAN,
#if ((1 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE) || (2 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE))
#if defined(VECTOR_NUMBER_ADC0_CMPAI)
    .window_a_irq        = VECTOR_NUMBER_ADC0_CMPAI,
#else
    .window_a_irq        = FSP_INVALID_VECTOR,
#endif
    .window_a_ipl        = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC0_CMPBI)
    .window_b_irq      = VECTOR_NUMBER_ADC0_CMPBI,
#else
    .window_b_irq      = FSP_INVALID_VECTOR,
#endif
    .window_b_ipl      = (BSP_IRQ_DISABLED),
#endif
#if (3 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE)
#if defined(VECTOR_NUMBER_ADC120_CMPAI)
    .window_a_irq        = VECTOR_NUMBER_ADC120_CMPAI,
#else
    .window_a_irq        = FSP_INVALID_VECTOR,
#endif
    .window_a_ipl        = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC120_CMPBI)
    .window_b_irq      = VECTOR_NUMBER_ADC120_CMPBI,
#else
    .window_b_irq      = FSP_INVALID_VECTOR,
#endif
    .window_b_ipl      = (BSP_IRQ_DISABLED),
#endif
        };
const adc_cfg_t g_adc0_cfg =
        { .unit = 0, .mode = ADC_MODE_SINGLE_SCAN, .resolution = ADC_RESOLUTION_12_BIT, .alignment =
                  (adc_alignment_t) ADC_ALIGNMENT_RIGHT,
          .trigger = ADC_TRIGGER_SOFTWARE, .p_callback = adc0_sample_callback, .p_context = NULL, .p_extend =
                  &g_adc0_cfg_extend,
#if ((1 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE) || (2 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE))
#if defined(VECTOR_NUMBER_ADC0_ADI)
    .scan_end_irq        = VECTOR_NUMBER_ADC0_ADI,
#else
    .scan_end_irq        = FSP_INVALID_VECTOR,
#endif
    .scan_end_ipl        = (7),
#if defined(VECTOR_NUMBER_ADC0_GBADI)
    .scan_end_b_irq      = VECTOR_NUMBER_ADC0_GBADI,
#else
    .scan_end_b_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_b_ipl      = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC0_GCADI)
    .scan_end_c_irq      = VECTOR_NUMBER_ADC0_GCADI,
#else
    .scan_end_c_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_c_ipl      = (BSP_IRQ_DISABLED),
#endif
#if (3 == BSP_FEATURE_ADC_REGISTER_MASK_TYPE)
#if defined(VECTOR_NUMBER_ADC120_ADI)
    .scan_end_irq        = VECTOR_NUMBER_ADC120_ADI,
#else
    .scan_end_irq        = FSP_INVALID_VECTOR,
#endif
    .scan_end_ipl        = (7),
#if defined(VECTOR_NUMBER_ADC120_GBADI)
    .scan_end_b_irq      = VECTOR_NUMBER_ADC120_GBADI,
#else
    .scan_end_b_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_b_ipl      = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_ADC120_GCADI)
    .scan_end_c_irq      = VECTOR_NUMBER_ADC120_GCADI,
#else
    .scan_end_c_irq      = FSP_INVALID_VECTOR,
#endif
    .scan_end_c_ipl      = (BSP_IRQ_DISABLED),
#endif
        };
#if ((0) | (0))
const adc_window_cfg_t g_adc0_window_cfg =
{
    .compare_mask        =  0,
    .compare_mode_mask   =  0,
    .compare_cfg         = (0) | (0) | (0),
    .compare_ref_low     = 0,
    .compare_ref_high    = 0,
    .compare_b_channel   = (ADC_WINDOW_B_CHANNEL_0),
    .compare_b_mode      = (ADC_WINDOW_B_MODE_LESS_THAN_OR_OUTSIDE),
    .compare_b_ref_low   = 0,
    .compare_b_ref_high  = 0,
};
#endif
const adc_channel_cfg_t g_adc0_channel_cfg =
        { .scan_mask = ADC_MASK_CHANNEL_0 | ADC_MASK_CHANNEL_1 | ADC_MASK_CHANNEL_2 | ADC_MASK_CHANNEL_3
                | ADC_MASK_CHANNEL_4 | ADC_MASK_CHANNEL_5 | ADC_MASK_CHANNEL_6 | ADC_MASK_CHANNEL_7 | 0,
          .scan_mask_group_b = 0, .priority_group_a = ADC_GROUP_A_PRIORITY_OFF, .add_mask = 0, .sample_hold_mask = 0, .sample_hold_states =
                  24,
          .scan_mask_group_c = 0,
#if ((0) | (0))
    .p_window_cfg        = (adc_window_cfg_t *) &g_adc0_window_cfg,
#else
          .p_window_cfg = NULL,
#endif
        };
/* Instance structure to use this module. */
const adc_instance_t g_adc0 =
{ .p_ctrl = &g_adc0_ctrl, .p_cfg = &g_adc0_cfg, .p_channel_cfg = &g_adc0_channel_cfg, .p_api = &g_adc_on_adc };
poe3_instance_ctrl_t g_mtu3_three_phase_poe_ctrl;
/* Setting structure for pwm pin. */
static const poe3_pwm_pin_setting_t g_mtu3_three_phase_poe_pwm_pin_setting[] =
{
{ .pwm_pin_select = POE3_PIN_SELECT_0, .hiz_output_enable = false },
  { .pwm_pin_select = POE3_PIN_SELECT_0, .hiz_output_enable = false },
  { .pwm_pin_select = POE3_PIN_SELECT_0, .hiz_output_enable = false },
  { .pwm_pin_select = POE3_PIN_SELECT_0, .hiz_output_enable = false }, };
/* Setting structure for complementary pwm pin. */
static const poe3_complementary_pwm_setting_t g_mtu3_three_phase_poe_complementary_pwm_setting[] =
{
{ .pin_setting[0] =
{ .positive_pwm_pin_select = POE3_PIN_SELECT_0,
  .negative_pwm_pin_select = POE3_PIN_SELECT_0,
  .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
  .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
  .hiz_output_enable = true },
  .pin_setting[1] =
  { .positive_pwm_pin_select = POE3_PIN_SELECT_0,
    .negative_pwm_pin_select = POE3_PIN_SELECT_0,
    .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
    .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
    .hiz_output_enable = true },
  .pin_setting[2] =
  { .positive_pwm_pin_select = POE3_PIN_SELECT_0,
    .negative_pwm_pin_select = POE3_PIN_SELECT_0,
    .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
    .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_LOW,
    .hiz_output_enable = true }, },
  { .pin_setting[0] =
  { .positive_pwm_pin_select = POE3_PIN_SELECT_0,
    .negative_pwm_pin_select = POE3_PIN_SELECT_0,
    .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
    .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
    .hiz_output_enable = true },
    .pin_setting[1] =
    { .positive_pwm_pin_select = POE3_PIN_SELECT_0,
      .negative_pwm_pin_select = POE3_PIN_SELECT_0,
      .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
      .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
      .hiz_output_enable = true },
    .pin_setting[2] =
    { .positive_pwm_pin_select = POE3_PIN_SELECT_0,
      .negative_pwm_pin_select = POE3_PIN_SELECT_0,
      .positive_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
      .negative_pwm_pin_active_level = POE3_ACTIVE_LEVEL_SETTING_NONE,
      .hiz_output_enable = true } }, };
/* Setting structure for short circuit output. */
static const poe3_output_short_circuit_setting_t g_mtu3_three_phase_poe_short_circuit[] =
{
{ .interrupt_enable = false, .hiz_output_enable = false },

  { .interrupt_enable = false, .hiz_output_enable = false }, };
/** POE3 extended configuration for POE3 HAL driver */
static const poe3_extended_cfg_t g_mtu3_three_phase_poe_extended_cfg =
{ .poe0 =
{ .mode = POE3_HIZ_MODE_FALLING_EDGE, .interrupt_enable = false, },
  .poe4 =
  { .mode = POE3_HIZ_MODE_FALLING_EDGE, .interrupt_enable = false, },
  .poe8 =
  { .mode = POE3_HIZ_MODE_FALLING_EDGE, .interrupt_enable = false, },
  .poe10 =
  { .mode = POE3_HIZ_MODE_FALLING_EDGE, .interrupt_enable = false, },
  .poe11 =
  { .mode = POE3_HIZ_MODE_FALLING_EDGE, .interrupt_enable = false, },

  .mtu0_control_channel_mask = (0U),
  .mtu3_4_control_channel_mask = (0U), .mtu6_7_control_channel_mask = (0U),

#if BSP_FEATURE_POE3_ERROR_SIGNAL_TYPE == 2
    .dsmif0_error_1 = false,
    .dsmif1_error_1 = false,
#endif
  .dsmif0_error = false,
  .dsmif1_error = false,

  .oei1_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_OEI1)
    .oei1_irq = VECTOR_NUMBER_OEI1,
#else
  .oei1_irq = FSP_INVALID_VECTOR,
#endif

  .oei2_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_OEI2)
    .oei2_irq = VECTOR_NUMBER_OEI2,
#else
  .oei2_irq = FSP_INVALID_VECTOR,
#endif

  .oei3_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_OEI3)
    .oei3_irq = VECTOR_NUMBER_OEI3,
#else
  .oei3_irq = FSP_INVALID_VECTOR,
#endif

  .oei4_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_OEI4)
    .oei4_irq = VECTOR_NUMBER_OEI4,
#else
  .oei4_irq = FSP_INVALID_VECTOR,
#endif
        };

/** POE3 setting. */
const poe3_cfg_t g_mtu3_three_phase_poe_cfg =
{ .pwm_pin = sizeof(g_mtu3_three_phase_poe_pwm_pin_setting) / sizeof(g_mtu3_three_phase_poe_pwm_pin_setting[0]),
  .p_pwm_pin_setting = &g_mtu3_three_phase_poe_pwm_pin_setting[0],

  .complementary_pwm_pin = sizeof(g_mtu3_three_phase_poe_complementary_pwm_setting)
          / sizeof(g_mtu3_three_phase_poe_complementary_pwm_setting[0]),
  .p_complementary_pwm_pin_setting = &g_mtu3_three_phase_poe_complementary_pwm_setting[0],

  .short_circuit = sizeof(g_mtu3_three_phase_poe_short_circuit) / sizeof(g_mtu3_three_phase_poe_short_circuit[0]),
  .p_short_circuit_setting = &g_mtu3_three_phase_poe_short_circuit[0],

  .oscillation_stop_hiz_output_enable = false,

  .p_context = NULL,
  .p_callback = NULL,
  .p_extend = &g_mtu3_three_phase_poe_extended_cfg, };
/* Instance structure to use this module. */
const poe3_instance_t g_mtu3_three_phase_poe =
{ .p_ctrl = &g_mtu3_three_phase_poe_ctrl, .p_cfg = &g_mtu3_three_phase_poe_cfg, .p_api = &g_poe30_on_poe3 };
mtu3_instance_ctrl_t g_timer6_ctrl;
#if 0
const mtu3_extended_uvw_cfg_t g_timer6_uvw_extend =
{
    .tgru_val                       = 0x0000,
    .tgrv_val                       = 0x0000,
    .tgrw_val                       = 0x0000,
    .mtu3_clk_div_u                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_v                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_w                 = MTU3_DIV_UVW_PCLKH_1,
    .output_pin_level_u             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_v             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_w             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .noise_filter_mtioc_setting_uvw = (mtu3_noise_filter_setting_uvw_t)(MTU3_NOISE_FILTER_UVW_DISABLE),
    .noise_filter_mtioc_clk_uvw     = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

    .capture_u_ipl                  = (BSP_IRQ_DISABLED),
    .capture_v_ipl                  = (BSP_IRQ_DISABLED),
    .capture_w_ipl                  = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
    .capture_u_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
    .capture_v_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
    .capture_w_irq                  = FSP_INVALID_VECTOR,
#endif
};
const mtu3_extended_pwm_cfg_t g_timer6_pwm_extend =
{
    .interrupt_skip_mode_a          = MTU3_INTERRUPT_SKIP_MODE_1,
    .interrupt_skip_mode_b          = MTU3_INTERRUPT_SKIP_MODE_1,
    .adc_a_compare_match            = 0x0000,
    .adc_b_compare_match            = 0x0000,
    .interrupt_skip_count_tciv4     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia3     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tciv7     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia6     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
};
#endif
const mtu3_extended_cfg_t g_timer6_extend =
{ .tgra_val = 0,
  .tgrb_val = 0,
  .tgrc_val = 0,
  .tgrd_val = 0,
  .mtu3_clk_div = MTU3_DIV_PCLKH_4,
  .clk_edge = MTU3_CLOCK_EDGE_RISING,
  .mtu3_clear = MTU3_TCNT_CLEAR_DISABLE,
  .mtioc_ctrl_setting =
  { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT, .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT },
  .capture_a_ipl = (BSP_IRQ_DISABLED),
  .capture_b_ipl = (BSP_IRQ_DISABLED),
  .bit_mode = MTU3_BIT_MODE_NORMAL_32BIT,
  .counting_mode = MTU3_PHASE_COUNTING_MODE_NONE,
  .external_clock = MTU3_EXTERNAL_CLOCK_MTCLKA_B,
#if defined(VECTOR_NUMBER_TGIA7)
    .capture_a_irq       = VECTOR_NUMBER_TGIA7,
#else
  .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB7)
    .capture_b_irq       = VECTOR_NUMBER_TGIB7,
#else
  .capture_b_irq = FSP_INVALID_VECTOR,
#endif
  .noise_filter_mtioc_setting = (mtu3_noise_filter_setting_t) (MTU3_NOISE_FILTER_DISABLE),
  .noise_filter_mtioc_clk = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
  .noise_filter_mtclk_setting = (mtu3_noise_filter_mtclk_setting_t) (MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
  .noise_filter_mtclk_clk = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
  .adc_request_enable = 0,
  .mtu3_elc_event_operation =
  { .mtu0_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu3_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu4_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE },
#if 0
    .p_uvw_cfg                   = &g_timer6_uvw_extend,
    .p_pwm_cfg                   = &g_timer6_pwm_extend,
#else
  .p_uvw_cfg = NULL,
  .p_pwm_cfg = NULL,
#endif
        };
const timer_cfg_t g_timer6_cfg =
{ .mode = TIMER_MODE_PERIODIC,
  .channel = 7,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer6_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TCIV7)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV7,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer6 =
{ .p_ctrl = &g_timer6_ctrl, .p_cfg = &g_timer6_cfg, .p_api = &g_timer_on_mtu3 };
mtu3_instance_ctrl_t g_timer5_ctrl;
#if 0
const mtu3_extended_uvw_cfg_t g_timer5_uvw_extend =
{
    .tgru_val                       = 0x0000,
    .tgrv_val                       = 0x0000,
    .tgrw_val                       = 0x0000,
    .mtu3_clk_div_u                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_v                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_w                 = MTU3_DIV_UVW_PCLKH_1,
    .output_pin_level_u             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_v             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_w             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .noise_filter_mtioc_setting_uvw = (mtu3_noise_filter_setting_uvw_t)(MTU3_NOISE_FILTER_UVW_DISABLE),
    .noise_filter_mtioc_clk_uvw     = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

    .capture_u_ipl                  = (BSP_IRQ_DISABLED),
    .capture_v_ipl                  = (BSP_IRQ_DISABLED),
    .capture_w_ipl                  = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
    .capture_u_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
    .capture_v_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
    .capture_w_irq                  = FSP_INVALID_VECTOR,
#endif
};
const mtu3_extended_pwm_cfg_t g_timer5_pwm_extend =
{
    .interrupt_skip_mode_a          = MTU3_INTERRUPT_SKIP_MODE_1,
    .interrupt_skip_mode_b          = MTU3_INTERRUPT_SKIP_MODE_1,
    .adc_a_compare_match            = 0x0000,
    .adc_b_compare_match            = 0x0000,
    .interrupt_skip_count_tciv4     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia3     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tciv7     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia6     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
};
#endif
const mtu3_extended_cfg_t g_timer5_extend =
{ .tgra_val = 0xa28,
  .tgrb_val = 0,
  .tgrc_val = 0xa28,
  .tgrd_val = 0,
  .mtu3_clk_div = MTU3_DIV_PCLKH_4,
  .clk_edge = MTU3_CLOCK_EDGE_RISING,
  .mtu3_clear = MTU3_TCNT_CLEAR_DISABLE,
  .mtioc_ctrl_setting =
  { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT, .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT },
  .capture_a_ipl = (BSP_IRQ_DISABLED),
  .capture_b_ipl = (BSP_IRQ_DISABLED),
  .bit_mode = MTU3_BIT_MODE_NORMAL_32BIT,
  .counting_mode = MTU3_PHASE_COUNTING_MODE_NONE,
  .external_clock = MTU3_EXTERNAL_CLOCK_MTCLKA_B,
#if defined(VECTOR_NUMBER_TGIA6)
    .capture_a_irq       = VECTOR_NUMBER_TGIA6,
#else
  .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB6)
    .capture_b_irq       = VECTOR_NUMBER_TGIB6,
#else
  .capture_b_irq = FSP_INVALID_VECTOR,
#endif
  .noise_filter_mtioc_setting = (mtu3_noise_filter_setting_t) (MTU3_NOISE_FILTER_DISABLE),
  .noise_filter_mtioc_clk = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
  .noise_filter_mtclk_setting = (mtu3_noise_filter_mtclk_setting_t) (MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
  .noise_filter_mtclk_clk = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
  .adc_request_enable = 0,
  .mtu3_elc_event_operation =
  { .mtu0_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu3_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu4_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE },
#if 0
    .p_uvw_cfg                   = &g_timer5_uvw_extend,
    .p_pwm_cfg                   = &g_timer5_pwm_extend,
#else
  .p_uvw_cfg = NULL,
  .p_pwm_cfg = NULL,
#endif
        };
const timer_cfg_t g_timer5_cfg =
{ .mode = TIMER_MODE_PERIODIC,
  .channel = 6,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer5_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TCIV6)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV6,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer5 =
{ .p_ctrl = &g_timer5_ctrl, .p_cfg = &g_timer5_cfg, .p_api = &g_timer_on_mtu3 };
mtu3_three_phase_instance_ctrl_t g_mtu3_m1_3ph_drv_ctrl;
const mtu3_three_phase_extended_cfg_t g_mtu3_m1_3ph_drv_extend =
{ .pwm_mode = MTU3_THREE_PHASE_PWM_MODE_1, .period_half = 0x1388 / 2, .dead_time = 0x64, .duty_val =
{ 0, 0, 0 },
  .period_out = MTU3_THREE_PHASE_PSYE_TOGGLE, .level = MTU3_THREE_PHASE_OUTPUT_LEVEL_ACTIVE_HIGH, .duty_double =
  { 0, 0, 0 },
  .sync = MTU3_THREE_PHASE_SYNCHRONOUS_CHANNEL_DISABLE };
const three_phase_cfg_t g_mtu3_m1_3ph_drv_cfg =
{ .buffer_mode = THREE_PHASE_BUFFER_MODE_SINGLE, .p_timer_instance =
{ &g_timer5, &g_timer6 },
  .channel_mask = (1 << 6) | (1 << 7), .p_context = NULL, .p_extend = &g_mtu3_m1_3ph_drv_extend, };
/* Instance structure to use this module. */
const three_phase_instance_t g_mtu3_m1_3ph_drv =
{ .p_ctrl = &g_mtu3_m1_3ph_drv_ctrl, .p_cfg = &g_mtu3_m1_3ph_drv_cfg, .p_api = &g_three_phase_on_mtu3_three_phase };
mtu3_instance_ctrl_t g_timer4_ctrl;
#if 1
const mtu3_extended_uvw_cfg_t g_timer4_uvw_extend =
{ .tgru_val = 0x0000, .tgrv_val = 0x0000, .tgrw_val = 0x0000, .mtu3_clk_div_u = MTU3_DIV_UVW_PCLKH_1, .mtu3_clk_div_v =
          MTU3_DIV_UVW_PCLKH_1,
  .mtu3_clk_div_w = MTU3_DIV_UVW_PCLKH_1, .output_pin_level_u = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC, .output_pin_level_v =
          MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
  .output_pin_level_w = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC, .noise_filter_mtioc_setting_uvw =
          (mtu3_noise_filter_setting_uvw_t) (MTU3_NOISE_FILTER_UVW_DISABLE),
  .noise_filter_mtioc_clk_uvw = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

  .capture_u_ipl = (BSP_IRQ_DISABLED),
  .capture_v_ipl = (BSP_IRQ_DISABLED), .capture_w_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
  .capture_u_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
  .capture_v_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
  .capture_w_irq = FSP_INVALID_VECTOR,
#endif
        };
const mtu3_extended_pwm_cfg_t g_timer4_pwm_extend =
{ .interrupt_skip_mode_a = MTU3_INTERRUPT_SKIP_MODE_1,
  .interrupt_skip_mode_b = MTU3_INTERRUPT_SKIP_MODE_1,
  .adc_a_compare_match = 0x0000,
  .adc_b_compare_match = 0x0000,
  .interrupt_skip_count_tciv4 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgia3 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tciv7 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgia6 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0, };
#endif
const mtu3_extended_cfg_t g_timer4_extend =
{ .tgra_val = 0,
  .tgrb_val = 0,
  .tgrc_val = 0,
  .tgrd_val = 0,
  .mtu3_clk_div = MTU3_DIV_PCLKH_4,
  .clk_edge = MTU3_CLOCK_EDGE_RISING,
  .mtu3_clear = MTU3_TCNT_CLEAR_DISABLE,
  .mtioc_ctrl_setting =
  { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT, .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT },
  .capture_a_ipl = (BSP_IRQ_DISABLED),
  .capture_b_ipl = (BSP_IRQ_DISABLED),
  .bit_mode = MTU3_BIT_MODE_NORMAL_32BIT,
  .counting_mode = MTU3_PHASE_COUNTING_MODE_NONE,
  .external_clock = MTU3_EXTERNAL_CLOCK_MTCLKA_B,
#if defined(VECTOR_NUMBER_TGIA4)
    .capture_a_irq       = VECTOR_NUMBER_TGIA4,
#else
  .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB4)
    .capture_b_irq       = VECTOR_NUMBER_TGIB4,
#else
  .capture_b_irq = FSP_INVALID_VECTOR,
#endif
  .noise_filter_mtioc_setting = (mtu3_noise_filter_setting_t) (MTU3_NOISE_FILTER_DISABLE),
  .noise_filter_mtioc_clk = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
  .noise_filter_mtclk_setting = (mtu3_noise_filter_mtclk_setting_t) (MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
  .noise_filter_mtclk_clk = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
  .adc_request_enable = 0,
  .mtu3_elc_event_operation =
  { .mtu0_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu3_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu4_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE },
#if 1
  .p_uvw_cfg = &g_timer4_uvw_extend,
  .p_pwm_cfg = &g_timer4_pwm_extend,
#else
    .p_uvw_cfg                   = NULL,
    .p_pwm_cfg                   = NULL,
#endif
        };
const timer_cfg_t g_timer4_cfg =
{ .mode = TIMER_MODE_PERIODIC,
  .channel = 4,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer4_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TCIV4)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV4,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer4 =
{ .p_ctrl = &g_timer4_ctrl, .p_cfg = &g_timer4_cfg, .p_api = &g_timer_on_mtu3 };
mtu3_instance_ctrl_t g_timer3_ctrl;
#if 1
const mtu3_extended_uvw_cfg_t g_timer3_uvw_extend =
{ .tgru_val = 0x0000, .tgrv_val = 0x0000, .tgrw_val = 0x0000, .mtu3_clk_div_u = MTU3_DIV_UVW_PCLKH_1, .mtu3_clk_div_v =
          MTU3_DIV_UVW_PCLKH_1,
  .mtu3_clk_div_w = MTU3_DIV_UVW_PCLKH_1, .output_pin_level_u = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC, .output_pin_level_v =
          MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
  .output_pin_level_w = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC, .noise_filter_mtioc_setting_uvw =
          (mtu3_noise_filter_setting_uvw_t) (MTU3_NOISE_FILTER_UVW_DISABLE),
  .noise_filter_mtioc_clk_uvw = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

  .capture_u_ipl = (BSP_IRQ_DISABLED),
  .capture_v_ipl = (BSP_IRQ_DISABLED), .capture_w_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
  .capture_u_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
  .capture_v_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
  .capture_w_irq = FSP_INVALID_VECTOR,
#endif
        };
const mtu3_extended_pwm_cfg_t g_timer3_pwm_extend =
{ .interrupt_skip_mode_a = MTU3_INTERRUPT_SKIP_MODE_1,
  .interrupt_skip_mode_b = MTU3_INTERRUPT_SKIP_MODE_1,
  .adc_a_compare_match = 0x0000,
  .adc_b_compare_match = 0x0000,
  .interrupt_skip_count_tciv4 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgia3 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tciv7 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgia6 = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0, };
#endif
const mtu3_extended_cfg_t g_timer3_extend =
{ .tgra_val = 0xa28,
  .tgrb_val = 0,
  .tgrc_val = 0xa28,
  .tgrd_val = 0,
  .mtu3_clk_div = MTU3_DIV_PCLKH_4,
  .clk_edge = MTU3_CLOCK_EDGE_RISING,
  .mtu3_clear = MTU3_TCNT_CLEAR_DISABLE,
  .mtioc_ctrl_setting =
  { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT, .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT },
  .capture_a_ipl = (BSP_IRQ_DISABLED),
  .capture_b_ipl = (BSP_IRQ_DISABLED),
  .bit_mode = MTU3_BIT_MODE_NORMAL_32BIT,
  .counting_mode = MTU3_PHASE_COUNTING_MODE_NONE,
  .external_clock = MTU3_EXTERNAL_CLOCK_MTCLKA_B,
#if defined(VECTOR_NUMBER_TGIA3)
    .capture_a_irq       = VECTOR_NUMBER_TGIA3,
#else
  .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB3)
    .capture_b_irq       = VECTOR_NUMBER_TGIB3,
#else
  .capture_b_irq = FSP_INVALID_VECTOR,
#endif
  .noise_filter_mtioc_setting = (mtu3_noise_filter_setting_t) (MTU3_NOISE_FILTER_DISABLE),
  .noise_filter_mtioc_clk = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
  .noise_filter_mtclk_setting = (mtu3_noise_filter_mtclk_setting_t) (MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
  .noise_filter_mtclk_clk = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
  .adc_request_enable = 0,
  .mtu3_elc_event_operation =
  { .mtu0_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu3_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE,
    .mtu4_elc_operation = MTU3_EVENT_OPERATION_SELECT_DISABLE },
#if 1
  .p_uvw_cfg = &g_timer3_uvw_extend,
  .p_pwm_cfg = &g_timer3_pwm_extend,
#else
    .p_uvw_cfg                   = NULL,
    .p_pwm_cfg                   = NULL,
#endif
        };
const timer_cfg_t g_timer3_cfg =
{ .mode = TIMER_MODE_PERIODIC,
  .channel = 3,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer3_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TCIV3)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV3,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer3 =
{ .p_ctrl = &g_timer3_ctrl, .p_cfg = &g_timer3_cfg, .p_api = &g_timer_on_mtu3 };
mtu3_three_phase_instance_ctrl_t g_mtu3_m0_3ph_drv_ctrl;
const mtu3_three_phase_extended_cfg_t g_mtu3_m0_3ph_drv_extend =
{ .pwm_mode = MTU3_THREE_PHASE_PWM_MODE_1, .period_half = 0x1388 / 2, .dead_time = 0x64, .duty_val =
{ 0, 0, 0 },
  .period_out = MTU3_THREE_PHASE_PSYE_TOGGLE, .level = MTU3_THREE_PHASE_OUTPUT_LEVEL_ACTIVE_HIGH, .duty_double =
  { 0, 0, 0 },
  .sync = MTU3_THREE_PHASE_SYNCHRONOUS_CHANNEL_DISABLE };
const three_phase_cfg_t g_mtu3_m0_3ph_drv_cfg =
{ .buffer_mode = THREE_PHASE_BUFFER_MODE_SINGLE, .p_timer_instance =
{ &g_timer3, &g_timer4 },
  .channel_mask = (1 << 3) | (1 << 4), .p_context = NULL, .p_extend = &g_mtu3_m0_3ph_drv_extend, };
/* Instance structure to use this module. */
const three_phase_instance_t g_mtu3_m0_3ph_drv =
{ .p_ctrl = &g_mtu3_m0_3ph_drv_ctrl, .p_cfg = &g_mtu3_m0_3ph_drv_cfg, .p_api = &g_three_phase_on_mtu3_three_phase };
gpt_instance_ctrl_t g_gpt2_slowLoop_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_gpt2_slowLoop_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT0_UDF,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      =  GPT_OUTPUT_DISABLE_NONE,
    .adc_trigger         =  GPT_ADC_TRIGGER_NONE,
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext1  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext2  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_func_ovf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_unf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_a  = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_b  = GPT_INTERRUPT_SKIP_SELECT_NONE,
};
#endif
const gpt_extended_cfg_t g_gpt2_slowLoop_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
#if (0 == (0))
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE),
#else
    .count_up_source     = (gpt_source_t) ((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0x000FFFFU),
    .count_down_source   = (gpt_source_t) (((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0xFFFF0000U) >> 16),
#endif
          .capture_a_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_gpt2_slowLoop_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT0_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_gpt2_slowLoop_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 10.73741824 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x100000000,
  .duty_cycle_counts = 0x80000000, .source_div = (timer_source_div_t) 0, .channel = GPT_CHANNEL_UNIT0_0, .p_callback =
          NULL,
  .p_context = NULL, .p_extend = &g_gpt2_slowLoop_extend, .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_gpt2_slowLoop =
{ .p_ctrl = &g_gpt2_slowLoop_ctrl, .p_cfg = &g_gpt2_slowLoop_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_gpt1_fastLoop_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_gpt1_fastLoop_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT0_UDF,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      =  GPT_OUTPUT_DISABLE_NONE,
    .adc_trigger         =  GPT_ADC_TRIGGER_NONE,
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext1  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext2  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_func_ovf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_unf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_a  = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_b  = GPT_INTERRUPT_SKIP_SELECT_NONE,
};
#endif
const gpt_extended_cfg_t g_gpt1_fastLoop_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
#if (0 == (0))
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE),
#else
    .count_up_source     = (gpt_source_t) ((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0x000FFFFU),
    .count_down_source   = (gpt_source_t) (((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0xFFFF0000U) >> 16),
#endif
          .capture_a_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_gpt1_fastLoop_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT0_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_gpt1_fastLoop_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 10.73741824 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x100000000,
  .duty_cycle_counts = 0x80000000, .source_div = (timer_source_div_t) 0, .channel = GPT_CHANNEL_UNIT0_0, .p_callback =
          NULL,
  .p_context = NULL, .p_extend = &g_gpt1_fastLoop_extend, .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_gpt1_fastLoop =
{ .p_ctrl = &g_gpt1_fastLoop_ctrl, .p_cfg = &g_gpt1_fastLoop_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_gpt0_hyperLoop_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_gpt0_hyperLoop_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT0_UDF,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      =  GPT_OUTPUT_DISABLE_NONE,
    .adc_trigger         =  GPT_ADC_TRIGGER_NONE,
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext1  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext2  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_func_ovf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_unf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_a  = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_b  = GPT_INTERRUPT_SKIP_SELECT_NONE,
};
#endif
const gpt_extended_cfg_t g_gpt0_hyperLoop_extend =
        { .gtioca =
        { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = false, .stop_level = GPT_PIN_LEVEL_LOW },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
#if (0 == (0))
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE),
#else
    .count_up_source     = (gpt_source_t) ((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0x000FFFFU),
    .count_down_source   = (gpt_source_t) (((GPT_PHASE_COUNTING_MODE_1_UP | (GPT_PHASE_COUNTING_MODE_1_DN << 16)) & 0xFFFF0000U) >> 16),
#endif
          .capture_a_source = (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_gpt0_hyperLoop_pwm_extend,
#else
          .p_pwm_cfg = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT0_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_gpt0_hyperLoop_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 10.73741824 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x100000000,
  .duty_cycle_counts = 0x80000000, .source_div = (timer_source_div_t) 0, .channel = GPT_CHANNEL_UNIT0_0, .p_callback =
          NULL,
  .p_context = NULL, .p_extend = &g_gpt0_hyperLoop_extend, .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_gpt0_hyperLoop =
{ .p_ctrl = &g_gpt0_hyperLoop_ctrl, .p_cfg = &g_gpt0_hyperLoop_cfg, .p_api = &g_timer_on_gpt };
void g_hal_init(void)
{
    g_common_init ();
}
