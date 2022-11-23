#include <stdio.h>
#include "superBlink.h"
#include <time.h>
//#include <metal/gpio.h>

//void setupGPIO(){

//}

//int setLED(int color, int status){
//    return 0;
//}

//void delay(int ms){     //delay in miliseconds


//}     
//void blinkInBoardRGB();

int main(){

    //struct metal_gpio* gpio_device = metal_gpio_get_device(0);
    int ledNum = 0;
    //int color[NUM_LEADS] = {GREEN_LED, RED_LED, BLUE_LED};
    int number[NUM_LEADS]={NUM_ZERO,NUM_ONE,NUM_TWO,NUM_THREE,NUM_FOUR,NUM_FIVE,NUM_SIX,NUM_SEVEN,NUM_EIGHT,NUM_NINE};

    setupGPIO();
   
    //
    /*
    metal_gpio_disable_pinmux(gpio_device, 16);
    metal_gpio_disable_pinmux(gpio_device, 17);
    metal_gpio_disable_pinmux(gpio_device, 18);
    metal_gpio_disable_pinmux(gpio_device, 19);
    metal_gpio_disable_pinmux(gpio_device, 20);
    metal_gpio_disable_pinmux(gpio_device, 21);
    metal_gpio_disable_pinmux(gpio_device, 22);
    metal_gpio_disable_pinmux(gpio_device, 23);
    */

    while(ledNum < 20){
        //setLED(color[ledNum], ON);
        setLED(number[ledNum], OFF);
        
        delay(DELAY);
        //setLED(color[ledNum], OFF);
        
        setLED(number[ledNum], ON);
        ledNum ++;
        if(ledNum >= 10)
            ledNum = 0;
        //delay(DELAY);

    }


    /*
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
    
    metal_gpio_enable_output(gpio_device, 16);
    metal_gpio_enable_output(gpio_device, 17);
    metal_gpio_enable_output(gpio_device, 18);
    metal_gpio_enable_output(gpio_device, 19);
    metal_gpio_enable_output(gpio_device, 20);
    metal_gpio_enable_output(gpio_device, 21);
    metal_gpio_enable_output(gpio_device, 22);
    metal_gpio_enable_output(gpio_device, 23);
    

    metal_gpio_set_pin(gpio_device, 16, 0);
    metal_gpio_set_pin(gpio_device, 17, 0);
    metal_gpio_set_pin(gpio_device, 18, 0);
    metal_gpio_set_pin(gpio_device, 19, 0);
    metal_gpio_set_pin(gpio_device, 20, 0);
    metal_gpio_set_pin(gpio_device, 21, 0);
    metal_gpio_set_pin(gpio_device, 22, 0);
    metal_gpio_set_pin(gpio_device, 23, 0);
    */
  
}
