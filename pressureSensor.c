/** 
 * @file pressureSensor.c
 *
 * @brief This file defines the functions utilized for the water pressure sensor
 *
 * @author Jesse Slager
 *
 */

//pressure sensor needs to do these things:
// The  pressure  should  start  building  up  if  the  water  level  surpasses  the second  to  the  highest  water  level  sensor.
// If the system reaches the critical pressure of 50 psi (344 kPa), the water drain must be open to provide a pressure relief. <= drain valve I/O
// The  pressure  builds  up  quickly  is  the  water temperature is kept close to a 100 °C. <= temp sensor

 #include "pressureSensor.h"
 #include "tankSim.h"


// Checks for valve status and changes pressure build rate accordingly


void pressureSetup()
{
	taskSpawn("tPressureControl", 90, 0x100, 2000, (FUNCPTR) initializePressureSensor, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void initializePressureSensor()
{
	while(1)
	{
		pressureValve();
		pressureLowering();
		taskDelay(sysClkRateGet() / 1 );
	}
}

void pressureValve() 
{
	if((tankConfig.valves[0] == 1) && (tankConfig.valves[1] == 1) && (tankConfig.currentPressure < tankConfig.maxPressure)) {
		tankConfig.currentPressure += NORMAL_PRESSURE_RATE;
	}else if ((tankConfig.valves[0] == 1) && (tankConfig.valves[1] == 1) && (tankConfig.waterLevel > tankConfig.sensorLevelThree) && (tankConfig.currentTemperature >= 87) && (tankConfig.currentPressure < tankConfig.maxPressure)) {
		tankConfig.currentPressure += HIGH_PRESSURE_RATE;
	}
}

void pressureLowering()
{
	if (tankConfig.valves[2] == 1)
	{
		tankConfig.currentPressure -= NORMAL_PRESSURE_RATE;
	}
}

