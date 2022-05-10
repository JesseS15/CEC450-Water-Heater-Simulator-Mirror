/** @file tempSensor.h
 *  
 * @brief 
 *
 * @author Miles Osborne, Jesse Slager
 * 
 */

#ifndef __TEMP_SENSOR_H
#define __TEMP_SENSOR_H

#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <sysLib.h>
#include <msgQLib.h>
#include <timers.h>
#include <time.h>
#include <stdint.h>

void temperatureSetup();

void initializeTemperatureWatchdog();

void heaterToggler();

void temperatureSensor();


#endif
