#include "CCM.h"

void enable_IOMUXC(void){
	int enable_iomux = (1 << IOMUX_IPT_CLK_IO_EN1) | (1 << IOMUX_IPT_CLK_IO_EN2);
	*CCGR2 |= enable_iomux;
}