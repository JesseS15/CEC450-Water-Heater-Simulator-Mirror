#ifndef __CCM__H
#define __CCM__H

//#include "CCM_reg.h"
#include <stdint.h>

#define CCGR2 ((int32_t*) (0x02e0C4070))
#define IOMUX_IPT_CLK_IO_EN1 14
#define IOMUX_IPT_CLK_IO_EN2 15

void enable_IOMUXC(void);

#endif
