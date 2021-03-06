/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: iomux_define.h

#ifndef _IOMUX_DEFINE_H_
#define _IOMUX_DEFINE_H_

// IOMUXC_SW_MUX_CTL_PAD_*
// SION
#define SION_DISABLED 0x0
#define SION_ENABLED  0x1
// MUX_MODE
#define ALT0 0x0
#define ALT1 0x1
#define ALT2 0x2
#define ALT3 0x3
#define ALT4 0x4
#define ALT5 0x5
#define ALT6 0x6
#define ALT7 0x7

// IOMUXC_SW_PAD_CTL_PAD_*
// IOMUXC_SW_PAD_CTL_GRP_*
// HYS
#define HYS_DISABLED 0x0
#define HYS_ENABLED  0x1
// PUS
#define PUS_100KOHM_PD 0x0
#define PUS_47KOHM_PU  0x1
#define PUS_100KOHM_PU 0x2
#define PUS_22KOHM_PU  0x3
// PUE
#define PUE_KEEP 0x0
#define PUE_PULL 0x1
// PKE
#define PKE_DISABLED 0x0
#define PKE_ENABLED  0x1
// ODE
#define ODE_DISABLED 0x0
#define ODE_ENABLED  0x1
// SPEED
#define SPD_TBD    0x0
#define SPD_50MHZ  0x1
#define SPD_100MHZ 0x2
#define SPD_200MHZ 0x3
// DSE
#define DSE_DISABLED 0x0
#define DSE_240OHM   0x1
#define DSE_120OHM   0x2
#define DSE_80OHM    0x3
#define DSE_60OHM    0x4
#define DSE_48OHM    0x5
#define DSE_40OHM    0x6
#define DSE_34OHM    0x7
// SRE
#define SRE_SLOW 0x0
#define SRE_FAST 0x1
// ODT
#define ODT_OFF    0x0
#define ODT_120OHM 0x1
#define ODT_60OHM  0x2
#define ODT_40OHM  0x3
#define ODT_30OHM  0x4
#define ODT_RES5   0x5
#define ODT_20OHM  0x6
#define ODT_RES7   0x7
// DDR_INPUT
#define DDR_INPUT_CMOS 0x0
#define DDR_INPUT_DIFF 0x1
// DDR_SEL
#define DDR_SEL_RES0   0x0
#define DDR_SEL_RES1   0x1
#define DDR_SEL_LPDDR2 0x2
#define DDR_SEL_DDR3   0x3

// IOMUXC_ASRC_ASRCK_CLOCK_6_SELECT_INPUT
// DAISY
#define SEL_KEY_ROW3_ALT1 0x0
#define SEL_GPIO_0_ALT3   0x1
#define SEL_GPIO_18_ALT4  0x2

// IOMUXC_AUDMUX_P4_INPUT_DA_AMX_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT0_ALT3    0x0
#define SEL_DISP0_DAT23_ALT3 0x1

// IOMUXC_AUDMUX_P4_INPUT_DB_AMX_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT2_ALT3    0x0
#define SEL_DISP0_DAT21_ALT3 0x1

// IOMUXC_AUDMUX_P4_INPUT_RXCLK_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT19_ALT4 0x0
#define SEL_SD2_CMD_ALT3     0x1

// IOMUXC_AUDMUX_P4_INPUT_RXFS_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT18_ALT4 0x0
#define SEL_SD2_CLK_ALT3     0x1

// IOMUXC_AUDMUX_P4_INPUT_TXCLK_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT20_ALT3 0x0
#define SEL_SD2_DAT3_ALT3    0x1

// IOMUXC_AUDMUX_P4_INPUT_TXFS_AMX_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT1_ALT3    0x0
#define SEL_DISP0_DAT22_ALT3 0x1

// IOMUXC_AUDMUX_P5_INPUT_DA_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT19_ALT3 0x0
#define SEL_KEY_ROW1_ALT2    0x1

// IOMUXC_AUDMUX_P5_INPUT_DB_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT17_ALT3 0x0
#define SEL_KEY_ROW0_ALT2    0x1

// IOMUXC_AUDMUX_P5_INPUT_RXCLK_AMX_SELECT_INPUT
// DAISY
#define SEL_EIM_D25_ALT6     0x0
#define SEL_DISP0_DAT14_ALT3 0x1

// IOMUXC_AUDMUX_P5_INPUT_RXFS_AMX_SELECT_INPUT
// DAISY
#define SEL_EIM_D24_ALT6     0x0
#define SEL_DISP0_DAT13_ALT3 0x1

// IOMUXC_AUDMUX_P5_INPUT_TXCLK_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT16_ALT3 0x0
#define SEL_KEY_COL0_ALT2    0x1

// IOMUXC_AUDMUX_P5_INPUT_TXFS_AMX_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT18_ALT3 0x0
#define SEL_KEY_COL1_ALT2    0x1

// IOMUXC_CAN1_IPP_IND_CANRX_SELECT_INPUT
// DAISY
#define SEL_KEY_ROW2_ALT2 0x0
#define SEL_GPIO_8_ALT3   0x1
#define SEL_SD3_CLK_ALT2  0x2

// IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT
// DAISY
#define SEL_KEY_ROW4_ALT0 0x0
#define SEL_SD3_DAT1_ALT2 0x1

// IOMUXC_CCM_IPP_DI1_CLK_SELECT_INPUT
// DAISY
#define SEL_EIM_EB2_ALT2  0x0
#define SEL_EIM_DA13_ALT2 0x1

// IOMUXC_CCM_PMIC_VFUNCIONAL_READY_SELECT_INPUT
// DAISY
#define SEL_EIM_EB0_ALT4 0x0
#define SEL_GPIO_17_ALT2 0x1

// IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D16_ALT1     0x0
#define SEL_DISP0_DAT20_ALT2 0x1
#define SEL_KEY_COL0_ALT0    0x2
#define SEL_CSI0_DAT4_ALT2   0x3

// IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT
// DAISY
#define SEL_EIM_D17_ALT1     0x0
#define SEL_DISP0_DAT22_ALT2 0x1
#define SEL_KEY_COL1_ALT0    0x2
#define SEL_CSI0_DAT6_ALT2   0x3

// IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT
// DAISY
#define SEL_EIM_D18_ALT1     0x0
#define SEL_DISP0_DAT21_ALT2 0x1
#define SEL_KEY_ROW0_ALT0    0x2
#define SEL_CSI0_DAT5_ALT2   0x3

// IOMUXC_ECSPI1_IPP_IND_SS_B_0_SELECT_INPUT
// DAISY
#define SEL_EIM_EB2_ALT1     0x0
#define SEL_DISP0_DAT23_ALT2 0x1
#define SEL_KEY_ROW1_ALT0    0x2
#define SEL_CSI0_DAT7_ALT2   0x3

// IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT
// DAISY
#define SEL_EIM_D19_ALT1     0x0
#define SEL_DISP0_DAT15_ALT2 0x1
#define SEL_KEY_COL2_ALT0    0x2

// IOMUXC_ECSPI1_IPP_IND_SS_B_2_SELECT_INPUT
// DAISY
#define SEL_EIM_D24_ALT3  0x0
#define SEL_KEY_ROW2_ALT0 0x1

// IOMUXC_ECSPI1_IPP_IND_SS_B_3_SELECT_INPUT
// DAISY
#define SEL_EIM_D25_ALT3  0x0
#define SEL_KEY_COL3_ALT0 0x1

// IOMUXC_ECSPI2_IPP_CSPI_CLK_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_CS0_ALT2     0x0
#define SEL_DISP0_DAT19_ALT2 0x1
#define SEL_CSI0_DAT8_ALT2   0x2

// IOMUXC_ECSPI2_IPP_IND_MISO_SELECT_INPUT
// DAISY
#define SEL_EIM_OE_ALT2      0x0
#define SEL_DISP0_DAT17_ALT2 0x1
#define SEL_CSI0_DAT10_ALT2  0x2

// IOMUXC_ECSPI2_IPP_IND_MOSI_SELECT_INPUT
// DAISY
#define SEL_EIM_CS1_ALT2     0x0
#define SEL_DISP0_DAT16_ALT2 0x1
#define SEL_CSI0_DAT9_ALT2   0x2

// IOMUXC_ECSPI2_IPP_IND_SS_B_0_SELECT_INPUT
// DAISY
#define SEL_EIM_RW_ALT2      0x0
#define SEL_DISP0_DAT18_ALT2 0x1
#define SEL_CSI0_DAT11_ALT2  0x2

// IOMUXC_ECSPI2_IPP_IND_SS_B_1_SELECT_INPUT
// DAISY
#define SEL_EIM_LBA_ALT2     0x0
#define SEL_DISP0_DAT15_ALT3 0x1

// IOMUXC_ECSPI4_IPP_IND_SS_B_0_SELECT_INPUT
// DAISY
#define SEL_EIM_D20_ALT1 0x0
#define SEL_EIM_D29_ALT2 0x1

// IOMUXC_ECSPI5_IPP_CSPI_CLK_IN_SELECT_INPUT
// DAISY
#define SEL_SD1_CLK_ALT1 0x0
#define SEL_SD2_CLK_ALT1 0x1

// IOMUXC_ECSPI5_IPP_IND_MISO_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT0_ALT1 0x0
#define SEL_SD1_DAT0_ALT1 0x1

// IOMUXC_ECSPI5_IPP_IND_MOSI_SELECT_INPUT
// DAISY
#define SEL_SD1_CMD_ALT1 0x0
#define SEL_SD2_CMD_ALT1 0x1

// IOMUXC_ECSPI5_IPP_IND_SS_B_0_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT1_ALT1 0x0
#define SEL_SD1_DAT1_ALT1 0x1

// IOMUXC_ECSPI5_IPP_IND_SS_B_1_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT2_ALT1 0x0
#define SEL_SD1_DAT2_ALT1 0x1

// IOMUXC_ENET_IPG_CLK_RMII_SELECT_INPUT
// DAISY
#define SEL_RGMII_TX_CTL_ALT7 0x0
#define SEL_GPIO_16_ALT2      0x1

// IOMUXC_ENET_IPP_IND_MAC0_MDIO_SELECT_INPUT
// DAISY
#define SEL_ENET_MDIO_ALT1 0x0
#define SEL_KEY_COL1_ALT1  0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXCLK_SELECT_INPUT
// DAISY
#define SEL_RGMII_RXC_ALT1 0x0
#define SEL_GPIO_18_ALT1   0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXDATA_0_SELECT_INPUT
// DAISY
#define SEL_RGMII_RD0_ALT1 0x0
#define SEL_ENET_RXD0_ALT1 0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXDATA_1_SELECT_INPUT
// DAISY
#define SEL_RGMII_RD1_ALT1 0x0
#define SEL_ENET_RXD1_ALT1 0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXDATA_2_SELECT_INPUT
// DAISY
#define SEL_RGMII_RD2_ALT1 0x0
#define SEL_KEY_COL2_ALT1  0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXDATA_3_SELECT_INPUT
// DAISY
#define SEL_RGMII_RD3_ALT1 0x0
#define SEL_KEY_COL0_ALT1  0x1

// IOMUXC_ENET_IPP_IND_MAC0_RXEN_SELECT_INPUT
// DAISY
#define SEL_RGMII_RX_CTL_ALT1 0x0
#define SEL_ENET_CRS_DV_ALT1  0x1

// IOMUXC_ESAI_IPP_IND_FSR_SELECT_INPUT
// DAISY
#define SEL_ENET_REF_CLK_ALT2 0x0
#define SEL_GPIO_9_ALT0       0x1

// IOMUXC_ESAI_IPP_IND_FST_SELECT_INPUT
// DAISY
#define SEL_ENET_RXD1_ALT2 0x0
#define SEL_GPIO_2_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_HCKR_SELECT_INPUT
// DAISY
#define SEL_ENET_RX_ER_ALT2 0x0
#define SEL_GPIO_3_ALT0     0x1

// IOMUXC_ESAI_IPP_IND_HCKT_SELECT_INPUT
// DAISY
#define SEL_ENET_RXD0_ALT2 0x0
#define SEL_GPIO_4_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_SCKR_SELECT_INPUT
// DAISY
#define SEL_ENET_MDIO_ALT2 0x0
#define SEL_GPIO_1_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_SCKT_SELECT_INPUT
// DAISY
#define SEL_ENET_CRS_DV_ALT2 0x0
#define SEL_GPIO_6_ALT0      0x1

// IOMUXC_ESAI_IPP_IND_SDO0_SELECT_INPUT
// DAISY
#define SEL_GPIO_17_ALT0   0x0
#define SEL_NANDF_CS2_ALT2 0x1

// IOMUXC_ESAI_IPP_IND_SDO1_SELECT_INPUT
// DAISY
#define SEL_GPIO_18_ALT0   0x0
#define SEL_NANDF_CS3_ALT2 0x1

// IOMUXC_ESAI_IPP_IND_SDO2_SDI3_SELECT_INPUT
// DAISY
#define SEL_ENET_TXD1_ALT2 0x0
#define SEL_GPIO_5_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_SDO3_SDI2_SELECT_INPUT
// DAISY
#define SEL_ENET_TX_EN_ALT2 0x0
#define SEL_GPIO_16_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_SDO4_SDI1_SELECT_INPUT
// DAISY
#define SEL_ENET_TXD0_ALT2 0x0
#define SEL_GPIO_7_ALT0    0x1

// IOMUXC_ESAI_IPP_IND_SDO5_SDI0_SELECT_INPUT
// DAISY
#define SEL_ENET_MDC_ALT2 0x0
#define SEL_GPIO_8_ALT0   0x1

// IOMUXC_HDMI_TX_ICECIN_SELECT_INPUT
// DAISY
#define SEL_EIM_A25_ALT6  0x0
#define SEL_KEY_ROW2_ALT6 0x1

// IOMUXC_HDMI_TX_II2C_MSTH13TDDC_SCLIN_SELECT_INPUT
// DAISY
#define SEL_EIM_EB2_ALT4  0x0
#define SEL_KEY_COL3_ALT2 0x1

// IOMUXC_HDMI_TX_II2C_MSTH13TDDC_SDAIN_SELECT_INPUT
// DAISY
#define SEL_EIM_D16_ALT4  0x0
#define SEL_KEY_ROW3_ALT2 0x1

// IOMUXC_I2C1_IPP_SCL_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D21_ALT6   0x0
#define SEL_CSI0_DAT9_ALT4 0x1

// IOMUXC_I2C1_IPP_SDA_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D28_ALT1   0x0
#define SEL_CSI0_DAT8_ALT4 0x1

// IOMUXC_I2C2_IPP_SCL_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_EB2_ALT6  0x0
#define SEL_KEY_COL3_ALT4 0x1

// IOMUXC_I2C2_IPP_SDA_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D16_ALT6  0x0
#define SEL_KEY_ROW3_ALT4 0x1

// IOMUXC_I2C3_IPP_SCL_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D17_ALT6 0x0
#define SEL_GPIO_3_ALT2  0x1
#define SEL_GPIO_5_ALT6  0x2

// IOMUXC_I2C3_IPP_SDA_IN_SELECT_INPUT
// DAISY
#define SEL_EIM_D18_ALT6 0x0
#define SEL_GPIO_6_ALT2  0x1
#define SEL_GPIO_16_ALT6 0x2

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_10_SELECT_INPUT
// DAISY
#define SEL_EIM_D22_ALT3 0x0
#define SEL_EIM_EB1_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_11_SELECT_INPUT
// DAISY
#define SEL_EIM_D21_ALT3 0x0
#define SEL_EIM_EB0_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_12_SELECT_INPUT
// DAISY
#define SEL_EIM_D28_ALT3 0x0
#define SEL_EIM_A17_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_13_SELECT_INPUT
// DAISY
#define SEL_EIM_D27_ALT3 0x0
#define SEL_EIM_A18_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_14_SELECT_INPUT
// DAISY
#define SEL_EIM_D26_ALT3 0x0
#define SEL_EIM_A19_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_15_SELECT_INPUT
// DAISY
#define SEL_EIM_D20_ALT3 0x0
#define SEL_EIM_A20_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_16_SELECT_INPUT
// DAISY
#define SEL_EIM_D19_ALT3 0x0
#define SEL_EIM_A21_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_17_SELECT_INPUT
// DAISY
#define SEL_EIM_D18_ALT3 0x0
#define SEL_EIM_A22_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_18_SELECT_INPUT
// DAISY
#define SEL_EIM_D16_ALT3 0x0
#define SEL_EIM_A23_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_19_SELECT_INPUT
// DAISY
#define SEL_EIM_EB2_ALT3 0x0
#define SEL_EIM_A24_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_DATA_EN_SELECT_INPUT
// DAISY
#define SEL_EIM_D23_ALT4  0x0
#define SEL_EIM_DA10_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_HSYNC_SELECT_INPUT
// DAISY
#define SEL_EIM_EB3_ALT4  0x0
#define SEL_EIM_DA11_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_PIX_CLK_SELECT_INPUT
// DAISY
#define SEL_EIM_D17_ALT3 0x0
#define SEL_EIM_A16_ALT2 0x1

// IOMUXC_IPU2_IPP_IND_SENS1_VSYNC_SELECT_INPUT
// DAISY
#define SEL_EIM_D29_ALT6  0x0
#define SEL_EIM_DA12_ALT2 0x1

// IOMUXC_KPP_IPP_IND_COL_5_SELECT_INPUT
// DAISY
#define SEL_GPIO_0_ALT2    0x0
#define SEL_GPIO_19_ALT0   0x1
#define SEL_CSI0_DAT4_ALT3 0x2
#define SEL_SD2_CLK_ALT2   0x3

// IOMUXC_KPP_IPP_IND_COL_6_SELECT_INPUT
// DAISY
#define SEL_GPIO_9_ALT2    0x0
#define SEL_CSI0_DAT6_ALT3 0x1
#define SEL_SD2_DAT3_ALT2  0x2

// IOMUXC_KPP_IPP_IND_COL_7_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT1_ALT4  0x0
#define SEL_GPIO_4_ALT2    0x1
#define SEL_CSI0_DAT8_ALT3 0x2

// IOMUXC_KPP_IPP_IND_ROW_5_SELECT_INPUT
// DAISY
#define SEL_GPIO_1_ALT2    0x0
#define SEL_CSI0_DAT5_ALT3 0x1
#define SEL_SD2_CMD_ALT2   0x2

// IOMUXC_KPP_IPP_IND_ROW_6_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT2_ALT4  0x0
#define SEL_GPIO_2_ALT2    0x1
#define SEL_CSI0_DAT7_ALT3 0x2

// IOMUXC_KPP_IPP_IND_ROW_7_SELECT_INPUT
// DAISY
#define SEL_SD2_DAT0_ALT4  0x0
#define SEL_GPIO_5_ALT2    0x1
#define SEL_CSI0_DAT9_ALT3 0x2

// IOMUXC_MLB_MLB_CLK_IN_SELECT_INPUT
// DAISY
#define SEL_ENET_TXD1_ALT0 0x0
#define SEL_GPIO_3_ALT7    0x1

// IOMUXC_MLB_MLB_DATA_IN_SELECT_INPUT
// DAISY
#define SEL_ENET_MDC_ALT0 0x0
#define SEL_GPIO_2_ALT7   0x1

// IOMUXC_MLB_MLB_SIG_IN_SELECT_INPUT
// DAISY
#define SEL_ENET_RXD1_ALT0 0x0
#define SEL_GPIO_6_ALT7    0x1

// IOMUXC_SDMA_EVENTS_14_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT16_ALT4 0x0
#define SEL_GPIO_17_ALT3     0x1

// IOMUXC_SDMA_EVENTS_15_SELECT_INPUT
// DAISY
#define SEL_DISP0_DAT17_ALT4 0x0
#define SEL_GPIO_18_ALT3     0x1

// IOMUXC_SPDIF_SPDIF_IN1_SELECT_INPUT
// DAISY
#define SEL_EIM_D21_ALT7    0x0
#define SEL_ENET_RX_ER_ALT3 0x1
#define SEL_KEY_COL3_ALT6   0x2
#define SEL_GPIO_16_ALT4    0x3

// IOMUXC_SPDIF_TX_CLK2_SELECT_INPUT
// DAISY
#define SEL_RGMII_TXC_ALT2   0x0
#define SEL_ENET_CRS_DV_ALT3 0x1

// IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT
// DAISY
#define SEL_EIM_D19_ALT4  0x0
#define SEL_EIM_D20_ALT4  0x1
#define SEL_SD3_DAT0_ALT1 0x2
#define SEL_SD3_DAT1_ALT1 0x3

// IOMUXC_UART1_IPP_UART_RXD_MUX_SELECT_INPUT
// DAISY
#define SEL_CSI0_DAT10_ALT3 0x0
#define SEL_CSI0_DAT11_ALT3 0x1
#define SEL_SD3_DAT7_ALT1   0x2
#define SEL_SD3_DAT6_ALT1   0x3

// IOMUXC_UART2_IPP_UART_RTS_B_SELECT_INPUT
// DAISY
#define SEL_EIM_D28_ALT4  0x0
#define SEL_EIM_D29_ALT4  0x1
#define SEL_SD3_CMD_ALT1  0x2
#define SEL_SD3_CLK_ALT1  0x3
#define SEL_SD4_DAT5_ALT2 0x4
#define SEL_SD4_DAT6_ALT2 0x5

// IOMUXC_UART2_IPP_UART_RXD_MUX_SELECT_INPUT
// DAISY
#define SEL_EIM_D26_ALT4  0x0
#define SEL_EIM_D27_ALT4  0x1
#define SEL_GPIO_7_ALT4   0x2
#define SEL_GPIO_8_ALT4   0x3
#define SEL_SD3_DAT5_ALT1 0x4
#define SEL_SD3_DAT4_ALT1 0x5
#define SEL_SD4_DAT4_ALT2 0x6
#define SEL_SD4_DAT7_ALT2 0x7

// IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT
// DAISY
#define SEL_EIM_D23_ALT2  0x0
#define SEL_EIM_EB3_ALT2  0x1
#define SEL_EIM_D30_ALT4  0x2
#define SEL_EIM_D31_ALT4  0x3
#define SEL_SD3_DAT3_ALT1 0x4
#define SEL_SD3_RST_ALT1  0x5

// IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT
// DAISY
#define SEL_EIM_D24_ALT2 0x0
#define SEL_EIM_D25_ALT2 0x1
#define SEL_SD4_CMD_ALT2 0x2
#define SEL_SD4_CLK_ALT2 0x3

// IOMUXC_UART4_IPP_UART_RTS_B_SELECT_INPUT
// DAISY
#define SEL_CSI0_DAT16_ALT3 0x0
#define SEL_CSI0_DAT17_ALT3 0x1

// IOMUXC_UART4_IPP_UART_RXD_MUX_SELECT_INPUT
// DAISY
#define SEL_KEY_COL0_ALT4   0x0
#define SEL_KEY_ROW0_ALT4   0x1
#define SEL_CSI0_DAT12_ALT3 0x2
#define SEL_CSI0_DAT13_ALT3 0x3

// IOMUXC_UART5_IPP_UART_RTS_B_SELECT_INPUT
// DAISY
#define SEL_KEY_COL4_ALT4   0x0
#define SEL_KEY_ROW4_ALT4   0x1
#define SEL_CSI0_DAT18_ALT3 0x2
#define SEL_CSI0_DAT19_ALT3 0x3

// IOMUXC_UART5_IPP_UART_RXD_MUX_SELECT_INPUT
// DAISY
#define SEL_KEY_COL1_ALT4   0x0
#define SEL_KEY_ROW1_ALT4   0x1
#define SEL_CSI0_DAT14_ALT3 0x2
#define SEL_CSI0_DAT15_ALT3 0x3

// IOMUXC_USBOH3_IPP_IND_OTG_OC_SELECT_INPUT
// DAISY
#define SEL_EIM_D21_ALT4  0x0
#define SEL_KEY_COL4_ALT2 0x1

// IOMUXC_USBOH3_IPP_IND_UH1_OC_SELECT_INPUT
// DAISY
#define SEL_EIM_D30_ALT6 0x0
#define SEL_GPIO_3_ALT6  0x1

// IOMUXC_USDHC1_IPP_WP_ON_SELECT_INPUT
// DAISY
#define SEL_DI0_PIN4_ALT3 0x0
#define SEL_GPIO_9_ALT6   0x1

#endif // _IOMUX_DEFINE_H_
