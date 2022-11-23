.equ GPIO_OUTPUT_EN,    0x08    
.equ GPIO_OUTPUT_VAL,   0x0C    
.equ GPIO_OUTPUT_XOR,   0x40    # this will be used to force the pins to be active low instead of high

.equ GPIO_IOF_EN,       0x38

.equ GPIO_GRB_PINS,     0x680000
.equ GPIO_RED_PINS,     0x400000
.equ GPIO_BLUE_PINS,    0x200000
.equ GPIO_GREEN_PINS,   0x080000

# Decoder hexadecimals
# A - 10
# B - 11
# C - 12
# D - 13
# A - B - C - D    Decoder pins
# 2 - 3 - 4 - 5    GPIO pinout
# 4 - 8 - 1 - 2    hexadecimal
# xxDC BAxx
.equ GPIO_PINS,       0x7F003C
.equ GPIO_ZERO_PIN,   0x0
.equ GPIO_ONE_PIN,    0x4
.equ GPIO_TWO_PIN,    0x8
.equ GPIO_THREE_PIN,  0xC
.equ GPIO_FOUR_PIN,   0x10
.equ GPIO_FIVE_PIN,   0x14
.equ GPIO_SIX_PIN,    0x18
.equ GPIO_SEVEN_PIN,  0x1C
.equ GPIO_EIGHT_PIN,  0x20
.equ GPIO_NINE_PIN,   0x24
# .equ GPIO_TEST_PIN,   0x20000


# Direct to 7 segment
# Seg:  A  B  C  D  E  F  G
# Pin:  0  1  2  3  4  5  6 
# GPIO: 16 17 18 19 20 21 22
.equ NUM_ZERO,      0x3F0000
.equ NUM_ONE,       0x060000
.equ NUM_TWO,       0x5B0000
.equ NUM_THREE,     0x4F0000
.equ NUM_FOUR,      0x660000
.equ NUM_FIVE,      0x6D0000
.equ NUM_SIX,       0x7C0000
.equ NUM_SEVEN,     0x070000
.equ NUM_EIGHT,     0x7F0000
.equ NUM_NINE,      0x670000