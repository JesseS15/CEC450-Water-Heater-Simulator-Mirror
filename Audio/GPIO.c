#include "GPIO.h"

void gpio_init() {
	printf("Starting iomux_configure_gpio_pin\n");
	iomux_configure_gpio_pin(global_gpio.iomux_mux_pad_addr,
			global_gpio.iomux_ctl_pad_addr);

	switch (global_gpio.mode) {
	case GPIO_MDOE_INPUT:
		gpio_input_init(global_gpio.port, global_gpio.pin_num);
		break;

	case GPIO_MODE_OUTPUT:
		gpio_output_init(global_gpio.port, global_gpio.pin_num);
		break;
	default:
		break;
	}
}

uint8_t gpio_pin_read(gpio_reg_t* gpio_port, uint8_t pin_num) {
	return *gpio_port->dr;
}

void gpio_pin_write(gpio_reg_t* gpio_port, uint8_t pin_num, uint8_t value) {
	if (value == 1) {
		*(gpio_port->dr) |= (1 << pin_num);
	} else {
		*(gpio_port->dr) &= ~(1 << pin_num);
	}
}

void gpio_pin_toggle(gpio_reg_t* gpio_port, uint8_t pin_num) {
	*gpio_port->dr ^= (1 << pin_num);
}

int32_t gpio_get_port_addr(gpio_reg_t* port) {
	return &port;
}

void gpio_input_init(gpio_reg_t* port, uint8_t pin_num) {
	*port->gdir |= (1u << pin_num);
}

void gpio_output_init(gpio_reg_t* port, uint8_t pin_num) {
	*port->gdir &= ~(1u << pin_num);
}

void gpio_clock_en() {
	#if 0
	enable_IOMUXC();
	printf("Complete enable_IOMUXC\n");
	iomux_enable_armp_ahb_clk();
	printf("Completed iomux_enable_armp_ahb_clk()\n");
	iomux_enable_armp_ipg_clk();
	printf("Completed iomux_enable_armp_ipg_clk()\n");
	#endif

	//Enable IOMUXC
	int *CCM_CCGR2 = (int*)0x20C4070;
	int enable_iomux = (1 << 14) | (1 << 15);
	*CCM_CCGR2 |= enable_iomux;

	int* iomuxc_gpr12 = (int*)0x20E0030;
	//Enable ARMP_IPG_CLK
	*iomuxc_gpr12 |= ARMP_IPG_CLK_EN;
	
	//Enable AMP_AHB_CL_EN
	*iomuxc_gpr12 |= ARMP_AHB_CLK_EN;
	
}


/**Dedicated GPIO output enable pins**/
void enable_GPIO09(void){
	int *pad_reg = (int *)IOMUXC_SW_MUX_CTL_PAD_GPIO_9 ;
	int *ctl_reg = (int *)IOMUXC_SW_PAD_CTL_PAD_GPIO_9;
	*pad_reg &= ~(0x7);
	*ctl_reg &= ~(0x7);

	*pad_reg |= (ALT5);
	*ctl_reg |= (ALT5);
	
	int *gpio_gdir_reg = GPIO1_GDIR;
	*gpio_gdir_reg |= (1<<GPIO_PIN_9); //Configure as output
}

/**Dedicated GPIO output enable pins**/
void enable_GPIO16(void){
	int *pad_reg = (int *)IOMUXC_SW_MUX_CTL_PAD_GPIO_16;
	int *ctl_reg = (int *)IOMUXC_SW_PAD_CTL_PAD_GPIO_16;
	*pad_reg &= ~(0x7);
	*ctl_reg &= ~(0x7);
	
	*pad_reg |= (ALT5);
	*ctl_reg |= (ALT5);
	
	int *gpio_gdir_reg = GPIO7_GDIR;
	*gpio_gdir_reg |= (1<<GPIO_PIN_11); //Configure as output
}

/**Dedicated GPIO output enable pins**/
void enable_GPIO5(void){
	int *pad_reg = (int *)IOMUXC_SW_MUX_CTL_PAD_GPIO_5;
	int *ctl_reg = (int *)IOMUXC_SW_PAD_CTL_PAD_GPIO_5;
	*pad_reg &= ~(0x7);
	*ctl_reg &= ~(0x7);
	
	*pad_reg |= (ALT5);
	*ctl_reg |= (ALT5);
	
	int *gpio_gdir_reg = GPIO1_GDIR;
	*gpio_gdir_reg |= (1<<GPIO_PIN_5); //Configure as output
}

void enable_GPIO18(void){
	int *pad_reg = (int *)IOMUXC_SW_MUX_CTL_PAD_GPIO_18;
	int *ctl_reg = (int *)IOMUXC_SW_PAD_CTL_PAD_GPIO_18;
	*pad_reg &= ~(0x7);
	*ctl_reg &= ~(0x7);
	
	*pad_reg |= (ALT5);
	*ctl_reg |= (ALT5);
	
	int *gpio_gdir_reg = GPIO7_GDIR;
	*gpio_gdir_reg |= (1<<GPIO_PIN_13); //Configure as output
}

void enable_GPIO19(void){
	int *pad_reg = (int *)IOMUXC_SW_MUX_CTL_PAD_GPIO_19;
	int *ctl_reg = (int *)IOMUXC_SW_PAD_CTL_PAD_GPIO_19;
	*pad_reg &= ~(0x7);
	*ctl_reg &= ~(0x7);
	
	*pad_reg |= (ALT5);
	*ctl_reg |= (ALT5);
	
	int *gpio_gdir_reg = GPIO4_GDIR;
	*gpio_gdir_reg |= (1<<GPIO_PIN_5); //Configure as output
}

void gpio09_write(uint8_t value){
	int *dr = GPIO1_DR;
	if(value == 1){
		*dr |= (1u << GPIO_PIN_9);
	}else{
		*dr &= ~(1u << GPIO_PIN_9);
	}
}

void gpio16_write(uint8_t value){
	int *dr = GPIO7_DR;
	if(value == 1){
		*dr |= (1u << GPIO_PIN_11);
	}else{
		*dr &= ~(1u << GPIO_PIN_11);
	}
}

void gpio05_write(uint8_t value){
	int *dr = GPIO1_DR;
	if(value == 1){
		*dr |= (1u << GPIO_PIN_5);
	}else{
		*dr &= ~(1u << GPIO_PIN_5);
	}
}

void gpio18_write(uint8_t value){
	int *dr = GPIO7_DR;
	if(value == 1){
		*dr |= (1u << GPIO_PIN_13);
	}else{
		*dr &= ~(1u << GPIO_PIN_13);
	}
}

void gpio19_write(uint8_t value){
	int *dr = GPIO4_DR;
	if(value == 1){
		*dr |= (1u << GPIO_PIN_5);
	}else{
		*dr &= ~(1u << GPIO_PIN_5);
	}
}
