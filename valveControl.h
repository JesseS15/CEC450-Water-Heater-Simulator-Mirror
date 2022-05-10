//author = zack

#include <vxWorks.h>
#include <time.h>
#include <taskLib.h>
#include <sysLib.h>


WDOG_ID wd_valve;

void controlValves();

void valveSetup();

void initializeValveWatchdog();


