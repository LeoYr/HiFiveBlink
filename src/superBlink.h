#define DELAY       1000
#define ON          0x01
#define OFF         0x00
#define NUM_LEADS   0xB



//pin 10 = 2 = 0x4 = D
//pin 11 = 3 = 0x8 = C
//pin 12 = 4 = 0x10 = B
//pin 13 = 5 = 0x20 = A
#define RED_LED     0x400000
#define BLUE_LED    0x200000
#define GREEN_LED   0x080000

/*
#define ZERO_LED    0x0
#define ONE_LED     0x4
#define TWO_LED     0x8
#define THREE_LED   0xC
#define FOUR_LED    0x10
#define FIVE_LED    0x14
#define SIX_LED     0x18
#define SEVEN_LED   0x1C
#define EIGHT_LED   0x20
#define NINE_LED    0x24
*/
#define NUM_ZERO      0x3F0000
#define NUM_ONE       0x060000
#define NUM_TWO       0x5B0000
#define NUM_THREE     0x4F0000
#define NUM_FOUR      0x660000
#define NUM_FIVE      0x6D0000
#define NUM_SIX       0x7C0000
#define NUM_SEVEN     0x070000
#define NUM_EIGHT     0x7F0000
#define NUM_NINE      0x670000

void setupGPIO();
int setLED(int color, int status);
void delay(int ms);     //delay in miliseconds
