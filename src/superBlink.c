#include <stdio.h>
#include "superBlink.h"
#include <time.h>
#include <metal/gpio.h>

//void setupGPIO(){

//}

//int setLED(int color, int status){
//    return 0;
//}

//void delay(int ms){     //delay in miliseconds


//}     
//void blinkInBoardRGB();

int main(){

    int ledNum = 0;
    //int color[NUM_LEADS] = {GREEN_LED, RED_LED, BLUE_LED};
    int number[NUM_LEADS]={ZERO_LED,ONE_LED,TWO_LED,THREE_LED,FOUR_LED,FIVE_LED,SIX_LED,SEVEN_LED,EIGHT_LED,NINE_LED};

    //setupGPIO();
   
    while(ledNum > 20){
        
        //setLED(color[ledNum], ON);
        setLED(number[ledNum], ON);
        
        delay(DELAY);
        //setLED(color[ledNum], OFF);
        
        setLED(number[ledNum], OFF);
        ledNum ++;
        if(ledNum >= 10)
            ledNum = 0;
        //delay(DELAY);

    }


    struct metal_gpio* gpio_device = metal_gpio_get_device(0);

    metal_gpio_enable_output(gpio_device, 2);
    metal_gpio_enable_output(gpio_device, 3);
    metal_gpio_enable_output(gpio_device, 4);
    metal_gpio_enable_output(gpio_device, 5);
    metal_gpio_disable_pinmux(gpio_device, 2);
    metal_gpio_disable_pinmux(gpio_device, 3);
    metal_gpio_disable_pinmux(gpio_device, 4);
    metal_gpio_disable_pinmux(gpio_device, 5);


    metal_gpio_set_pin(gpio_device, 2, 1);
    metal_gpio_set_pin(gpio_device, 3, 1);
    metal_gpio_set_pin(gpio_device, 4, 1);
    metal_gpio_set_pin(gpio_device, 5, 1);
    
    metal_gpio_enable_output(gpio_device, 1);
    metal_gpio_disable_pinmux(gpio_device, 1);
    metal_gpio_set_pin(gpio_device, 1, 0);
    
}
