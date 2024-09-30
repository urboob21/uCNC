/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
                        [0] = R_IRQ1_isr, /* INTCPU0 (Software interrupt 0) */
            [21] = dmac_int_isr, /* DMAC0_INT0 (DMAC0 transfer completion 0) */
            [22] = dmac_int_isr, /* DMAC0_INT1 (DMAC0 transfer completion 1) */
            [23] = dmac_int_isr, /* DMAC0_INT2 (DMAC0 transfer completion 2) */
            [24] = dmac_int_isr, /* DMAC0_INT3 (DMAC0 transfer completion 3) */
            [25] = dmac_int_isr, /* DMAC0_INT4 (DMAC0 transfer completion 4) */
            [26] = dmac_int_isr, /* DMAC0_INT5 (DMAC0 transfer completion 5) */
            [27] = dmac_int_isr, /* DMAC0_INT6 (DMAC0 transfer completion 6) */
            [28] = dmac_int_isr, /* DMAC0_INT7 (DMAC0 transfer completion 7) */
            [84] = r_mtu_tgiv3_interrupt, /* TGIA3 (MTU3.TGRA input capture/compare match) */
            [97] = r_mtu_tgiv6_interrupt, /* TGIA6 (MTU6.TGRA input capture/compare match) */
            [251] = gmac_isr_pmt, /* GMAC_PMT (GMAC1 power management) */
            [252] = gmac_isr_sbd, /* GMAC_SBD (GMAC1 general interrupt) */
            [253] = ethsw_isr_intr, /* ETHSW_INTR (Ethernet Switch interrupt) */
            [288] = m_sci0_eri_interrupt, /* SCI0_ERI (SCI0 Receive error) */
            [289] = m_sci0_rxi_interrupt, /* SCI0_RXI (SCI0 Receive data full) */
            [290] = m_sci0_txi_interrupt, /* SCI0_TXI (SCI0 Transmit data empty) */
            [291] = m_sci0_tei_interrupt, /* SCI0_TEI (SCI0 Transmit end) */
            [312] = iic_master_eri_isr, /* IIC1_EEI (IIC1 Transfer error or event generation) */
            [313] = iic_master_rxi_isr, /* IIC1_RXI (IIC1 Receive data full) */
            [314] = iic_master_txi_isr, /* IIC1_TXI (IIC1 Transmit data empty) */
            [315] = iic_master_tei_isr, /* IIC1_TEI (IIC1 Transmit end) */
            [316] = canfd_rx_fifo_isr, /* CAN_RXF (CANFD RX FIFO interrupt) */
            [317] = canfd_error_isr, /* CAN_GLERR (CANFD Global error interrupt) */
            [318] = canfd_channel_tx_isr, /* CAN0_TX (CANFD0 Channel TX interrupt) */
            [319] = canfd_error_isr, /* CAN0_CHERR (CANFD0 Channel CAN error interrupt) */
            [320] = canfd_common_fifo_rx_isr, /* CAN0_COMFRX (CANFD0 Common RX FIFO or TXQ interrupt) */
            [321] = canfd_channel_tx_isr, /* CAN1_TX (CANFD1 Channel TX interrupt) */
            [322] = canfd_error_isr, /* CAN1_CHERR (CANFD1 Channel CAN error interrupt) */
            [323] = canfd_common_fifo_rx_isr, /* CAN1_COMFRX (CANFD1 Common RX FIFO or TXQ interrupt) */
            [324] = spi_rxi_isr, /* SPI0_SPRI (SPI0 Reception buffer full) */
            [325] = spi_txi_isr, /* SPI0_SPTI (SPI0 Transmit buffer empty) */
            [327] = spi_eri_isr, /* SPI0_SPEI (SPI0 errors) */
            [328] = spi_tei_isr, /* SPI0_SPCEND (SPI0 Communication complete) */
            [329] = spi_rxi_isr, /* SPI1_SPRI (SPI1 Reception buffer full) */
            [330] = spi_txi_isr, /* SPI1_SPTI (SPI1 Transmit buffer empty) */
            [332] = spi_eri_isr, /* SPI1_SPEI (SPI1 errors) */
            [333] = spi_tei_isr, /* SPI1_SPCEND (SPI1 Communication complete) */
            [345] = adc_scan_end_isr, /* ADC0_ADI (ADC0 A/D scan end interrupt) */
            [350] = adc_scan_end_isr, /* ADC1_ADI (ADC1 A/D scan end interrupt) */
            [372] = r_enc_ch0_int_isr, /* ENCIF_INT0 (ENCIF CH0 Interrupt A) */
            [373] = r_enc_ch0_err_int_isr, /* ENCIF_INT1 (ENCIF CH0 Interrupt B) */
            [376] = r_enc_ch1_int_isr, /* ENCIF_INT4 (ENCIF CH1 Interrupt A) */
            [377] = r_enc_ch1_err_int_isr, /* ENCIF_INT5 (ENCIF CH1 Interrupt B) */
            [443] = spi_rxi_isr, /* SPI3_SPRI (SPI3 Reception buffer full) */
            [444] = spi_txi_isr, /* SPI3_SPTI (SPI3 Transmit buffer empty) */
            [446] = spi_eri_isr, /* SPI3_SPEI (SPI3 errors) */
            [447] = spi_tei_isr, /* SPI3_SPCEND (SPI3 Communication complete) */
        };
        #endif
