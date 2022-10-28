#define DELAY       200
#define ON          0x01
#define OFF         0x00
#define NUM_LEADS   0x03

#define RED_LED     0x400000
#define BLUE_LED    0x200000
#define GREEN_LED   0x080000

void setupGPIO();
int setLED(int color, int status);
void delay(int ms);     //delay in miliseconds