/* generated pin source file - do not edit */
#include "bsp_api.h"
#include "r_ioport_api.h"
#include "r_ioport.h"

extern const ioport_extend_cfg_t g_ioport_cfg_extend;

const ioport_pin_cfg_t g_bsp_pin_cfg_data[] =
{
{ .pin = BSP_IO_PORT_00_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
        | (uint32_t) IOPORT_PIN_P000_PFC_00_ETH2_RXD3) },
  { .pin = BSP_IO_PORT_00_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P001_PFC_01_ETH2_RXDV) },
  { .pin = BSP_IO_PORT_00_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P002_PFC_00_ETH2_TXEN) },
  { .pin = BSP_IO_PORT_00_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P003_PFC_01_ETH2_REFCLK) },
  { .pin = BSP_IO_PORT_00_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P004_PFC_01_ETH2_RXER) },
  { .pin = BSP_IO_PORT_00_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P005_PFC_00_ETHSW_PHYLINK2) },
  { .pin = BSP_IO_PORT_00_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P006_PFC_00_ETH2_TXCLK) },
  { .pin = BSP_IO_PORT_00_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_PIN_P007_PFC_03_GTIOC2A) },
  { .pin = BSP_IO_PORT_01_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P010_PFC_01_ETHSW_MDIO) },
  { .pin = BSP_IO_PORT_01_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P011_PFC_01_ETHSW_MDC) },
  { .pin = BSP_IO_PORT_01_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P012_PFC_01_ETH2_TXD3) },
  { .pin = BSP_IO_PORT_01_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P013_PFC_00_ETH2_TXD2) },
  { .pin = BSP_IO_PORT_01_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P014_PFC_01_ETH2_TXD1) },
  { .pin = BSP_IO_PORT_01_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P015_PFC_00_ETH2_TXD0) },
  { .pin = BSP_IO_PORT_01_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P016_PFC_09_ENCIF0) },
  { .pin = BSP_IO_PORT_01_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P017_PFC_09_ENCIF1) },
  { .pin = BSP_IO_PORT_02_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P020_PFC_07_CANTX1) },
  { .pin = BSP_IO_PORT_02_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_02_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P022_PFC_07_SPI_MOSI3) },
  { .pin = BSP_IO_PORT_02_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P023_PFC_09_CANRX1) },
  { .pin = BSP_IO_PORT_02_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_PULLUP_ENABLE | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_02_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_PULLUP_ENABLE | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_02_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P026_PFC_00_TMS_SWDIO) },
  { .pin = BSP_IO_PORT_02_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P027_PFC_00_TCK_SWCLK) },
  { .pin = BSP_IO_PORT_03_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P030_PFC_08_ENCIF8) },
  { .pin = BSP_IO_PORT_03_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT) },
  { .pin = BSP_IO_PORT_03_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P033_PFC_05_ENCIF9) },
  { .pin = BSP_IO_PORT_03_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P034_PFC_00_IRQ7) },
  { .pin = BSP_IO_PORT_03_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P035_PFC_03_MTIOC3A) },
  { .pin = BSP_IO_PORT_03_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P036_PFC_00_IRQ8) },
  { .pin = BSP_IO_PORT_03_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P037_PFC_04_MTIOC3C) },
  { .pin = BSP_IO_PORT_04_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_04_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_04_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_04_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P043_PFC_02_SPI_RSPCK0) },
  { .pin = BSP_IO_PORT_04_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P044_PFC_04_POE10) },
  { .pin = BSP_IO_PORT_04_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT) },
  { .pin = BSP_IO_PORT_04_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P046_PFC_00_ETH1_TXER) },
  { .pin = BSP_IO_PORT_04_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P047_PFC_00_ETH0_TXER) },
  { .pin = BSP_IO_PORT_05_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P050_PFC_00_IRQ12) },
  { .pin = BSP_IO_PORT_05_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P051_PFC_01_ETH1_COL) },
  { .pin = BSP_IO_PORT_05_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P052_PFC_09_CANRX0) },
  { .pin = BSP_IO_PORT_05_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P053_PFC_0A_CANTX0) },
  { .pin = BSP_IO_PORT_05_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P054_PFC_03_GTIOC14A) },
  { .pin = BSP_IO_PORT_05_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P055_PFC_00_ETHSW_PHYLINK1) },
  { .pin = BSP_IO_PORT_05_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P056_PFC_01_ETH1_RXER) },
  { .pin = BSP_IO_PORT_05_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P057_PFC_00_ETH1_TXD2) },
  { .pin = BSP_IO_PORT_06_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P060_PFC_00_ETH1_TXD3) },
  { .pin = BSP_IO_PORT_06_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P061_PFC_00_ETH1_REFCLK) },
  { .pin = BSP_IO_PORT_06_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P062_PFC_00_ETH1_TXD1) },
  { .pin = BSP_IO_PORT_06_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P063_PFC_00_ETH1_TXD0) },
  { .pin = BSP_IO_PORT_06_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P064_PFC_00_ETH1_TXCLK) },
  { .pin = BSP_IO_PORT_06_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P065_PFC_00_ETH1_TXEN) },
  { .pin = BSP_IO_PORT_06_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P066_PFC_00_ETH1_RXD0) },
  { .pin = BSP_IO_PORT_06_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P067_PFC_00_ETH1_RXD1) },
  { .pin = BSP_IO_PORT_07_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P070_PFC_00_ETH1_RXD2) },
  { .pin = BSP_IO_PORT_07_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P071_PFC_00_ETH1_RXD3) },
  { .pin = BSP_IO_PORT_07_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P072_PFC_00_ETH1_RXDV) },
  { .pin = BSP_IO_PORT_07_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P073_PFC_00_ETH1_RXCLK) },
  { .pin = BSP_IO_PORT_07_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P074_PFC_02_USB_VBUSIN) },
  { .pin = BSP_IO_PORT_07_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_07_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_07_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_08_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_PULLUP_ENABLE | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_08_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P081_PFC_03_USB_VBUSEN) },
  { .pin = BSP_IO_PORT_08_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_08_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_08_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P084_PFC_00_ETH0_RXD3) },
  { .pin = BSP_IO_PORT_08_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P085_PFC_00_ETH0_RXDV) },
  { .pin = BSP_IO_PORT_08_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P086_PFC_00_ETH0_RXCLK) },
  { .pin = BSP_IO_PORT_08_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P087_PFC_00_GMAC_MDC) },
  { .pin = BSP_IO_PORT_09_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P090_PFC_00_GMAC_MDIO) },
  { .pin = BSP_IO_PORT_09_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P091_PFC_00_ETH0_REFCLK) },
  { .pin = BSP_IO_PORT_09_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P092_PFC_01_ETH0_RXER) },
  { .pin = BSP_IO_PORT_09_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P093_PFC_00_ETH0_TXD3) },
  { .pin = BSP_IO_PORT_09_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P094_PFC_00_ETH0_TXD2) },
  { .pin = BSP_IO_PORT_09_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P095_PFC_00_ETH0_TXD1) },
  { .pin = BSP_IO_PORT_09_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P096_PFC_00_ETH0_TXD0) },
  { .pin = BSP_IO_PORT_09_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P097_PFC_00_ETH0_TXCLK) },
  { .pin = BSP_IO_PORT_10_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P100_PFC_00_ETH0_TXEN) },
  { .pin = BSP_IO_PORT_10_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P101_PFC_00_ETH0_RXD0) },
  { .pin = BSP_IO_PORT_10_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P102_PFC_00_ETH0_RXD1) },
  { .pin = BSP_IO_PORT_10_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P103_PFC_00_ETH0_RXD2) },
  { .pin = BSP_IO_PORT_10_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P104_PFC_01_ETHSW_PHYLINK0) },
  { .pin = BSP_IO_PORT_10_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P105_PFC_01_ETH2_CRS) },
  { .pin = BSP_IO_PORT_10_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P106_PFC_01_ETH2_COL) },
  { .pin = BSP_IO_PORT_10_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P107_PFC_01_ETH2_TXER) },
  { .pin = BSP_IO_PORT_11_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P110_PFC_01_ETH1_CRS) },
  { .pin = BSP_IO_PORT_11_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P111_PFC_02_MTIOC1A) },
  { .pin = BSP_IO_PORT_11_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P112_PFC_02_MTIOC1B) },
  { .pin = BSP_IO_PORT_11_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P113_PFC_02_MTIOC2A) },
  { .pin = BSP_IO_PORT_11_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P114_PFC_02_MTIOC2B) },
  { .pin = BSP_IO_PORT_11_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P115_PFC_01_MTIOC0B) },
  { .pin = BSP_IO_PORT_11_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P116_PFC_01_ETH0_COL) },
  { .pin = BSP_IO_PORT_11_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_12_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P120_PFC_02_ENCIF3) },
  { .pin = BSP_IO_PORT_12_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P121_PFC_02_ENCIF4) },
  { .pin = BSP_IO_PORT_12_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P122_PFC_02_ENCIF5) },
  { .pin = BSP_IO_PORT_12_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P123_PFC_02_ENCIF6) },
  { .pin = BSP_IO_PORT_12_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P124_PFC_07_ENCIF7) },
  { .pin = BSP_IO_PORT_12_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P125_PFC_04_GTIOC8A) },
  { .pin = BSP_IO_PORT_12_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P126_PFC_00_IRQ3) },
  { .pin = BSP_IO_PORT_12_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P127_PFC_09_ENCIF2) },
  { .pin = BSP_IO_PORT_13_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P130_PFC_07_SPI_SSL00) },
  { .pin = BSP_IO_PORT_13_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P131_PFC_06_SPI_MOSI0) },
  { .pin = BSP_IO_PORT_13_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P132_PFC_0A_SPI_MISO0) },
  { .pin = BSP_IO_PORT_13_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P133_PFC_05_MTIOC0C) },
  { .pin = BSP_IO_PORT_13_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P134_PFC_02_MTIOC0D) },
  { .pin = BSP_IO_PORT_13_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_13_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_13_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_14_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_14_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_14_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P142_PFC_02_ETH0_CRS) },
  { .pin = BSP_IO_PORT_14_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P143_PFC_04_MTIOC0A) },
  { .pin = BSP_IO_PORT_14_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P144_PFC_00_XSPI0_DS) },
  { .pin = BSP_IO_PORT_14_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P145_PFC_02_POE8) },
  { .pin = BSP_IO_PORT_14_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P146_PFC_00_XSPI0_CKP) },
  { .pin = BSP_IO_PORT_14_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P147_PFC_00_XSPI0_IO0) },
  { .pin = BSP_IO_PORT_15_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P150_PFC_00_XSPI0_IO1) },
  { .pin = BSP_IO_PORT_15_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P151_PFC_00_XSPI0_IO2) },
  { .pin = BSP_IO_PORT_15_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P152_PFC_00_XSPI0_IO3) },
  { .pin = BSP_IO_PORT_15_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P153_PFC_01_MTIOC8C) },
  { .pin = BSP_IO_PORT_15_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P154_PFC_01_MTIOC8D) },
  { .pin = BSP_IO_PORT_15_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P155_PFC_01_MCLK2) },
  { .pin = BSP_IO_PORT_15_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P156_PFC_02_MDAT2) },
  { .pin = BSP_IO_PORT_15_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SCHMITT_TRIGGER_ENABLE
          | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P157_PFC_00_XSPI0_CS0) },
  { .pin = BSP_IO_PORT_16_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P160_PFC_02_TXD0_SDA0_MOSI0) },
  { .pin = BSP_IO_PORT_16_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P161_PFC_04_SPI_MISO3) },
  { .pin = BSP_IO_PORT_16_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P162_PFC_03_SPI_RSPCK3) },
  { .pin = BSP_IO_PORT_16_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P163_PFC_05_SPI_SSL30) },
  { .pin = BSP_IO_PORT_16_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_16_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P165_PFC_00_MTIC5U) },
  { .pin = BSP_IO_PORT_16_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P166_PFC_02_RXD0_SCL0_MISO0) },
  { .pin = BSP_IO_PORT_16_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P167_PFC_00_MTIC5W) },
  { .pin = BSP_IO_PORT_17_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_17_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_17_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P172_PFC_00_IRQ9) },
  { .pin = BSP_IO_PORT_17_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P173_PFC_02_POE0) },
  { .pin = BSP_IO_PORT_17_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_PIN_P174_PFC_03_GTIOC0A) },
  { .pin = BSP_IO_PORT_17_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P175_PFC_05_USB_OVRCUR) },
  { .pin = BSP_IO_PORT_17_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P176_PFC_00_MTIOC3B) },
  { .pin = BSP_IO_PORT_17_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P177_PFC_00_MTIOC4A) },
  { .pin = BSP_IO_PORT_18_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P180_PFC_00_MTIOC4C) },
  { .pin = BSP_IO_PORT_18_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P181_PFC_01_MTIOC3D) },
  { .pin = BSP_IO_PORT_18_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P182_PFC_00_MTIOC4B) },
  { .pin = BSP_IO_PORT_18_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P183_PFC_01_MTIOC4D) },
  { .pin = BSP_IO_PORT_18_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P184_PFC_03_SPI_RSPCK2) },
  { .pin = BSP_IO_PORT_18_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P185_PFC_01_MTIC5V) },
  { .pin = BSP_IO_PORT_18_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P186_PFC_05_SPI_MISO2) },
  { .pin = BSP_IO_PORT_18_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P187_PFC_03_SPI_SSL20) },
  { .pin = BSP_IO_PORT_19_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_19_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P191_PFC_00_MTIOC6A) },
  { .pin = BSP_IO_PORT_19_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P192_PFC_01_MTIOC6C) },
  { .pin = BSP_IO_PORT_19_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P193_PFC_00_MTIOC6B) },
  { .pin = BSP_IO_PORT_19_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P194_PFC_00_MTIOC7A) },
  { .pin = BSP_IO_PORT_19_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P195_PFC_00_MTIOC7C) },
  { .pin = BSP_IO_PORT_19_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P196_PFC_00_MTIOC6D) },
  { .pin = BSP_IO_PORT_19_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P197_PFC_00_MTIOC7B) },
  { .pin = BSP_IO_PORT_20_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P200_PFC_00_MTIOC7D) },
  { .pin = BSP_IO_PORT_20_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_20_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_20_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_20_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_20_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P205_PFC_03_MCLK4) },
  { .pin = BSP_IO_PORT_20_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P206_PFC_03_MDAT4) },
  { .pin = BSP_IO_PORT_20_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P207_PFC_04_MCLK5) },
  { .pin = BSP_IO_PORT_21_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P210_PFC_05_MDAT5) },
  { .pin = BSP_IO_PORT_21_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P211_PFC_08_MCLK0) },
  { .pin = BSP_IO_PORT_21_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P212_PFC_08_MDAT0) },
  { .pin = BSP_IO_PORT_21_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P213_PFC_06_MCLK1) },
  { .pin = BSP_IO_PORT_21_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P214_PFC_06_MDAT1) },
  { .pin = BSP_IO_PORT_21_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P215_PFC_04_GTIOC16A) },
  { .pin = BSP_IO_PORT_21_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_INPUT
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_21_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P217_PFC_07_MCLK3) },
  { .pin = BSP_IO_PORT_22_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P220_PFC_06_MDAT3) },
  { .pin = BSP_IO_PORT_22_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P221_PFC_03_POE4) },
  { .pin = BSP_IO_PORT_22_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P222_PFC_00_IRQ4) },
  { .pin = BSP_IO_PORT_22_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_22_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_22_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT
          | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW | (uint32_t) IOPORT_CFG_REGION_NSAFETY) },
  { .pin = BSP_IO_PORT_22_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P226_PFC_02_IIC_SCL1) },
  { .pin = BSP_IO_PORT_22_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P227_PFC_02_IIC_SDA1) },
  { .pin = BSP_IO_PORT_23_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST
          | (uint32_t) IOPORT_PIN_P230_PFC_02_SPI_MOSI2) },
  { .pin = BSP_IO_PORT_23_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P231_PFC_03_MTCLKA) },
  { .pin = BSP_IO_PORT_23_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P232_PFC_03_MTCLKB) },
  { .pin = BSP_IO_PORT_23_PIN_3, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P233_PFC_02_MTCLKC) },
  { .pin = BSP_IO_PORT_23_PIN_4, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P234_PFC_02_MTCLKD) },
  { .pin = BSP_IO_PORT_23_PIN_5, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P235_PFC_02_MTIOC8A) },
  { .pin = BSP_IO_PORT_23_PIN_6, .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_MID | (uint32_t) IOPORT_CFG_PORT_PERI
          | (uint32_t) IOPORT_CFG_REGION_NSAFETY | (uint32_t) IOPORT_PIN_P236_PFC_01_MTIOC8B) },
  { .pin = BSP_IO_PORT_23_PIN_7, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P237_PFC_00_ETH2_RXD0) },
  { .pin = BSP_IO_PORT_24_PIN_0, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P240_PFC_00_ETH2_RXD1) },
  { .pin = BSP_IO_PORT_24_PIN_1, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P241_PFC_00_ETH2_RXCLK) },
  { .pin = BSP_IO_PORT_24_PIN_2, .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_REGION_NSAFETY
          | (uint32_t) IOPORT_PIN_P242_PFC_00_ETH2_RXD2) }, };

const ioport_cfg_t g_bsp_pin_cfg =
{ .number_of_pins = sizeof(g_bsp_pin_cfg_data) / sizeof(ioport_pin_cfg_t),
  .p_pin_cfg_data = &g_bsp_pin_cfg_data[0],
  .p_extend = &g_ioport_cfg_extend, };
