#ifndef __NXP_IMX6_GPIO
#define __NXP_IMX6_GPIO

#include <stdint.h>
#include "iomux.h"
#include "CCM.h"
#include "GPIO_reg.h"

typedef struct
{
    int32_t *dr;
    int32_t *gdir;
    int32_t *psr;
    int32_t *icr1;
    int32_t *icr2;
    int32_t *imr;
    int32_t *isr;
    int32_t *edge_sel;
} gpio_reg_t;

typedef struct GPIO_settings
{
    gpio_reg_t *port;
    uint8_t pin_num;
    uint8_t mode;
    int32_t iomux_ctl_pad_addr;
    int32_t iomux_mux_pad_addr;
} gpio_usr_config;

/*Macros to access GPIO and peripheral registers*/
#define GPIO1 ((gpio_reg_t *)(GPIO1_BASE))
#define GPIO2 ((gpio_reg_t *)(GPIO2_BASE))
#define GPIO3 ((gpio_reg_t *)(GPIO3_BASE))
#define GPIO4 ((gpio_reg_t *)(GPIO4_BASE))
#define GPIO5 ((gpio_reg_t *)(GPIO5_BASE))
#define GPIO6 ((gpio_reg_t *)(GPIO6_BASE))
#define GPIO7 ((gpio_reg_t *)(GPIO7_BASE))



/**GPIO modes**/
#define GPIO_MDOE_INPUT     1
#define GPIO_MODE_OUTPUT    0

/**GPIO pins**/
#define GPIO_PIN_0  0
#define GPIO_PIN_1  1
#define GPIO_PIN_2  2
#define GPIO_PIN_3  3
#define GPIO_PIN_4  4
#define GPIO_PIN_5  5
#define GPIO_PIN_6  6
#define GPIO_PIN_7  7
#define GPIO_PIN_8  8
#define GPIO_PIN_9  9
#define GPIO_PIN_10 10
#define GPIO_PIN_11 11
#define GPIO_PIN_12 12
#define GPIO_PIN_13 13
#define GPIO_PIN_14 14
#define GPIO_PIN_15 15
#define GPIO_PIN_16 16
#define GPIO_PIN_17 17
#define GPIO_PIN_18 18
#define GPIO_PIN_19 19
#define GPIO_PIN_20 20
#define GPIO_PIN_21 21
#define GPIO_PIN_22 22
#define GPIO_PIN_23 23
#define GPIO_PIN_24 24
#define GPIO_PIN_25 25
#define GPIO_PIN_26 26
#define GPIO_PIN_27 27
#define GPIO_PIN_28 28
#define GPIO_PIN_29 29
#define GPIO_PIN_30 30
#define GPIO_PIN_31 31

gpio_usr_config global_gpio;

uint8_t gpio_pin_read(gpio_reg_t *gpio_port, uint8_t pin_num);

void gpio_pin_write(gpio_reg_t *gpio_port, uint8_t pin_num, uint8_t value);

void gpio_pin_toggle(gpio_reg_t *gpio_port, uint8_t pin_num);

int32_t gpio_get_port_addr(gpio_reg_t* port);

void gpio_input_init(gpio_reg_t *port, uint8_t pin_num);

void gpio_output_init(gpio_reg_t *port, uint8_t pin_num);

void gpio_clock_en();

#endif
