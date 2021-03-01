#include "mbed.h"

void Led(DigitalOut &ledpin, int num){
    for (int i=0; i<2*num; ++i){
        ledpin = !ledpin;
        ThisThread::sleep_for(300ms);
    }
}