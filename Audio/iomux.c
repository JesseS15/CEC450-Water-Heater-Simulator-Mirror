#include "iomux.h"

void iomux_enable_armp_ipg_clk(){
    int32_t* iomuxc_gpr12 = (int32_t *)IOMUXC_GPR12;
    *iomuxc_gpr12 |= ARMP_IPG_CLK_EN;
}

void iomux_enable_armp_ahb_clk(){
    int32_t* iomuxc_gpr12 = (int32_t *)IOMUXC_GPR12;
    *iomuxc_gpr12 |= ARMP_AHB_CLK_EN;
}

void iomux_configure_gpio_pin(int32_t mux_pad_address, int32_t ctl_pad_address){
    printf("Declaring mux_pad and ctl_pad address\n");
    int32_t *pad_reg = (int32_t *)mux_pad_address;
	int32_t *ctl_reg = (int32_t *)ctl_pad_address;
    printf("Finished declaring mux_pad and ctl_pad address\n");

    printf("Storing value back at pad_reg and ctl_reg\n");
    *pad_reg |= ALT5;
	*ctl_reg |= ALT5;
}
