/** @file pressureSensor.h
 *  
 * @brief 
 *
 * @author Jesse Slager
 * 
 */

#ifndef __PRES_SENSOR_H
#define __PRES_SENSOR_H

#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <sysLib.h>
#include <msgQLib.h>
#include <timers.h>
#include <time.h>
#include <stdint.h>
#include "tankSim.h"

#define OUTLET_VALVE_OPEN   1
#define INLET_VALVE_OPEN    1
#define OUTLET_VALVE_CLOSED 0
#define INLET_VALVE_CLOSED  0


void pressureSetup();
/**
 * @name reportPressure
 * @param
 * @brief Get the current temp and sent message to water heater and pressure sensor
 */
void initializePressureSensor();

/**
 * @name getPres
 * @param
 * @brief Return the current temperature value
 */
void pressureValve(void);

/** 
 * @name updatePressure
 * @param
 * @brief Get status from water heater and update/set water temperature accordingly
 */

void pressureLowering();

#endif
