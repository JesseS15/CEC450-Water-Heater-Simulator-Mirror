/** @file messageQueue.c
 *  
 * 
 *  @author Daniel Carter, Zack Hagerty
 * 
 *  this is a very stripped down version of the messageQueue from the labs.
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
#include "messageQueue.h"


void InititalizeTimeStruct()
{
    timeStamping.tv_seconds = 0;
    timeStamping.tv_nanoseconds = 0;
    tickSet(0);
    clock_settime(CLOCK_REALTIME, &timeStamping);
    clock_gettime(CLOCK_REALTIME, &timeStamping);
}


void createMessageQueue(void) /* function to create the message queue and two tasks */
{
        if ((mqId = msgQCreate(MAX_MESSAGES,MAX_MESSAGE_LENGTH,MSG_Q_FIFO)) == NULL)
        {
        printf("msgQCreate in failed\n");
        }
}

void Sender(char msg[]) /* task that writes to the message queue */
{

        /* create and send message */
        if((msgQSend(mqId,msg,MAX_MESSAGE_LENGTH, WAIT_FOREVER, 
        MSG_PRI_NORMAL)) == ERROR)
        {
             printf("msgQSend in Sender failed\n");
        }
        else
        {
        	printf("\n");
        }
}

void Receiver()
{
	char  msg[MAX_MESSAGE_LENGTH];
	while(1)
	{
		//Message Received
		if(msgQReceive(mqId, msg, MAX_MESSAGE_LENGTH, WAIT_FOREVER) == ERROR)
		{
			printf("msgQReceive in Receiver failed\n");
		} else
		{
			 clock_gettime(CLOCK_REALTIME, &timeStamping);
			 printf("RECEIVER: %s at %d seconds %d nanoseconds and %d ticks\n", msg, timeStamping.tv_seconds, timeStamping.tv_nanoseconds, tickGet());
		}
	}
}
		



void InitializeEverything() {
    InititalizeTimeStruct();
    createMessageQueue();
    taskSpawn("tMessageQueueReceiver", 100, 0x100, 2000, (FUNCPTR) Receiver, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
