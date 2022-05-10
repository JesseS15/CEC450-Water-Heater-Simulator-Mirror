#ifndef __IOMUX__H
#define __IOMUX__H

#include "iomux_register.h"
#include "iomux_define.h"
#include <stdint.h>

#define ARMP_IPG_CLK_EN (1 << 27)
#define ARMP_AHB_CLK_EN (1 << 26)

void iomux_enable_armp_ipg_clk();
void iomux_enable_armp_ahb_clk();
void iomux_configure_gpio_pin(int32_t mux_pad_address, int32_t ctl_pad_address);

#endif