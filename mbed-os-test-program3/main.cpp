#include "mbed.h"
// repetitively turn on LED3 "three times" 
// and then LED1 "twice".
DigitalOut myLED3(LED3);
DigitalOut myLED1(LED1);

void Led(DigitalOut &ledpin, int num);
int main(){
    myLED3 = 0;
    myLED1 = 0;
    while(1){
        Led(myLED3, 3);
        Led(myLED1, 2);
    }
}