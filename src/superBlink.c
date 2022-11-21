#include <stdio.h>
#include "superBlink.h"
#include <time.h>
// #include <metal/gpio.h>

//void setupGPIO(){

//}

//int setLED(int color, int status){
//    return 0;
//}

//void delay(int ms){     //delay in miliseconds


//}     
//void blinkInBoardRGB();

int main(){
    int error = 0;
    int ledNum = 0;
    int color[NUM_LEADS] = {GREEN_LED, RED_LED, BLUE_LED};
    int number[NUM_LEADS]={ZERO_LED,ONE_LED,TWO_LED,THREE_LED,FOUR_LED,FIVE_LED,SIX_LED,SEVEN_LED,EIGHT_LED,NINE_LED};

    setupGPIO();

    
    while(!error){
        
        setLED(color[ledNum], ON);
        setLED(number[ledNum], ON);
        
        delay(DELAY);
        error = setLED(color[ledNum], OFF);
        error = setLED(number[ledNum], OFF);
        ledNum ++;
        if(ledNum >= NUM_LEADS)
            ledNum = 0;
        //delay(DELAY);

    }

}
