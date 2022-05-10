/** @file waterLevelSensor.c
 *
 *
 * @author Miles Osborne / Daniel Carter
 *
 *
 *
 *
 */
#include "waterLevelSensor.h"
#include "valveControl.h"


void waterLevelSetup()
{
    taskSpawn("tWaterControl",90, 0x100, 2000, (FUNCPTR) initializeWaterLevels, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}



void initializeWaterLevels()
{
    while(1){
        updateWaterLevel();
        taskDelay(sysClkRateGet() / 1 );
    }
}


void updateWaterLevel()
{
    if(tankConfig.valves[2] == INACTIVE)
    {
        tankConfig.waterLevel += FLOWRATE;
        tankConfig.waterRising = true;
    }
    else if(tankConfig.valves[2] == ACTIVE)
    {
    	tankConfig.valves[0] = 0;
    	tankConfig.valves[1] = 0;
    	tankConfig.waterLevel -= FLOWRATE;
    	tankConfig.waterRising = false;
    }
}



