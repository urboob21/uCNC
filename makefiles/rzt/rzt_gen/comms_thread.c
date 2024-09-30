/* generated thread source file - do not edit */
#include "comms_thread.h"

#if 0
                static StaticTask_t comms_thread_memory;
                #if defined(__ARMCC_VERSION)           /* AC6 compiler */
                static uint8_t comms_thread_stack[1024] BSP_PLACE_IN_SECTION(BSP_UNINIT_SECTION_PREFIX ".stack.thread") BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);
                #else
                static uint8_t comms_thread_stack[1024] BSP_PLACE_IN_SECTION(BSP_UNINIT_SECTION_PREFIX ".stack.comms_thread") BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);
                #endif
                #endif
TaskHandle_t comms_thread;
void comms_thread_create(void);
static void comms_thread_func(void *pvParameters);
void rtos_startup_err_callback(void *p_instance, void *p_data);
void rtos_startup_common_init(void);
dmac_instance_ctrl_t g_transfer7_ctrl;

transfer_info_t g_transfer7_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .src_addr_mode = TRANSFER_ADDR_MODE_FIXED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer7_extend =
{ .unit = 0, .channel = 7,
#if defined(VECTOR_NUMBER_DMAC0_INT7)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT7,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_IIC1_RXI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 7
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 7
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_i2c_master1_rx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer7_cfg =
{ .p_info = &g_transfer7_info, .p_extend = &g_transfer7_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer7 =
{ .p_ctrl = &g_transfer7_ctrl, .p_cfg = &g_transfer7_cfg, .p_api = &g_transfer_on_dmac };
dmac_instance_ctrl_t g_transfer6_ctrl;

transfer_info_t g_transfer6_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_FIXED, .src_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer6_extend =
{ .unit = 0, .channel = 6,
#if defined(VECTOR_NUMBER_DMAC0_INT6)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT6,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_IIC1_TXI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_DESTINATION_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 6
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 6
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_i2c_master1_tx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer6_cfg =
{ .p_info = &g_transfer6_info, .p_extend = &g_transfer6_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer6 =
{ .p_ctrl = &g_transfer6_ctrl, .p_cfg = &g_transfer6_cfg, .p_api = &g_transfer_on_dmac };
iic_master_instance_ctrl_t g_i2c_master1_ctrl;

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED) != (g_transfer6)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void iic_master_tx_dmac_callback(iic_master_instance_ctrl_t *p_instance_ctrl);

void g_i2c_master1_tx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    iic_master_tx_dmac_callback (&g_i2c_master1_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (g_transfer7)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void iic_master_rx_dmac_callback(iic_master_instance_ctrl_t *p_instance_ctrl);

void g_i2c_master1_rx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    iic_master_rx_dmac_callback (&g_i2c_master1_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

const iic_master_extended_cfg_t g_i2c_master1_extend =
{ .timeout_mode = IIC_MASTER_TIMEOUT_MODE_SHORT, .timeout_scl_low = IIC_MASTER_TIMEOUT_SCL_LOW_ENABLED,
/* Actual calculated bitrate: 98425. Actual calculated duty cycle: 50%. */.clock_settings.brl_value = 28,
  .clock_settings.brh_value = 28, .clock_settings.cks_value = 3 };
const i2c_master_cfg_t g_i2c_master1_cfg =
{ .channel = 1,
  .rate = I2C_MASTER_RATE_STANDARD,
  .slave = 0x00,
  .addr_mode = I2C_MASTER_ADDR_MODE_7BIT,
  .p_transfer_tx = g_i2c_master1_P_TRANSFER_TX,
  .p_transfer_rx = g_i2c_master1_P_TRANSFER_RX,
  .p_callback = NULL,
  .p_context = NULL,
#if defined(VECTOR_NUMBER_IIC1_RXI)
    .rxi_irq             = VECTOR_NUMBER_IIC1_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_TXI)
    .txi_irq             = VECTOR_NUMBER_IIC1_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_TEI)
    .tei_irq             = VECTOR_NUMBER_IIC1_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_IIC1_EEI)
    .eri_irq             = VECTOR_NUMBER_IIC1_EEI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
  .ipl = (12),
  .p_extend = &g_i2c_master1_extend, };
/* Instance structure to use this module. */
const i2c_master_instance_t g_i2c_master1 =
{ .p_ctrl = &g_i2c_master1_ctrl, .p_cfg = &g_i2c_master1_cfg, .p_api = &g_i2c_master_on_iic };
spi_instance_ctrl_t g_spi3_ctrl;

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_tx_dmac_callback(spi_instance_ctrl_t * p_instance_ctrl);

void g_spi3_tx_transfer_callback (transfer_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    spi_tx_dmac_callback(&g_spi3_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_rx_dmac_callback(spi_instance_ctrl_t * p_instance_ctrl);

void g_spi3_rx_transfer_callback (transfer_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    spi_rx_dmac_callback(&g_spi3_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

/** SPI extended configuration for SPI HAL driver */
const spi_extended_cfg_t g_spi3_ext_cfg =
{ .spi_clksyn = SPI_SSL_MODE_CLK_SYN,
  .spi_comm = SPI_COMMUNICATION_FULL_DUPLEX,
  .ssl_polarity = SPI_SSLP_LOW,
  .ssl_select = SPI_SSL_SELECT_SSL0,
  .mosi_idle = SPI_MOSI_IDLE_VALUE_FIXING_DISABLE,
  .parity = SPI_PARITY_MODE_DISABLE,
  .byte_swap = SPI_BYTE_SWAP_DISABLE,
#if 1
  .clock_source = SPI_CLOCK_SOURCE_SPI3ASYNCCLK,
#else
    .clock_source            = SPI_CLOCK_SOURCE_PCLKM,
#endif
  .spck_div =
  {
  /* Actual calculated bitrate: 16000000. */.spbr = 2,
    .brdv = 0 },
  .spck_delay = SPI_DELAY_COUNT_1,
  .ssl_negation_delay = SPI_DELAY_COUNT_1,
  .next_access_delay = SPI_DELAY_COUNT_1,
  .transmit_fifo_threshold = 0,
  .receive_fifo_threshold = 0,
  .receive_data_ready_detect_adjustment = 0, };

/** SPI configuration for SPI HAL driver */
const spi_cfg_t g_spi3_cfg =
{ .channel = 3,

#if defined(VECTOR_NUMBER_SPI3_SPRI)
    .rxi_irq             = VECTOR_NUMBER_SPI3_SPRI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI3_SPTI)
    .txi_irq             = VECTOR_NUMBER_SPI3_SPTI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI3_SPCEND)
    .tei_irq             = VECTOR_NUMBER_SPI3_SPCEND,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI3_SPEI)
    .eri_irq             = VECTOR_NUMBER_SPI3_SPEI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif

  .rxi_ipl = (12),
  .txi_ipl = (12),
  .tei_ipl = (12),
  .eri_ipl = (12),

  .operating_mode = SPI_MODE_MASTER,

  .clk_phase = SPI_CLK_PHASE_EDGE_ODD,
  .clk_polarity = SPI_CLK_POLARITY_LOW,

  .mode_fault = SPI_MODE_FAULT_ERROR_DISABLE,
  .bit_order = SPI_BIT_ORDER_MSB_FIRST,
  .p_transfer_tx = g_spi3_P_TRANSFER_TX,
  .p_transfer_rx = g_spi3_P_TRANSFER_RX,
  .p_callback = spi3_callback,

  .p_context = NULL,
  .p_extend = (void*) &g_spi3_ext_cfg, };

/* Instance structure to use this module. */
const spi_instance_t g_spi3 =
{ .p_ctrl = &g_spi3_ctrl, .p_cfg = &g_spi3_cfg, .p_api = &g_spi_on_spi };
dmac_instance_ctrl_t g_transfer5_ctrl;

transfer_info_t g_transfer5_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .src_addr_mode = TRANSFER_ADDR_MODE_FIXED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer5_extend =
{ .unit = 0, .channel = 5,
#if defined(VECTOR_NUMBER_DMAC0_INT5)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT5,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SPI1_SPRI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 5
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 5
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_spi2_rx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer5_cfg =
{ .p_info = &g_transfer5_info, .p_extend = &g_transfer5_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer5 =
{ .p_ctrl = &g_transfer5_ctrl, .p_cfg = &g_transfer5_cfg, .p_api = &g_transfer_on_dmac };
dmac_instance_ctrl_t g_transfer4_ctrl;

transfer_info_t g_transfer4_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_FIXED, .src_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer4_extend =
{ .unit = 0, .channel = 4,
#if defined(VECTOR_NUMBER_DMAC0_INT4)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT4,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SPI1_SPTI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_DESTINATION_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 4
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 4
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_spi2_tx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer4_cfg =
{ .p_info = &g_transfer4_info, .p_extend = &g_transfer4_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer4 =
{ .p_ctrl = &g_transfer4_ctrl, .p_cfg = &g_transfer4_cfg, .p_api = &g_transfer_on_dmac };
spi_instance_ctrl_t g_spi2_ctrl;

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED) != (g_transfer4)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_tx_dmac_callback(spi_instance_ctrl_t *p_instance_ctrl);

void g_spi2_tx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    spi_tx_dmac_callback (&g_spi2_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (g_transfer5)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_rx_dmac_callback(spi_instance_ctrl_t *p_instance_ctrl);

void g_spi2_rx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    spi_rx_dmac_callback (&g_spi2_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

/** SPI extended configuration for SPI HAL driver */
const spi_extended_cfg_t g_spi2_ext_cfg =
{ .spi_clksyn = SPI_SSL_MODE_CLK_SYN,
  .spi_comm = SPI_COMMUNICATION_FULL_DUPLEX,
  .ssl_polarity = SPI_SSLP_LOW,
  .ssl_select = SPI_SSL_SELECT_SSL0,
  .mosi_idle = SPI_MOSI_IDLE_VALUE_FIXING_DISABLE,
  .parity = SPI_PARITY_MODE_DISABLE,
  .byte_swap = SPI_BYTE_SWAP_DISABLE,
#if 1
  .clock_source = SPI_CLOCK_SOURCE_SPI1ASYNCCLK,
#else
    .clock_source            = SPI_CLOCK_SOURCE_PCLKM,
#endif
  .spck_div =
  {
  /* Actual calculated bitrate: 16000000. */.spbr = 2,
    .brdv = 0 },
  .spck_delay = SPI_DELAY_COUNT_1,
  .ssl_negation_delay = SPI_DELAY_COUNT_1,
  .next_access_delay = SPI_DELAY_COUNT_1,
  .transmit_fifo_threshold = 0,
  .receive_fifo_threshold = 0,
  .receive_data_ready_detect_adjustment = 0, };

/** SPI configuration for SPI HAL driver */
const spi_cfg_t g_spi2_cfg =
{ .channel = 1,

#if defined(VECTOR_NUMBER_SPI1_SPRI)
    .rxi_irq             = VECTOR_NUMBER_SPI1_SPRI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_SPTI)
    .txi_irq             = VECTOR_NUMBER_SPI1_SPTI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_SPCEND)
    .tei_irq             = VECTOR_NUMBER_SPI1_SPCEND,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_SPEI)
    .eri_irq             = VECTOR_NUMBER_SPI1_SPEI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif

  .rxi_ipl = (12),
  .txi_ipl = (12),
  .tei_ipl = (12),
  .eri_ipl = (12),

  .operating_mode = SPI_MODE_MASTER,

  .clk_phase = SPI_CLK_PHASE_EDGE_ODD,
  .clk_polarity = SPI_CLK_POLARITY_LOW,

  .mode_fault = SPI_MODE_FAULT_ERROR_DISABLE,
  .bit_order = SPI_BIT_ORDER_MSB_FIRST,
  .p_transfer_tx = g_spi2_P_TRANSFER_TX,
  .p_transfer_rx = g_spi2_P_TRANSFER_RX,
  .p_callback = spi2_callback,

  .p_context = NULL,
  .p_extend = (void*) &g_spi2_ext_cfg, };

/* Instance structure to use this module. */
const spi_instance_t g_spi2 =
{ .p_ctrl = &g_spi2_ctrl, .p_cfg = &g_spi2_cfg, .p_api = &g_spi_on_spi };
dmac_instance_ctrl_t g_transfer3_ctrl;

transfer_info_t g_transfer3_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .src_addr_mode = TRANSFER_ADDR_MODE_FIXED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer3_extend =
{ .unit = 0, .channel = 3,
#if defined(VECTOR_NUMBER_DMAC0_INT3)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT3,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SPI0_SPRI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 3
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 3
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_spi0_rx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer3_cfg =
{ .p_info = &g_transfer3_info, .p_extend = &g_transfer3_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer3 =
{ .p_ctrl = &g_transfer3_ctrl, .p_cfg = &g_transfer3_cfg, .p_api = &g_transfer_on_dmac };
dmac_instance_ctrl_t g_transfer2_ctrl;

transfer_info_t g_transfer2_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_FIXED, .src_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer2_extend =
{ .unit = 0, .channel = 2,
#if defined(VECTOR_NUMBER_DMAC0_INT2)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT2,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (12),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SPI0_SPTI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_DESTINATION_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 2
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 2
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_spi0_tx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer2_cfg =
{ .p_info = &g_transfer2_info, .p_extend = &g_transfer2_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer2 =
{ .p_ctrl = &g_transfer2_ctrl, .p_cfg = &g_transfer2_cfg, .p_api = &g_transfer_on_dmac };
spi_instance_ctrl_t g_spi0_ctrl;

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED) != (g_transfer2)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_tx_dmac_callback(spi_instance_ctrl_t *p_instance_ctrl);

void g_spi0_tx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    spi_tx_dmac_callback (&g_spi0_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (g_transfer3)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void spi_rx_dmac_callback(spi_instance_ctrl_t *p_instance_ctrl);

void g_spi0_rx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    spi_rx_dmac_callback (&g_spi0_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

/** SPI extended configuration for SPI HAL driver */
const spi_extended_cfg_t g_spi0_ext_cfg =
{ .spi_clksyn = SPI_SSL_MODE_CLK_SYN,
  .spi_comm = SPI_COMMUNICATION_FULL_DUPLEX,
  .ssl_polarity = SPI_SSLP_LOW,
  .ssl_select = SPI_SSL_SELECT_SSL0,
  .mosi_idle = SPI_MOSI_IDLE_VALUE_FIXING_DISABLE,
  .parity = SPI_PARITY_MODE_DISABLE,
  .byte_swap = SPI_BYTE_SWAP_DISABLE,
#if 1
  .clock_source = SPI_CLOCK_SOURCE_SPI0ASYNCCLK,
#else
    .clock_source            = SPI_CLOCK_SOURCE_PCLKM,
#endif
  .spck_div =
  {
  /* Actual calculated bitrate: 16000000. */.spbr = 2,
    .brdv = 0 },
  .spck_delay = SPI_DELAY_COUNT_1,
  .ssl_negation_delay = SPI_DELAY_COUNT_1,
  .next_access_delay = SPI_DELAY_COUNT_1,
  .transmit_fifo_threshold = 0,
  .receive_fifo_threshold = 0,
  .receive_data_ready_detect_adjustment = 0, };

/** SPI configuration for SPI HAL driver */
const spi_cfg_t g_spi0_cfg =
{ .channel = 0,

#if defined(VECTOR_NUMBER_SPI0_SPRI)
    .rxi_irq             = VECTOR_NUMBER_SPI0_SPRI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI0_SPTI)
    .txi_irq             = VECTOR_NUMBER_SPI0_SPTI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI0_SPCEND)
    .tei_irq             = VECTOR_NUMBER_SPI0_SPCEND,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI0_SPEI)
    .eri_irq             = VECTOR_NUMBER_SPI0_SPEI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif

  .rxi_ipl = (12),
  .txi_ipl = (12),
  .tei_ipl = (12),
  .eri_ipl = (12),

  .operating_mode = SPI_MODE_MASTER,

  .clk_phase = SPI_CLK_PHASE_EDGE_ODD,
  .clk_polarity = SPI_CLK_POLARITY_LOW,

  .mode_fault = SPI_MODE_FAULT_ERROR_DISABLE,
  .bit_order = SPI_BIT_ORDER_MSB_FIRST,
  .p_transfer_tx = g_spi0_P_TRANSFER_TX,
  .p_transfer_rx = g_spi0_P_TRANSFER_RX,
  .p_callback = spi0_callback,

  .p_context = NULL,
  .p_extend = (void*) &g_spi0_ext_cfg, };

/* Instance structure to use this module. */
const spi_instance_t g_spi0 =
{ .p_ctrl = &g_spi0_ctrl, .p_cfg = &g_spi0_cfg, .p_api = &g_spi_on_spi };
dmac_instance_ctrl_t g_transfer1_ctrl;

transfer_info_t g_transfer1_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .src_addr_mode = TRANSFER_ADDR_MODE_FIXED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer1_extend =
{ .unit = 0, .channel = 1,
#if defined(VECTOR_NUMBER_DMAC0_INT1)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT1,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (9),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SCI0_RXI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 1
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 1
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_uart0_rx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer1_cfg =
{ .p_info = &g_transfer1_info, .p_extend = &g_transfer1_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer1 =
{ .p_ctrl = &g_transfer1_ctrl, .p_cfg = &g_transfer1_cfg, .p_api = &g_transfer_on_dmac };
dmac_instance_ctrl_t g_transfer0_ctrl;

transfer_info_t g_transfer0_info =
{ .dest_addr_mode = TRANSFER_ADDR_MODE_FIXED, .src_addr_mode = TRANSFER_ADDR_MODE_INCREMENTED, .mode =
          TRANSFER_MODE_NORMAL,
  .p_dest = (void*) NULL, .p_src = (void const*) NULL, .length = 0, .src_size = TRANSFER_SIZE_1_BYTE, .dest_size =
          TRANSFER_SIZE_1_BYTE,
  .p_next1_src = (void const*) NULL, .p_next1_dest = (void*) NULL, .next1_length = 1 };

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer0_extend =
{ .unit = 0, .channel = 0,
#if defined(VECTOR_NUMBER_DMAC0_INT0)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT0,
#else
  .dmac_int_irq = FSP_INVALID_VECTOR,
#endif
  .dmac_int_ipl = (9),
  .dmac_int_irq_detect_type = (0),

  .activation_source = ELC_EVENT_SCI0_TXI,

  .ack_mode = DMAC_ACK_MODE_BUS_CYCLE_MODE,
  .detection_mode = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0), .activation_request_source_select =
          DMAC_REQUEST_DIRECTION_DESTINATION_MODULE,

  .next_register_operaion = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

  .dmac_mode = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
  .p_descriptor = &NULL,
#else
    .p_descriptor           = NULL,
#endif

  .transfer_interval = 0,
#if 0 == 0
#if 7 >= 0
  .channel_scheduling = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL0_7,
#else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT0_CHANNEL8_15,
 #endif
#else
 #if 7 >= 0
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL0_7,
 #else
    .channel_scheduling     = (dmac_channel_scheduling_t) DMAC_CFG_CHANNEL_PRIORITY_UNIT1_CHANNEL8_15,
 #endif
#endif
  .p_callback = g_uart0_tx_transfer_callback,
  .p_context = NULL, };
const transfer_cfg_t g_transfer0_cfg =
{ .p_info = &g_transfer0_info, .p_extend = &g_transfer0_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer0 =
{ .p_ctrl = &g_transfer0_ctrl, .p_cfg = &g_transfer0_cfg, .p_api = &g_transfer_on_dmac };
sci_uart_instance_ctrl_t g_uart0_ctrl;

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED) != (g_transfer0)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void sci_uart_tx_dmac_callback(sci_uart_instance_ctrl_t *p_instance_ctrl);

void g_uart0_tx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    sci_uart_tx_dmac_callback (&g_uart0_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (g_transfer1)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
extern void sci_uart_rx_dmac_callback(sci_uart_instance_ctrl_t *p_instance_ctrl);

void g_uart0_rx_transfer_callback(transfer_callback_args_t *p_args)
{
    FSP_PARAMETER_NOT_USED (p_args);
    sci_uart_rx_dmac_callback (&g_uart0_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

sci_baud_setting_t g_uart0_baud_setting =
        {
        /* Baud rate calculated with 0.160% error. */.baudrate_bits_b.abcse = 0,
          .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 51, .baudrate_bits_b.mddr =
                  (uint8_t) 256,
          .baudrate_bits_b.brme = false };

/** UART extended configuration for UARTonSCI HAL driver */
const sci_uart_extended_cfg_t g_uart0_cfg_extend =
{ .clock = SCI_UART_CLOCK_INT, .rx_edge_start = SCI_UART_START_BIT_FALLING_EDGE, .noise_cancel =
          SCI_UART_NOISE_CANCELLATION_DISABLE,
  .rx_fifo_trigger = SCI_UART_RX_FIFO_TRIGGER_MAX, .p_baud_setting = &g_uart0_baud_setting,
#if 1
  .clock_source = SCI_UART_CLOCK_SOURCE_SCI0ASYNCCLK,
#else
                .clock_source           = SCI_UART_CLOCK_SOURCE_PCLKM,
#endif
  .flow_control = SCI_UART_FLOW_CONTROL_RTS,
#if 0xFF != 0xFF
                .flow_control_pin       = BSP_IO_PORT_FF_PIN_0xFF,
                #else
  .flow_control_pin = (bsp_io_port_pin_t) UINT16_MAX,
#endif
  .rs485_setting =
  { .enable = SCI_UART_RS485_DISABLE, .polarity = SCI_UART_RS485_DE_POLARITY_HIGH, .assertion_time = 1, .negation_time =
            1, }, };

/** UART interface configuration */
const uart_cfg_t g_uart0_cfg =
{ .channel = 0, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          uart0_callback,
  .p_context = NULL, .p_extend = &g_uart0_cfg_extend, .p_transfer_tx = g_uart0_P_TRANSFER_TX, .p_transfer_rx =
          g_uart0_P_TRANSFER_RX,
  .rxi_ipl = (12), .txi_ipl = (12), .tei_ipl = (12), .eri_ipl = (12),
#if defined(VECTOR_NUMBER_SCI0_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI0_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI0_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI0_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI0_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI0_TEI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI0_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI0_ERI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
        };

/* Instance structure to use this module. */
const uart_instance_t g_uart0 =
{ .p_ctrl = &g_uart0_ctrl, .p_cfg = &g_uart0_cfg, .p_api = &g_uart_on_sci };
/* Nominal and Data bit timing configuration */

can_bit_timing_cfg_t g_canfd1_bit_timing_cfg =
{
/* Actual bitrate: 500000 Hz. Actual sample point: 75 %. */
.baud_rate_prescaler = 1,
  .time_segment_1 = 59, .time_segment_2 = 20, .synchronization_jump_width = 4 };

can_bit_timing_cfg_t g_canfd1_data_timing_cfg =
{
/* Actual bitrate: 2000000 Hz. Actual sample point: 75 %. */
.baud_rate_prescaler = 1,
  .time_segment_1 = 14, .time_segment_2 = 5, .synchronization_jump_width = 1 };

extern const canfd_afl_entry_t p_canfd1_afl[CANFD_CFG_AFL_CH1_RULE_NUM];

#ifndef CANFD_PRV_GLOBAL_CFG
#define CANFD_PRV_GLOBAL_CFG
canfd_global_cfg_t g_canfd_global_cfg =
{ .global_interrupts = CANFD_CFG_GLOBAL_ERR_SOURCES, .global_config = (CANFD_CFG_TX_PRIORITY | CANFD_CFG_DLC_CHECK
        | CANFD_CFD_CLOCK_SOURCE | CANFD_CFG_FD_OVERFLOW
        | (uint32_t) (CANFD_CFG_TIMER_PRESCALER << R_CANFD_CFDGCFG_ITRCP_Pos)),
  .rx_mb_config = (CANFD_CFG_RXMB_NUMBER | (CANFD_CFG_RXMB_SIZE << R_CANFD_CFDRMNB_RMPLS_Pos)), .global_err_ipl =
          CANFD_CFG_GLOBAL_ERR_IPL,
  .rx_fifo_ipl = CANFD_CFG_RX_FIFO_IPL, .rx_fifo_config =
  { ((CANFD_CFG_RXFIFO0_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO0_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO0_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO0_INT_MODE)
            | (CANFD_CFG_RXFIFO0_ENABLE)),
    ((CANFD_CFG_RXFIFO1_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO1_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO1_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO1_INT_MODE)
            | (CANFD_CFG_RXFIFO1_ENABLE)),
    ((CANFD_CFG_RXFIFO2_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO2_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO2_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO2_INT_MODE)
            | (CANFD_CFG_RXFIFO2_ENABLE)),
    ((CANFD_CFG_RXFIFO3_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO3_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO3_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO3_INT_MODE)
            | (CANFD_CFG_RXFIFO3_ENABLE)),
    ((CANFD_CFG_RXFIFO4_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO4_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO4_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO4_INT_MODE)
            | (CANFD_CFG_RXFIFO4_ENABLE)),
    ((CANFD_CFG_RXFIFO5_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO5_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO5_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO5_INT_MODE)
            | (CANFD_CFG_RXFIFO5_ENABLE)),
    ((CANFD_CFG_RXFIFO6_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO6_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO6_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO6_INT_MODE)
            | (CANFD_CFG_RXFIFO6_ENABLE)),
    ((CANFD_CFG_RXFIFO7_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos)
            | (CANFD_CFG_RXFIFO7_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos)
            | (CANFD_CFG_RXFIFO7_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO7_INT_MODE)
            | (CANFD_CFG_RXFIFO7_ENABLE)), },
  .common_fifo_config =
  { CANFD_CFG_COMMONFIFO0,
    CANFD_CFG_COMMONFIFO1,
    CANFD_CFG_COMMONFIFO2,
    CANFD_CFG_COMMONFIFO3,
    CANFD_CFG_COMMONFIFO4,
    CANFD_CFG_COMMONFIFO5, } };
#endif

canfd_extended_cfg_t g_canfd1_extended_cfg =
{ .p_afl = p_canfd1_afl,
  .txmb_txi_enable = (0ULL),
  .error_interrupts = (0U),
  .p_data_timing = &g_canfd1_data_timing_cfg,
  .delay_compensation = (1),
  .p_global_cfg = &g_canfd_global_cfg, };

canfd_instance_ctrl_t g_canfd1_ctrl;
const can_cfg_t g_canfd1_cfg =
{ .channel = 1, .p_bit_timing = &g_canfd1_bit_timing_cfg, .p_callback = canfd1_callback, .p_extend =
          &g_canfd1_extended_cfg,
  .p_context = NULL, .ipl = (12),
#if defined(VECTOR_NUMBER_CAN1_COMFRX)
    .rx_irq             = VECTOR_NUMBER_CAN1_COMFRX,
#else
  .rx_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CAN1_TX)
    .tx_irq             = VECTOR_NUMBER_CAN1_TX,
#else
  .tx_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CAN1_CHERR)
    .error_irq             = VECTOR_NUMBER_CAN1_CHERR,
#else
  .error_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const can_instance_t g_canfd1 =
{ .p_ctrl = &g_canfd1_ctrl, .p_cfg = &g_canfd1_cfg, .p_api = &g_canfd_on_canfd };
/* Nominal and Data bit timing configuration */

can_bit_timing_cfg_t g_canfd0_bit_timing_cfg =
{
/* Actual bitrate: 500000 Hz. Actual sample point: 75 %. */
.baud_rate_prescaler = 1,
  .time_segment_1 = 59, .time_segment_2 = 20, .synchronization_jump_width = 4 };

can_bit_timing_cfg_t g_canfd0_data_timing_cfg =
{
/* Actual bitrate: 2000000 Hz. Actual sample point: 75 %. */
.baud_rate_prescaler = 1,
  .time_segment_1 = 14, .time_segment_2 = 5, .synchronization_jump_width = 1 };

extern const canfd_afl_entry_t p_canfd0_afl[CANFD_CFG_AFL_CH0_RULE_NUM];

#ifndef CANFD_PRV_GLOBAL_CFG
#define CANFD_PRV_GLOBAL_CFG
canfd_global_cfg_t g_canfd_global_cfg =
{
    .global_interrupts = CANFD_CFG_GLOBAL_ERR_SOURCES,
    .global_config     = (CANFD_CFG_TX_PRIORITY | CANFD_CFG_DLC_CHECK | CANFD_CFD_CLOCK_SOURCE | CANFD_CFG_FD_OVERFLOW | (uint32_t) (CANFD_CFG_TIMER_PRESCALER << R_CANFD_CFDGCFG_ITRCP_Pos)),
    .rx_mb_config      = (CANFD_CFG_RXMB_NUMBER | (CANFD_CFG_RXMB_SIZE << R_CANFD_CFDRMNB_RMPLS_Pos)),
    .global_err_ipl = CANFD_CFG_GLOBAL_ERR_IPL,
    .rx_fifo_ipl    = CANFD_CFG_RX_FIFO_IPL,
    .rx_fifo_config    =
    {
        ((CANFD_CFG_RXFIFO0_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO0_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO0_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO0_INT_MODE) | (CANFD_CFG_RXFIFO0_ENABLE)),
        ((CANFD_CFG_RXFIFO1_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO1_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO1_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO1_INT_MODE) | (CANFD_CFG_RXFIFO1_ENABLE)),
        ((CANFD_CFG_RXFIFO2_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO2_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO2_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO2_INT_MODE) | (CANFD_CFG_RXFIFO2_ENABLE)),
        ((CANFD_CFG_RXFIFO3_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO3_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO3_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO3_INT_MODE) | (CANFD_CFG_RXFIFO3_ENABLE)),
        ((CANFD_CFG_RXFIFO4_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO4_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO4_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO4_INT_MODE) | (CANFD_CFG_RXFIFO4_ENABLE)),
        ((CANFD_CFG_RXFIFO5_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO5_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO5_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO5_INT_MODE) | (CANFD_CFG_RXFIFO5_ENABLE)),
        ((CANFD_CFG_RXFIFO6_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO6_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO6_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO6_INT_MODE) | (CANFD_CFG_RXFIFO6_ENABLE)),
        ((CANFD_CFG_RXFIFO7_INT_THRESHOLD << R_CANFD_CFDRFCC_RFIGCV_Pos) | (CANFD_CFG_RXFIFO7_DEPTH << R_CANFD_CFDRFCC_RFDC_Pos) | (CANFD_CFG_RXFIFO7_PAYLOAD << R_CANFD_CFDRFCC_RFPLS_Pos) | (CANFD_CFG_RXFIFO7_INT_MODE) | (CANFD_CFG_RXFIFO7_ENABLE)),
    },
    .common_fifo_config =
    {
        CANFD_CFG_COMMONFIFO0,
        CANFD_CFG_COMMONFIFO1,
        CANFD_CFG_COMMONFIFO2,
        CANFD_CFG_COMMONFIFO3,
        CANFD_CFG_COMMONFIFO4,
        CANFD_CFG_COMMONFIFO5,
    }
};
#endif

canfd_extended_cfg_t g_canfd0_extended_cfg =
{ .p_afl = p_canfd0_afl,
  .txmb_txi_enable = (0ULL),
  .error_interrupts = (0U),
  .p_data_timing = &g_canfd0_data_timing_cfg,
  .delay_compensation = (1),
  .p_global_cfg = &g_canfd_global_cfg, };

canfd_instance_ctrl_t g_canfd0_ctrl;
const can_cfg_t g_canfd0_cfg =
{ .channel = 0, .p_bit_timing = &g_canfd0_bit_timing_cfg, .p_callback = canfd0_callback, .p_extend =
          &g_canfd0_extended_cfg,
  .p_context = NULL, .ipl = (12),
#if defined(VECTOR_NUMBER_CAN0_COMFRX)
    .rx_irq             = VECTOR_NUMBER_CAN0_COMFRX,
#else
  .rx_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CAN0_TX)
    .tx_irq             = VECTOR_NUMBER_CAN0_TX,
#else
  .tx_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CAN0_CHERR)
    .error_irq             = VECTOR_NUMBER_CAN0_CHERR,
#else
  .error_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const can_instance_t g_canfd0 =
{ .p_ctrl = &g_canfd0_ctrl, .p_cfg = &g_canfd0_cfg, .p_api = &g_canfd_on_canfd };
extern uint32_t g_fsp_common_thread_count;

const rm_freertos_port_parameters_t comms_thread_parameters =
{ .p_context = (void*) NULL, };

void comms_thread_create(void)
{
    /* Increment count so we will know the number of threads created in the FSP Configuration editor. */
    g_fsp_common_thread_count++;

    /* Initialize each kernel object. */

#if 0
                    comms_thread = xTaskCreateStatic(
                    #else
    BaseType_t comms_thread_create_err = xTaskCreate (
#endif
                                                      comms_thread_func,
                                                      (const char*) "Comms Thread", 1024 / 4, // In words, not bytes
                                                      (void*) &comms_thread_parameters, //pvParameters
                                                      5,
#if 0
                        (StackType_t *)&comms_thread_stack,
                        (StaticTask_t *)&comms_thread_memory
                        #else
                                                      &comms_thread
#endif
                                                      );

#if 0
                    if (NULL == comms_thread)
                    {
                        rtos_startup_err_callback(comms_thread, 0);
                    }
                    #else
    if (pdPASS != comms_thread_create_err)
    {
        rtos_startup_err_callback (comms_thread, 0);
    }
#endif
}
static void comms_thread_func(void *pvParameters)
{
    /* Initialize common components */
    rtos_startup_common_init ();

    /* Initialize each module instance. */

    /* Enter user code for this thread. Pass task handle. */
    comms_thread_entry (pvParameters);
}
