/* generated configuration header file - do not edit */
#ifndef R_CANFD_CFG_H_
#define R_CANFD_CFG_H_
/* Buffer RAM used: 1216 bytes */

#define CANFD_CFG_PARAM_CHECKING_ENABLE   ((BSP_CFG_PARAM_CHECKING_ENABLE))

#define CANFD_CFG_MULTIPLEX_INTERRUPT_SUPPORTED (0)
#if CANFD_CFG_MULTIPLEX_INTERRUPT_SUPPORTED
             #define CANFD_CFG_MULTIPLEX_INTERRUPT_ENABLE         BSP_INTERRUPT_ENABLE
             #define CANFD_CFG_MULTIPLEX_INTERRUPT_DISABLE        BSP_INTERRUPT_DISABLE
            #else
#define CANFD_CFG_MULTIPLEX_INTERRUPT_ENABLE
#define CANFD_CFG_MULTIPLEX_INTERRUPT_DISABLE
#endif

#define CANFD_CFG_AFL_CH0_RULE_NUM   (64)
#define CANFD_CFG_AFL_CH1_RULE_NUM   (64)

#define CANFD_CFG_GLOBAL_ERROR_CH    ((1U))

#define CANFD_CFG_FD_PROTOCOL_EXCEPTION   ((0))

#define CANFD_CFG_GLOBAL_ERR_SOURCES    ( 0x3)
#define CANFD_CFG_TX_PRIORITY           ((R_CANFD_CFDGCFG_TPRI_Msk))
#define CANFD_CFG_DLC_CHECK             ((0))
#define CANFD_CFD_CLOCK_SOURCE          (R_CANFD_CFDGCFG_DCS_Msk)
#define CANFD_CFG_FD_OVERFLOW           ((0))
#define CANFD_CFG_TIMER_PRESCALER       (0)
#define CANFD_CFG_RXMB_NUMBER           (0)
#define CANFD_CFG_RXMB_SIZE             ((0))
#define CANFD_CFG_GLOBAL_ERR_IPL        ((12))
#define CANFD_CFG_RX_FIFO_IPL           ((12))

#define CANFD_CFG_RXFIFO0_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO0_DEPTH         ((3))
#define CANFD_CFG_RXFIFO0_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO0_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO0_ENABLE        ((1))

#define CANFD_CFG_RXFIFO1_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO1_DEPTH         ((3))
#define CANFD_CFG_RXFIFO1_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO1_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO1_ENABLE        ((0))

#define CANFD_CFG_RXFIFO2_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO2_DEPTH         ((3))
#define CANFD_CFG_RXFIFO2_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO2_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO2_ENABLE        ((0))

#define CANFD_CFG_RXFIFO3_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO3_DEPTH         ((3))
#define CANFD_CFG_RXFIFO3_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO3_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO3_ENABLE        ((0))

#define CANFD_CFG_RXFIFO4_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO4_DEPTH         ((3))
#define CANFD_CFG_RXFIFO4_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO4_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO4_ENABLE        ((0))

#define CANFD_CFG_RXFIFO5_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO5_DEPTH         ((3))
#define CANFD_CFG_RXFIFO5_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO5_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO5_ENABLE        ((0))

#define CANFD_CFG_RXFIFO6_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO6_DEPTH         ((3))
#define CANFD_CFG_RXFIFO6_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO6_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO6_ENABLE        ((0))

#define CANFD_CFG_RXFIFO7_INT_THRESHOLD ((3U))
#define CANFD_CFG_RXFIFO7_DEPTH         ((3))
#define CANFD_CFG_RXFIFO7_PAYLOAD       ((7))
#define CANFD_CFG_RXFIFO7_INT_MODE      ((R_CANFD_CFDRFCC_RFIE_Msk | R_CANFD_CFDRFCC_RFIM_Msk))
#define CANFD_CFG_RXFIFO7_ENABLE        ((0))

#define CANFD_CFG_COMMONFIFO0 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))

#define CANFD_CFG_COMMONFIFO1 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))

#define CANFD_CFG_COMMONFIFO2 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))

#define CANFD_CFG_COMMONFIFO3 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))

#define CANFD_CFG_COMMONFIFO4 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))

#define CANFD_CFG_COMMONFIFO5 (((uint32_t) (0) << R_CANFD_CFDCFCC_CFE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFRXIE_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFTXIE_Pos) | \
                                                    ((uint32_t) (7) << R_CANFD_CFDCFCC_CFPLS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFM_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITSS_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFITR_Pos) | \
                                                    ((uint32_t) (0) << R_CANFD_CFDCFCC_CFIM_Pos) | \
                                                    ((uint32_t) (3U) << R_CANFD_CFDCFCC_CFIGCV_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFTML_Pos) | \
                                                    ((uint32_t) (3) << R_CANFD_CFDCFCC_CFDC_Pos) | \
                                                    ((uint32_t) 0 << R_CANFD_CFDCFCC_CFITT_Pos))
#endif /* R_CANFD_CFG_H_ */
