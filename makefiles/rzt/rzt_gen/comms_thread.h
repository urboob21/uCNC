/* generated thread header file - do not edit */
#ifndef COMMS_THREAD_H_
#define COMMS_THREAD_H_
#include "bsp_api.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "hal_data.h"
#ifdef __cplusplus
                extern "C" void comms_thread_entry(void * pvParameters);
                #else
extern void comms_thread_entry(void *pvParameters);
#endif
#include "r_dmac.h"
#include "r_transfer_api.h"
#include "r_iic_master.h"
#include "r_i2c_master_api.h"
#include "r_spi.h"
#include "r_sci_uart.h"
#include "r_uart_api.h"
#include "r_canfd.h"
#include "r_can_api.h"
FSP_HEADER
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer7;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer7_ctrl;
extern const transfer_cfg_t g_transfer7_cfg;

#ifndef g_i2c_master1_rx_transfer_callback
void g_i2c_master1_rx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer6;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer6_ctrl;
extern const transfer_cfg_t g_transfer6_cfg;

#ifndef g_i2c_master1_tx_transfer_callback
void g_i2c_master1_tx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/* I2C Master on IIC Instance. */
extern const i2c_master_instance_t g_i2c_master1;

/** Access the I2C Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_master_instance_ctrl_t g_i2c_master1_ctrl;
extern const i2c_master_cfg_t g_i2c_master1_cfg;

#ifndef NULL
void NULL(i2c_master_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == g_transfer6)
    #define g_i2c_master1_P_TRANSFER_TX (NULL)
#else
#define g_i2c_master1_P_TRANSFER_TX (&g_transfer6)
#endif
#if (FSP_NOT_DEFINED == g_transfer7)
    #define g_i2c_master1_P_TRANSFER_RX (NULL)
#else
#define g_i2c_master1_P_TRANSFER_RX (&g_transfer7)
#endif
#undef FSP_NOT_DEFINED
/** SPI on SPI Instance. */
extern const spi_instance_t g_spi3;

/** Access the SPI instance using these structures when calling API functions directly (::p_api is not used). */
extern spi_instance_ctrl_t g_spi3_ctrl;
extern const spi_cfg_t g_spi3_cfg;

/** Callback used by SPI Instance. */
#ifndef spi3_callback
void spi3_callback(spi_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_spi3_P_TRANSFER_TX (NULL)
#else
    #define g_spi3_P_TRANSFER_TX (&FSP_NOT_DEFINED)
#endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_spi3_P_TRANSFER_RX (NULL)
#else
    #define g_spi3_P_TRANSFER_RX (&FSP_NOT_DEFINED)
#endif
#undef FSP_NOT_DEFINED
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer5;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer5_ctrl;
extern const transfer_cfg_t g_transfer5_cfg;

#ifndef g_spi2_rx_transfer_callback
void g_spi2_rx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer4;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer4_ctrl;
extern const transfer_cfg_t g_transfer4_cfg;

#ifndef g_spi2_tx_transfer_callback
void g_spi2_tx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/** SPI on SPI Instance. */
extern const spi_instance_t g_spi2;

/** Access the SPI instance using these structures when calling API functions directly (::p_api is not used). */
extern spi_instance_ctrl_t g_spi2_ctrl;
extern const spi_cfg_t g_spi2_cfg;

/** Callback used by SPI Instance. */
#ifndef spi2_callback
void spi2_callback(spi_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == g_transfer4)
    #define g_spi2_P_TRANSFER_TX (NULL)
#else
#define g_spi2_P_TRANSFER_TX (&g_transfer4)
#endif
#if (FSP_NOT_DEFINED == g_transfer5)
    #define g_spi2_P_TRANSFER_RX (NULL)
#else
#define g_spi2_P_TRANSFER_RX (&g_transfer5)
#endif
#undef FSP_NOT_DEFINED
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer3;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer3_ctrl;
extern const transfer_cfg_t g_transfer3_cfg;

#ifndef g_spi0_rx_transfer_callback
void g_spi0_rx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer2;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer2_ctrl;
extern const transfer_cfg_t g_transfer2_cfg;

#ifndef g_spi0_tx_transfer_callback
void g_spi0_tx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/** SPI on SPI Instance. */
extern const spi_instance_t g_spi0;

/** Access the SPI instance using these structures when calling API functions directly (::p_api is not used). */
extern spi_instance_ctrl_t g_spi0_ctrl;
extern const spi_cfg_t g_spi0_cfg;

/** Callback used by SPI Instance. */
#ifndef spi0_callback
void spi0_callback(spi_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == g_transfer2)
    #define g_spi0_P_TRANSFER_TX (NULL)
#else
#define g_spi0_P_TRANSFER_TX (&g_transfer2)
#endif
#if (FSP_NOT_DEFINED == g_transfer3)
    #define g_spi0_P_TRANSFER_RX (NULL)
#else
#define g_spi0_P_TRANSFER_RX (&g_transfer3)
#endif
#undef FSP_NOT_DEFINED
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer1;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer1_ctrl;
extern const transfer_cfg_t g_transfer1_cfg;

#ifndef g_uart0_rx_transfer_callback
void g_uart0_rx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer0;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer0_ctrl;
extern const transfer_cfg_t g_transfer0_cfg;

#ifndef g_uart0_tx_transfer_callback
void g_uart0_tx_transfer_callback(transfer_callback_args_t *p_args);
#endif
/** UART on SCI Instance. */
extern const uart_instance_t g_uart0;

/** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
extern sci_uart_instance_ctrl_t g_uart0_ctrl;
extern const uart_cfg_t g_uart0_cfg;
extern const sci_uart_extended_cfg_t g_uart0_cfg_extend;

#ifndef uart0_callback
void uart0_callback(uart_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == g_transfer0)
                #define g_uart0_P_TRANSFER_TX (NULL)
            #else
#define g_uart0_P_TRANSFER_TX (&g_transfer0)
#endif
#if (FSP_NOT_DEFINED == g_transfer1)
                #define g_uart0_P_TRANSFER_RX (NULL)
            #else
#define g_uart0_P_TRANSFER_RX (&g_transfer1)
#endif
#undef FSP_NOT_DEFINED
/** CANFD on CANFD Instance. */
extern const can_instance_t g_canfd1;
/** Access the CANFD instance using these structures when calling API functions directly (::p_api is not used). */
extern canfd_instance_ctrl_t g_canfd1_ctrl;
extern const can_cfg_t g_canfd1_cfg;
extern const canfd_extended_cfg_t g_canfd1_cfg_extend;

#ifndef canfd1_callback
void canfd1_callback(can_callback_args_t *p_args);
#endif

/* Global configuration (referenced by all instances) */
extern canfd_global_cfg_t g_canfd_global_cfg;
/** CANFD on CANFD Instance. */
extern const can_instance_t g_canfd0;
/** Access the CANFD instance using these structures when calling API functions directly (::p_api is not used). */
extern canfd_instance_ctrl_t g_canfd0_ctrl;
extern const can_cfg_t g_canfd0_cfg;
extern const canfd_extended_cfg_t g_canfd0_cfg_extend;

#ifndef canfd0_callback
void canfd0_callback(can_callback_args_t *p_args);
#endif

/* Global configuration (referenced by all instances) */
extern canfd_global_cfg_t g_canfd_global_cfg;
FSP_FOOTER
#endif /* COMMS_THREAD_H_ */
