/** @file tankSim.h
 *  
 * @brief 
 *
 * @author Zack Hagerty, Jesse Slager
 * 
 */
#ifndef __TANK_SIM_
#define __TANK_SIM_

#include <stdint.h>


//Input and Output valve array IDs
#define INPUT_VALVE_1_ID 0
#define INPUT_VALVE_2_ID 1
#define OUTPUT_VALVE_ID 2

//Water Level Array IDs
#define FOURTH_WATER_SENSOR 3
#define THIRD_WATER_SENSOR 2
#define SECOND_WATER_SENSOR 1
#define FIRST_WATER_SENSOR 0

// Sensor attributes
#define LOW_TEMP_THRESHOLD      10 //Water heater should turn on if sensor report value at or less than threshold
#define HIGH_TEMP_THRESHOLD     100//Water heater should turn off if sensor report value at or greater than threshold

#define WATERHEATINGRATE 		2

// Sensor attributes
#define LOW_PRES_THRESHOLD      10 //Water heater should turn on if sensor report value at or less than threshold
#define HIGH_PRES_THRESHOLD     49//Water heater should turn off if sensor report value at or greater than threshold
#define TEMP_PRESSURE_THRESHOLD 100 //Pressure should rise if temperature is greater than or equal to specified value

//Temperature sensor predefined messages
#define ACTIVE 1
#define INACTIVE 0

#define FLOWRATE 2

//Water heating rates per 1C
#define NORMAL_PRESSURE_RATE    2.38 //TODO: Decide on a fixed/variable rate for temperature to increase by when water heater is active
#define HIGH_PRESSURE_RATE      7.14

#define MAX_MESSAGE_LENGTH 50

typedef int bool;
#define true 1
#define false 0

WDOG_ID wd_tank_sim;

 typedef struct{
    SEM_ID waterLevelSemaphore;
    SEM_ID valveSemaphore;
    SEM_ID temperatureSemaphore;
    SEM_ID pressureSemaphore;

	double maxPressure;
	double criticalPressure;
	double operatingPressure;
    double currentPressure;

	int8_t waterLevel;
	bool waterRising;
	
    int8_t sensorLevelFour;
    int8_t sensorLevelThree;
    int8_t sensorLevelTwo;
    int8_t sensorLevelOne;


    int8_t temperature;
    int8_t minTemperature;
    int8_t currentTemperature;
    int8_t maxTemperature;
    bool heaterOn;
    

    int valves[3];
    int levelSensor[4];

}tankConfig_t;


tankConfig_t tankConfig;


void startup(int maxTemp, int minTemp, int waterSensorHighest, int waterSensorLowest);
void startProgram();
void updateConsole();
void setHeaterStatus(bool state);
void setValveStatus(int id, int state);
double getPressure();
int getWaterSensorStatus(int sensor);
void setHeaterStatus(bool state);
void valueTests(int maxTemp, int minTemp, int waterSensorHighest, int waterSensorLowest);
void updateAudio(void);

#endif
