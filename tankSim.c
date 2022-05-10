/* @file tankSim.c
 *  
 * @brief 
 *
 * @author Miles Osborne
 * 
 *  
 */

#include <stdlib.h>
#include "tempSensor.h"
#include "tankSim.h"
#include "Audio/audio_interface.h"
#include <stdio.h>

//Set up all the semaphores. Migth be intention of the above function, but I did not write that so I'm leaving it alone 
void startup(int maxTemp, int minTemp, int waterSensorHighest,
		int waterSensorLowest) {
	valueTests(maxTemp, minTemp, waterSensorHighest, waterSensorLowest);
	InitializeEverything();
	int difference = waterSensorHighest - waterSensorLowest;
	int spacing = difference / 4;

	tankConfig.waterLevelSemaphore = semMCreate(0);
	tankConfig.valveSemaphore = semMCreate(0);
	tankConfig.temperatureSemaphore = semMCreate(0);
	tankConfig.pressureSemaphore = semMCreate(0);

	tankConfig.maxPressure = HIGH_PRES_THRESHOLD;
	tankConfig.currentPressure = 14.7;

	tankConfig.sensorLevelFour = waterSensorHighest;
	tankConfig.sensorLevelThree = waterSensorHighest - spacing;
	tankConfig.sensorLevelTwo = waterSensorLowest + spacing;
	tankConfig.sensorLevelOne = waterSensorLowest;
	tankConfig.waterLevel =
			(waterSensorLowest - 5 < 0) ? 0 : waterSensorLowest - 5;
	tankConfig.waterRising = true;

	tankConfig.minTemperature = minTemp;
	tankConfig.maxTemperature = maxTemp;
	tankConfig.currentTemperature = minTemp;
	tankConfig.heaterOn = true;

	tankConfig.valves[INPUT_VALVE_2_ID] = ACTIVE;
	tankConfig.valves[INPUT_VALVE_1_ID] = ACTIVE;
	tankConfig.valves[OUTPUT_VALVE_ID] = INACTIVE;

	tankConfig.levelSensor[FOURTH_WATER_SENSOR] = INACTIVE;
	tankConfig.levelSensor[THIRD_WATER_SENSOR] = INACTIVE;
	tankConfig.levelSensor[SECOND_WATER_SENSOR] = INACTIVE;
	tankConfig.levelSensor[FIRST_WATER_SENSOR] = INACTIVE;

	taskSpawn("tWaterTank", 100, 0x100, 2000, (FUNCPTR) startProgram, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0);
	//TODO: RUN AUDIO HERE!!!!!
	audio_init();
	play_track(1); //Play startup track
	taskDelay(20);

}

void valueTests(int maxTemp, int minTemp, int waterSensorHighest,
		int waterSensorLowest) {
	if (maxTemp < minTemp) {
		printf(
				"MaxTemperature Less than Minumum Temperature. Reset board and attempt with correct paramaters.");
		exit(0);
	}
	if (waterSensorHighest < waterSensorLowest) {
		printf(
				"WaterSensor Highest Lower than WaterSensor Lowest. Reset board and attempt with correct paramaters.");
		exit(0);
	}
	if (maxTemp < 0 || minTemp < 0 || waterSensorHighest < 0
			|| waterSensorLowest < 0) {
		printf(
				"Negative value detected. Reset board and attempt with correct paramaters.");
		exit(0);
	}

	if (waterSensorHighest > 50) {
		printf(
				"waterSensorHighest above tank's limit. Reset board and attempt with correct paramaters.");
		exit(0);
	}
}

// Function definitions
void startProgram() {
	temperatureSetup();
	valveSetup();
	pressureSetup();
	waterLevelSetup();
	wd_tank_sim = wdCreate();

	while (1) {
		wdStart(wd_tank_sim, sysClkRateGet() * 10, logMsg,
				"Help, I've timed out!");

		//printf("Input valve 1: %d\n", tankConfig.valves[0]);
		//printf("Input valve 2: %d\n", tankConfig.valves[1]);
		//printf("Output valve: %d\n\n", tankConfig.valves[2]);
		taskDelay(60);
		updateConsole();
		updateAudio();
		//taskDelay(sysClkRateGet () / 60);
	}

}

void updateConsole() {
	char temp[MAX_MESSAGE_LENGTH];
	char pressure[MAX_MESSAGE_LENGTH];
	char waterlevel[MAX_MESSAGE_LENGTH];
	char inlet_valve_1[MAX_MESSAGE_LENGTH];
	char inlet_valve_2[MAX_MESSAGE_LENGTH];
	char outlet_valve[MAX_MESSAGE_LENGTH];

	sprintf(temp, "Temp = %hi ", tankConfig.currentTemperature);
	sprintf(pressure, "Pressure = %f ", tankConfig.currentPressure);
	sprintf(waterlevel, "Water Level = %u ", tankConfig.waterLevel);
	if (tankConfig.valves[0] == 1) {
		sprintf(inlet_valve_1, "Inlet valve 1 status: OPEN");
	} else {
		sprintf(inlet_valve_1, "Inlet valve 1 status: CLOSED");
	}

	if (tankConfig.valves[1] == 1) {
		sprintf(inlet_valve_2, "Inlet valve 2 status: OPEN");
	} else {
		sprintf(inlet_valve_2, "Inlet valve 2 status: CLOSED");
	}

	if (tankConfig.valves[2] == 1) {
		sprintf(outlet_valve, "Outlet valve status: OPEN");
	} else {
		sprintf(outlet_valve, "Outlet valve status: CLOSED");
	}


	Sender(temp);
	Sender(pressure);
	Sender(waterlevel);
	Sender(inlet_valve_1);
	Sender(inlet_valve_2);
	Sender(outlet_valve);

}

void setHeaterStatus(bool state) {
	semTake(tankConfig.temperatureSemaphore, WAIT_FOREVER);

	tankConfig.heaterOn = state;

	semGive(tankConfig.temperatureSemaphore);
}

void setValveStatus(int id, int state) {
	semTake(tankConfig.valveSemaphore, WAIT_FOREVER);

	//p
	tankConfig.valves[id] = state;

	semGive(tankConfig.valveSemaphore);
}

double getPressure() {
	semTake(tankConfig.pressureSemaphore, WAIT_FOREVER);

	double getPressure = tankConfig.currentPressure;

	semGive(tankConfig.pressureSemaphore);

	return getPressure;
}

int getWaterSensorStatus(int sensor) {

	semTake(tankConfig.waterLevelSemaphore, WAIT_FOREVER);

	if (tankConfig.waterRising) {
		if (tankConfig.waterLevel >= tankConfig.sensorLevelOne) {
			tankConfig.levelSensor[FIRST_WATER_SENSOR] = ACTIVE;
		}
		if (tankConfig.waterLevel >= tankConfig.sensorLevelTwo) {
			tankConfig.levelSensor[SECOND_WATER_SENSOR] = ACTIVE;
		}
		if (tankConfig.waterLevel >= tankConfig.sensorLevelThree) {
			tankConfig.levelSensor[THIRD_WATER_SENSOR] = ACTIVE;
		}
		if (tankConfig.waterLevel >= tankConfig.sensorLevelFour) {
			printf("Hey you reached the top!!!\n");
			tankConfig.levelSensor[FOURTH_WATER_SENSOR] = ACTIVE;
			tankConfig.waterRising = false;
		}
	} else {
		if (tankConfig.waterLevel <= tankConfig.sensorLevelOne) {
			tankConfig.levelSensor[FIRST_WATER_SENSOR] = INACTIVE;
		}
		if (tankConfig.waterLevel <= tankConfig.sensorLevelTwo) {
			tankConfig.levelSensor[SECOND_WATER_SENSOR] = INACTIVE;
		}
		if (tankConfig.waterLevel <= tankConfig.sensorLevelThree) {
			tankConfig.levelSensor[THIRD_WATER_SENSOR] = INACTIVE;
		}
		if (tankConfig.waterLevel <= tankConfig.sensorLevelFour) {
			tankConfig.levelSensor[FOURTH_WATER_SENSOR] = INACTIVE;
		}
	}
	semGive(tankConfig.waterLevelSemaphore);
	return tankConfig.levelSensor[sensor - 1];
}

void updateAudio(void) {
	if (tankConfig.waterLevel <= tankConfig.sensorLevelOne) {
		play_track(2);
	}
	if (tankConfig.waterLevel <= tankConfig.sensorLevelTwo) {
		play_track(3);
	}
	if (tankConfig.waterLevel <= tankConfig.sensorLevelThree) {
		play_track(4);
	}
	if (tankConfig.waterLevel <= tankConfig.sensorLevelFour) {
		play_track(5);
	}
}

