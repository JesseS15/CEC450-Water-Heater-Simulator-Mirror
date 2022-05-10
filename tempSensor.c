/** 
 * @file tempSensor.c
 *
 * @brief This file defines the functions utilized for the temperature sensor 
 *
 * @author Miles Osborne, Jesse Slager, Daniel Carter
 *
 */

#include "tempSensor.h"
#include "tankSim.h"


// Manages temp Operation
void temperatureSetup()
{
	taskSpawn("tTemperatureControl", 90, 0x100, 2000, (FUNCPTR) initializeTemperatureWatchdog, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}


void initializeTemperatureWatchdog()
{
	while(1)
	{
		heaterToggler();
		temperatureSensor();
		taskDelay(sysClkRateGet() * 1);
	}
}

void heaterToggler()
{
	if(tankConfig.currentTemperature >= tankConfig.maxTemperature)
	{
		setHeaterStatus(false);
	}
	else if(tankConfig.currentTemperature <= tankConfig.minTemperature)
	{
		setHeaterStatus(true);
	}
}

void temperatureSensor()
{
	if(tankConfig.heaterOn == true)
	{
		tankConfig.currentTemperature += WATERHEATINGRATE;
	}
	else if(tankConfig.heaterOn == false)
	{
		tankConfig.currentTemperature -= WATERHEATINGRATE;
	}
}



