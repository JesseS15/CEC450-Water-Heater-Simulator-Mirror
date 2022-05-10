/** @file waterLevelSensor.h
 *  
 * 
 *  @author Miles Osborne / Daniel Carter
 * 
 *  
 *  
 */

#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <sysLib.h>
#include <msgQLib.h>
#include <timers.h>
#include <time.h>
#include <stdint.h>
#include "tankSim.h"


void updateWaterLevel();

void waterLevelSetup();

void initializeWaterLevels();
