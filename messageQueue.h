/** @file messageQueue.h
 *  
 * 
 *  @author Daniel Carter
 * 
 *  
 *  
 */
#ifndef _MESSAGE_QUEUE_H
#define __MESSAGE_QUEUE_H
#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <sysLib.h>
#include <msgQLib.h>
#include <timers.h>
#include <time.h>
#include <stdint.h>

/* defines */

#define MAX_MESSAGES 100
#define MAX_MESSAGE_LENGTH 50
/* globals */

struct Time {
	time_t tv_seconds;
	time_t tv_nanoseconds;
}timeStamping ;

MSG_Q_ID mqId;

void Sender(char msg[]);
void Receiver();
void InititalizeTimeStruct();
void createMessageQueue(void);
void InitializeEverything();

#endif
