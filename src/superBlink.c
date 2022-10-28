#include <stdio.h>
#include "superBlink.h"


//void setupGPIO(){

//}

//int setLED(int color, int status){
//    return 0;
//}

//void delay(int ms){     //delay in miliseconds

//}     

int main(){
    int error = 0;
    int ledNum = 0;
    int color[NUM_LEADS] = {GREEN_LED, RED_LED, BLUE_LED};

    setupGPIO();

    while(!error){
        setLED(color[ledNum], ON);
        delay(DELAY);
        error = setLED(color[ledNum], OFF);
        ledNum ++;
        if(ledNum >= NUM_LEADS)
            ledNum = 0;
        //delay(DELAY);
    }

}