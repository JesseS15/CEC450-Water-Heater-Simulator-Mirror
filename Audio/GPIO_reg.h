#ifndef __NXP_IMX6_GPIO_REGS__
#define __NXP_IMX6_GPIO_REGS__

#include <stdint.h>

/**GPIOx base addresses**/
#define GPIO1_BASE 0x0209C000
#define GPIO2_BASE 0x020A0000
#define GPIO3_BASE 0x020A4000
#define GPIO4_BASE 0x020A8000
#define GPIO5_BASE 0x020AC000
#define GPIO6_BASE 0x020B0000
#define GPIO7_BASE 0x020B4000

/**GPIOx peripheral adddress offsets**/
#define GPIO_DR_OFFSET 0
#define GPIO_GDIR_OFFSET 0x4
#define GPIO_PSR_OFFSET 0x8
#define GPIO_ICR1_OFFSET 0xC
#define GPIO_ICR2_OFFSET 0x10
#define GPIO_IMR_OFFSET 0x14
#define GPIO_ISR_OFFSET 0x18
#define GPIO_EDGE_SEL_OFFSET 0x1C

/**GPIO1 peripherals**/
#define GPIO1_DR        ((int32_t *) (GPIO1_BASE+GPIO_DR_OFFSET))
#define GPIO1_GDIR      ((int32_t *) (GPIO1_BASE+GPIO_GDIR_OFFSET))
#define GPIO1_PSR       ((int32_t *) (GPIO1_BASE+GPIO_PSR_OFFSET))
#define GPIO1_ICR       ((int32_t *) (GPIO1_BASE+GPIO_ICR1_OFFSET))
#define GPIO1_ICR2      ((int32_t *) (GPIO1_BASE+GPIO_ICR2_OFFSET))
#define GPIO1_IMR       ((int32_t *) (GPIO1_BASE+GPIO_IMR_OFFSET))
#define GPIO1_ISR       ((int32_t *) (GPIO1_BASE+GPIO_ISR_OFFSET))
#define GPIO1_EDGE_SEL  ((int32_t *) (GPIO1_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO2 peripherals**/
#define GPIO2_DR        ((int32_t *) (GPIO2_BASE+GPIO_DR_OFFSET))
#define GPIO2_GDIR      ((int32_t *) (GPIO2_BASE+GPIO_GDIR_OFFSET))
#define GPIO2_PSR       ((int32_t *) (GPIO2_BASE+GPIO_PSR_OFFSET))
#define GPIO2_ICR       ((int32_t *) (GPIO2_BASE+GPIO_ICR1_OFFSET))
#define GPIO2_ICR2      ((int32_t *) (GPIO2_BASE+GPIO_ICR2_OFFSET))
#define GPIO2_IMR       ((int32_t *) (GPIO2_BASE+GPIO_IMR_OFFSET))
#define GPIO2_ISR       ((int32_t *) (GPIO2_BASE+GPIO_ISR_OFFSET))
#define GPIO2_EDGE_SEL  ((int32_t *) (GPIO2_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO3 peripherals**/
#define GPIO3_DR        ((int32_t *) (GPIO3_BASE+GPIO_DR_OFFSET))
#define GPIO3_GDIR      ((int32_t *) (GPIO3_BASE+GPIO_GDIR_OFFSET))
#define GPIO3_PSR       ((int32_t *) (GPIO3_BASE+GPIO_PSR_OFFSET))
#define GPIO3_ICR       ((int32_t *) (GPIO3_BASE+GPIO_ICR1_OFFSET))
#define GPIO3_ICR2      ((int32_t *) (GPIO3_BASE+GPIO_ICR2_OFFSET))
#define GPIO3_IMR       ((int32_t *) (GPIO3_BASE+GPIO_IMR_OFFSET))
#define GPIO3_ISR       ((int32_t *) (GPIO3_BASE+GPIO_ISR_OFFSET))
#define GPIO3_EDGE_SEL  ((int32_t *) (GPIO3_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO4 peripherals**/
#define GPIO4_DR        ((int32_t *) (GPIO4_BASE+GPIO_DR_OFFSET))
#define GPIO4_GDIR      ((int32_t *) (GPIO4_BASE+GPIO_GDIR_OFFSET))
#define GPIO4_PSR       ((int32_t *) (GPIO4_BASE+GPIO_PSR_OFFSET))
#define GPIO4_ICR       ((int32_t *) (GPIO4_BASE+GPIO_ICR1_OFFSET))
#define GPIO4_ICR2      ((int32_t *) (GPIO4_BASE+GPIO_ICR2_OFFSET))
#define GPIO4_IMR       ((int32_t *) (GPIO4_BASE+GPIO_IMR_OFFSET))
#define GPIO4_ISR       ((int32_t *) (GPIO4_BASE+GPIO_ISR_OFFSET))
#define GPIO4_EDGE_SEL  ((int32_t *) (GPIO4_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO5 peripherals**/
#define GPIO5_DR        ((int32_t *) (GPIO5_BASE+GPIO_DR_OFFSET))
#define GPIO5_GDIR      ((int32_t *) (GPIO5_BASE+GPIO_GDIR_OFFSET))
#define GPIO5_PSR       ((int32_t *) (GPIO5_BASE+GPIO_PSR_OFFSET))
#define GPIO5_ICR       ((int32_t *) (GPIO5_BASE+GPIO_ICR1_OFFSET))
#define GPIO5_ICR2      ((int32_t *) (GPIO5_BASE+GPIO_ICR2_OFFSET))
#define GPIO5_IMR       ((int32_t *) (GPIO5_BASE+GPIO_IMR_OFFSET))
#define GPIO5_ISR       ((int32_t *) (GPIO5_BASE+GPIO_ISR_OFFSET))
#define GPIO5_EDGE_SEL  ((int32_t *) (GPIO5_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO6 peripherals**/
#define GPIO6_DR        ((int32_t *) (GPIO6_BASE+GPIO_DR_OFFSET))
#define GPIO6_GDIR      ((int32_t *) (GPIO6_BASE+GPIO_GDIR_OFFSET))
#define GPIO6_PSR       ((int32_t *) (GPIO6_BASE+GPIO_PSR_OFFSET))
#define GPIO6_ICR       ((int32_t *) (GPIO6_BASE+GPIO_ICR1_OFFSET))
#define GPIO6_ICR2      ((int32_t *) (GPIO6_BASE+GPIO_ICR2_OFFSET))
#define GPIO6_IMR       ((int32_t *) (GPIO6_BASE+GPIO_IMR_OFFSET))
#define GPIO6_ISR       ((int32_t *) (GPIO6_BASE+GPIO_ISR_OFFSET))
#define GPIO6_EDGE_SEL  ((int32_t *) (GPIO6_BASE+GPIO_EDGE_SEL_OFFSET))

/**GPIO7 peripherals**/
#define GPIO7_DR        ((int32_t *) (GPIO7_BASE+GPIO_DR_OFFSET))
#define GPIO7_GDIR      ((int32_t *) (GPIO7_BASE+GPIO_GDIR_OFFSET))
#define GPIO7_PSR       ((int32_t *) (GPIO7_BASE+GPIO_PSR_OFFSET))
#define GPIO7_ICR       ((int32_t *) (GPIO7_BASE+GPIO_ICR1_OFFSET))
#define GPIO7_ICR2      ((int32_t *) (GPIO7_BASE+GPIO_ICR2_OFFSET))
#define GPIO7_IMR       ((int32_t *) (GPIO7_BASE+GPIO_IMR_OFFSET))
#define GPIO7_ISR       ((int32_t *) (GPIO7_BASE+GPIO_ISR_OFFSET))
#define GPIO7_EDGE_SEL  ((int32_t *) (GPIO7_BASE+GPIO_EDGE_SEL_OFFSET))

#endif
