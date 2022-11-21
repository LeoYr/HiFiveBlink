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

#define ZERO_LED    0x000000
#define ONE_LED     0x20
#define TWO_LED     0x10
#define THREE_LED   0x30
#define FOUR_LED    0x8
#define FIVE_LED    0x28
#define SIX_LED     0x18
#define SEVEN_LED   0x38
#define EIGHT_LED   0x4
#define NINE_LED    0x24
#define TEST_LED    0x20000

void setupGPIO();
int setLED(int color, int status);
void delay(int ms);     //delay in miliseconds