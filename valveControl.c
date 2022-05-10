/** @file valveControl.c
 *  
 * 
 *  @author Daniel Carter, Zack Hagerty
 * 
 *
 */
 
#include "valvecontrol.h"
#include "tankSim.h"
#include <wdLib.h>

#define OPENVALVE 1
#define CLOSEDVALVE 0

//Controls Valve Operation
void controlValves(){

    if(getWaterSensorStatus(1) == INACTIVE){

        setValveStatus(INPUT_VALVE_2_ID, OPENVALVE);
        setValveStatus(INPUT_VALVE_1_ID, OPENVALVE);
        setValveStatus(OUTPUT_VALVE_ID, CLOSEDVALVE);
        taskDelay(120);
    }
    
    if(getWaterSensorStatus(4) ==  ACTIVE) {

        setValveStatus(INPUT_VALVE_1_ID, CLOSEDVALVE);
        setValveStatus(INPUT_VALVE_2_ID, CLOSEDVALVE);
        setValveStatus(OUTPUT_VALVE_ID, OPENVALVE);
        taskDelay(120);
    }
    
    if(getPressure() >= HIGH_PRES_THRESHOLD)
    {

        setValveStatus(INPUT_VALVE_1_ID, CLOSEDVALVE);
        setValveStatus(INPUT_VALVE_2_ID, CLOSEDVALVE);
        setValveStatus(OUTPUT_VALVE_ID, OPENVALVE);
    }
    
    if(getPressure() <= LOW_PRES_THRESHOLD)
       {
        	setValveStatus(INPUT_VALVE_2_ID, OPENVALVE);
        	setValveStatus(INPUT_VALVE_1_ID, OPENVALVE);
        	setValveStatus(OUTPUT_VALVE_ID, CLOSEDVALVE);
       }

}


void initializeValveWatchdog()
{
    while(1){
    	controlValves();
		taskDelay(sysClkRateGet() * 1);
    }
}

void valveSetup()
{
   taskSpawn("tValveControl",90, 0x100, 2000, (FUNCPTR) initializeValveWatchdog, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
} 
