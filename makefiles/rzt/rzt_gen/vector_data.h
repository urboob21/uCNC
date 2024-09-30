/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#include "bsp_api.h"
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (48)
#endif
/* ISR prototypes */
void R_IRQ1_isr(void);
void dmac_int_isr(void);
void r_mtu_tgiv3_interrupt(void);
void r_mtu_tgiv6_interrupt(void);
void gmac_isr_pmt(void);
void gmac_isr_sbd(void);
void ethsw_isr_intr(void);
void m_sci0_eri_interrupt(void);
void m_sci0_rxi_interrupt(void);
void m_sci0_txi_interrupt(void);
void m_sci0_tei_interrupt(void);
void iic_master_eri_isr(void);
void iic_master_rxi_isr(void);
void iic_master_txi_isr(void);
void iic_master_tei_isr(void);
void canfd_rx_fifo_isr(void);
void canfd_error_isr(void);
void canfd_channel_tx_isr(void);
void canfd_common_fifo_rx_isr(void);
void spi_rxi_isr(void);
void spi_txi_isr(void);
void spi_eri_isr(void);
void spi_tei_isr(void);
void adc_scan_end_isr(void);
void r_enc_ch0_int_isr(void);
void r_enc_ch0_err_int_isr(void);
void r_enc_ch1_int_isr(void);
void r_enc_ch1_err_int_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_INTCPU0 ((IRQn_Type) 0) /* INTCPU0 (Software interrupt 0) */
#define VECTOR_NUMBER_DMAC0_INT0 ((IRQn_Type) 21) /* DMAC0_INT0 (DMAC0 transfer completion 0) */
#define VECTOR_NUMBER_DMAC0_INT1 ((IRQn_Type) 22) /* DMAC0_INT1 (DMAC0 transfer completion 1) */
#define VECTOR_NUMBER_DMAC0_INT2 ((IRQn_Type) 23) /* DMAC0_INT2 (DMAC0 transfer completion 2) */
#define VECTOR_NUMBER_DMAC0_INT3 ((IRQn_Type) 24) /* DMAC0_INT3 (DMAC0 transfer completion 3) */
#define VECTOR_NUMBER_DMAC0_INT4 ((IRQn_Type) 25) /* DMAC0_INT4 (DMAC0 transfer completion 4) */
#define VECTOR_NUMBER_DMAC0_INT5 ((IRQn_Type) 26) /* DMAC0_INT5 (DMAC0 transfer completion 5) */
#define VECTOR_NUMBER_DMAC0_INT6 ((IRQn_Type) 27) /* DMAC0_INT6 (DMAC0 transfer completion 6) */
#define VECTOR_NUMBER_DMAC0_INT7 ((IRQn_Type) 28) /* DMAC0_INT7 (DMAC0 transfer completion 7) */
#define VECTOR_NUMBER_TGIA3 ((IRQn_Type) 84) /* TGIA3 (MTU3.TGRA input capture/compare match) */
#define VECTOR_NUMBER_TGIA6 ((IRQn_Type) 97) /* TGIA6 (MTU6.TGRA input capture/compare match) */
#define VECTOR_NUMBER_GMAC_PMT ((IRQn_Type) 251) /* GMAC_PMT (GMAC1 power management) */
#define VECTOR_NUMBER_GMAC_SBD ((IRQn_Type) 252) /* GMAC_SBD (GMAC1 general interrupt) */
#define VECTOR_NUMBER_ETHSW_INTR ((IRQn_Type) 253) /* ETHSW_INTR (Ethernet Switch interrupt) */
#define VECTOR_NUMBER_SCI0_ERI ((IRQn_Type) 288) /* SCI0_ERI (SCI0 Receive error) */
#define VECTOR_NUMBER_SCI0_RXI ((IRQn_Type) 289) /* SCI0_RXI (SCI0 Receive data full) */
#define VECTOR_NUMBER_SCI0_TXI ((IRQn_Type) 290) /* SCI0_TXI (SCI0 Transmit data empty) */
#define VECTOR_NUMBER_SCI0_TEI ((IRQn_Type) 291) /* SCI0_TEI (SCI0 Transmit end) */
#define VECTOR_NUMBER_IIC1_EEI ((IRQn_Type) 312) /* IIC1_EEI (IIC1 Transfer error or event generation) */
#define VECTOR_NUMBER_IIC1_RXI ((IRQn_Type) 313) /* IIC1_RXI (IIC1 Receive data full) */
#define VECTOR_NUMBER_IIC1_TXI ((IRQn_Type) 314) /* IIC1_TXI (IIC1 Transmit data empty) */
#define VECTOR_NUMBER_IIC1_TEI ((IRQn_Type) 315) /* IIC1_TEI (IIC1 Transmit end) */
#define VECTOR_NUMBER_CAN_RXF ((IRQn_Type) 316) /* CAN_RXF (CANFD RX FIFO interrupt) */
#define VECTOR_NUMBER_CAN_GLERR ((IRQn_Type) 317) /* CAN_GLERR (CANFD Global error interrupt) */
#define VECTOR_NUMBER_CAN0_TX ((IRQn_Type) 318) /* CAN0_TX (CANFD0 Channel TX interrupt) */
#define VECTOR_NUMBER_CAN0_CHERR ((IRQn_Type) 319) /* CAN0_CHERR (CANFD0 Channel CAN error interrupt) */
#define VECTOR_NUMBER_CAN0_COMFRX ((IRQn_Type) 320) /* CAN0_COMFRX (CANFD0 Common RX FIFO or TXQ interrupt) */
#define VECTOR_NUMBER_CAN1_TX ((IRQn_Type) 321) /* CAN1_TX (CANFD1 Channel TX interrupt) */
#define VECTOR_NUMBER_CAN1_CHERR ((IRQn_Type) 322) /* CAN1_CHERR (CANFD1 Channel CAN error interrupt) */
#define VECTOR_NUMBER_CAN1_COMFRX ((IRQn_Type) 323) /* CAN1_COMFRX (CANFD1 Common RX FIFO or TXQ interrupt) */
#define VECTOR_NUMBER_SPI0_SPRI ((IRQn_Type) 324) /* SPI0_SPRI (SPI0 Reception buffer full) */
#define VECTOR_NUMBER_SPI0_SPTI ((IRQn_Type) 325) /* SPI0_SPTI (SPI0 Transmit buffer empty) */
#define VECTOR_NUMBER_SPI0_SPEI ((IRQn_Type) 327) /* SPI0_SPEI (SPI0 errors) */
#define VECTOR_NUMBER_SPI0_SPCEND ((IRQn_Type) 328) /* SPI0_SPCEND (SPI0 Communication complete) */
#define VECTOR_NUMBER_SPI1_SPRI ((IRQn_Type) 329) /* SPI1_SPRI (SPI1 Reception buffer full) */
#define VECTOR_NUMBER_SPI1_SPTI ((IRQn_Type) 330) /* SPI1_SPTI (SPI1 Transmit buffer empty) */
#define VECTOR_NUMBER_SPI1_SPEI ((IRQn_Type) 332) /* SPI1_SPEI (SPI1 errors) */
#define VECTOR_NUMBER_SPI1_SPCEND ((IRQn_Type) 333) /* SPI1_SPCEND (SPI1 Communication complete) */
#define VECTOR_NUMBER_ADC0_ADI ((IRQn_Type) 345) /* ADC0_ADI (ADC0 A/D scan end interrupt) */
#define VECTOR_NUMBER_ADC1_ADI ((IRQn_Type) 350) /* ADC1_ADI (ADC1 A/D scan end interrupt) */
#define VECTOR_NUMBER_ENCIF_INT0 ((IRQn_Type) 372) /* ENCIF_INT0 (ENCIF CH0 Interrupt A) */
#define VECTOR_NUMBER_ENCIF_INT1 ((IRQn_Type) 373) /* ENCIF_INT1 (ENCIF CH0 Interrupt B) */
#define VECTOR_NUMBER_ENCIF_INT4 ((IRQn_Type) 376) /* ENCIF_INT4 (ENCIF CH1 Interrupt A) */
#define VECTOR_NUMBER_ENCIF_INT5 ((IRQn_Type) 377) /* ENCIF_INT5 (ENCIF CH1 Interrupt B) */
#define VECTOR_NUMBER_SPI3_SPRI ((IRQn_Type) 443) /* SPI3_SPRI (SPI3 Reception buffer full) */
#define VECTOR_NUMBER_SPI3_SPTI ((IRQn_Type) 444) /* SPI3_SPTI (SPI3 Transmit buffer empty) */
#define VECTOR_NUMBER_SPI3_SPEI ((IRQn_Type) 446) /* SPI3_SPEI (SPI3 errors) */
#define VECTOR_NUMBER_SPI3_SPCEND ((IRQn_Type) 447) /* SPI3_SPCEND (SPI3 Communication complete) */
typedef enum IRQn
{
    SoftwareGeneratedInt0 = -32,
    SoftwareGeneratedInt1 = -31,
    SoftwareGeneratedInt2 = -30,
    SoftwareGeneratedInt3 = -29,
    SoftwareGeneratedInt4 = -28,
    SoftwareGeneratedInt5 = -27,
    SoftwareGeneratedInt6 = -26,
    SoftwareGeneratedInt7 = -25,
    SoftwareGeneratedInt8 = -24,
    SoftwareGeneratedInt9 = -23,
    SoftwareGeneratedInt10 = -22,
    SoftwareGeneratedInt11 = -21,
    SoftwareGeneratedInt12 = -20,
    SoftwareGeneratedInt13 = -19,
    SoftwareGeneratedInt14 = -18,
    SoftwareGeneratedInt15 = -17,
    DebugCommunicationsChannelInt = -10,
    PerformanceMonitorCounterOverflowInt = -9,
    CrossTriggerInterfaceInt = -8,
    VritualCPUInterfaceMaintenanceInt = -7,
    HypervisorTimerInt = -6,
    VirtualTimerInt = -5,
    NonSecurePhysicalTimerInt = -2,
    INTCPU0_IRQn = 0, /* INTCPU0 (Software interrupt 0) */
    DMAC0_INT0_IRQn = 21, /* DMAC0_INT0 (DMAC0 transfer completion 0) */
    DMAC0_INT1_IRQn = 22, /* DMAC0_INT1 (DMAC0 transfer completion 1) */
    DMAC0_INT2_IRQn = 23, /* DMAC0_INT2 (DMAC0 transfer completion 2) */
    DMAC0_INT3_IRQn = 24, /* DMAC0_INT3 (DMAC0 transfer completion 3) */
    DMAC0_INT4_IRQn = 25, /* DMAC0_INT4 (DMAC0 transfer completion 4) */
    DMAC0_INT5_IRQn = 26, /* DMAC0_INT5 (DMAC0 transfer completion 5) */
    DMAC0_INT6_IRQn = 27, /* DMAC0_INT6 (DMAC0 transfer completion 6) */
    DMAC0_INT7_IRQn = 28, /* DMAC0_INT7 (DMAC0 transfer completion 7) */
    TGIA3_IRQn = 84, /* TGIA3 (MTU3.TGRA input capture/compare match) */
    TGIA6_IRQn = 97, /* TGIA6 (MTU6.TGRA input capture/compare match) */
    GMAC_PMT_IRQn = 251, /* GMAC_PMT (GMAC1 power management) */
    GMAC_SBD_IRQn = 252, /* GMAC_SBD (GMAC1 general interrupt) */
    ETHSW_INTR_IRQn = 253, /* ETHSW_INTR (Ethernet Switch interrupt) */
    SCI0_ERI_IRQn = 288, /* SCI0_ERI (SCI0 Receive error) */
    SCI0_RXI_IRQn = 289, /* SCI0_RXI (SCI0 Receive data full) */
    SCI0_TXI_IRQn = 290, /* SCI0_TXI (SCI0 Transmit data empty) */
    SCI0_TEI_IRQn = 291, /* SCI0_TEI (SCI0 Transmit end) */
    IIC1_EEI_IRQn = 312, /* IIC1_EEI (IIC1 Transfer error or event generation) */
    IIC1_RXI_IRQn = 313, /* IIC1_RXI (IIC1 Receive data full) */
    IIC1_TXI_IRQn = 314, /* IIC1_TXI (IIC1 Transmit data empty) */
    IIC1_TEI_IRQn = 315, /* IIC1_TEI (IIC1 Transmit end) */
    CAN_RXF_IRQn = 316, /* CAN_RXF (CANFD RX FIFO interrupt) */
    CAN_GLERR_IRQn = 317, /* CAN_GLERR (CANFD Global error interrupt) */
    CAN0_TX_IRQn = 318, /* CAN0_TX (CANFD0 Channel TX interrupt) */
    CAN0_CHERR_IRQn = 319, /* CAN0_CHERR (CANFD0 Channel CAN error interrupt) */
    CAN0_COMFRX_IRQn = 320, /* CAN0_COMFRX (CANFD0 Common RX FIFO or TXQ interrupt) */
    CAN1_TX_IRQn = 321, /* CAN1_TX (CANFD1 Channel TX interrupt) */
    CAN1_CHERR_IRQn = 322, /* CAN1_CHERR (CANFD1 Channel CAN error interrupt) */
    CAN1_COMFRX_IRQn = 323, /* CAN1_COMFRX (CANFD1 Common RX FIFO or TXQ interrupt) */
    SPI0_SPRI_IRQn = 324, /* SPI0_SPRI (SPI0 Reception buffer full) */
    SPI0_SPTI_IRQn = 325, /* SPI0_SPTI (SPI0 Transmit buffer empty) */
    SPI0_SPEI_IRQn = 327, /* SPI0_SPEI (SPI0 errors) */
    SPI0_SPCEND_IRQn = 328, /* SPI0_SPCEND (SPI0 Communication complete) */
    SPI1_SPRI_IRQn = 329, /* SPI1_SPRI (SPI1 Reception buffer full) */
    SPI1_SPTI_IRQn = 330, /* SPI1_SPTI (SPI1 Transmit buffer empty) */
    SPI1_SPEI_IRQn = 332, /* SPI1_SPEI (SPI1 errors) */
    SPI1_SPCEND_IRQn = 333, /* SPI1_SPCEND (SPI1 Communication complete) */
    ADC0_ADI_IRQn = 345, /* ADC0_ADI (ADC0 A/D scan end interrupt) */
    ADC1_ADI_IRQn = 350, /* ADC1_ADI (ADC1 A/D scan end interrupt) */
    ENCIF_INT0_IRQn = 372, /* ENCIF_INT0 (ENCIF CH0 Interrupt A) */
    ENCIF_INT1_IRQn = 373, /* ENCIF_INT1 (ENCIF CH0 Interrupt B) */
    ENCIF_INT4_IRQn = 376, /* ENCIF_INT4 (ENCIF CH1 Interrupt A) */
    ENCIF_INT5_IRQn = 377, /* ENCIF_INT5 (ENCIF CH1 Interrupt B) */
    SPI3_SPRI_IRQn = 443, /* SPI3_SPRI (SPI3 Reception buffer full) */
    SPI3_SPTI_IRQn = 444, /* SPI3_SPTI (SPI3 Transmit buffer empty) */
    SPI3_SPEI_IRQn = 446, /* SPI3_SPEI (SPI3 errors) */
    SPI3_SPCEND_IRQn = 447, /* SPI3_SPCEND (SPI3 Communication complete) */
    SHARED_PERIPHERAL_INTERRUPTS_MAX_ENTRIES = BSP_VECTOR_TABLE_MAX_ENTRIES
} IRQn_Type;
#endif /* VECTOR_DATA_H */
