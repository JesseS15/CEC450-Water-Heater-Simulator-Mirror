#include "audio_interface.h"

void audio_init(void){
    gpio_clock_en();
    enable_GPIO09();
    enable_GPIO16();
    enable_GPIO5();
    enable_GPIO18();
    enable_GPIO19();
    
    gpio09_write(1);
    gpio16_write(1);
    gpio05_write(1);
    gpio18_write(1);
    gpio19_write(1);
}

void play_track(int track_num){
    switch(track_num){
        case TRACK1:
        gpio09_write(0);
        taskDelay(10);
        gpio09_write(1);
        break;

        case TRACK2:
        gpio16_write(0);
        taskDelay(10);
        gpio16_write(1);
        break;

        case TRACK3:
        gpio05_write(0);
        taskDelay(10);
        gpio05_write(1);
        break;
        
        case TRACK4:
        gpio18_write(0);
        taskDelay(10);
        gpio18_write(1);
        break;

        case TRACK5:
        gpio19_write(0);
        taskDelay(10);
        gpio19_write(1);
        break;

        default:
        printf("Track not found!\n!");
        break;
    }
}
