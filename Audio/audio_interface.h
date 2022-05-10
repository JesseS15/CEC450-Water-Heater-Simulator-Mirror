#ifndef __AUDIO_INTERFACE_
#define __AUDIO_INTERFACE_

#include "GPIO.h"

#define TRACK1  1
#define TRACK2  2
#define TRACK3  3
#define TRACK4  4
#define TRACK5  5

void audio_init(void);
void play_track(int track_num);

#endif