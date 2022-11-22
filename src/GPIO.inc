.equ GPIO_OUTPUT_EN,    0x08    
.equ GPIO_OUTPUT_VAL,   0x0C    
.equ GPIO_OUTPUT_XOR,   0x40    # this will be used to force the pins to be active low instead of high
.equ GPIO_INPUT_EN,     0x04
.equ GPIO_INPUT_VAL,    0x00

.equ GPIO_GRB_PINS,     0x680000
.equ GPIO_RED_PINS,     0x400000
.equ GPIO_BLUE_PINS,    0x200000
.equ GPIO_GREEN_PINS,   0x080000


# A - 10
# B - 11
# C - 12
# D - 13
# A - B - C - D    Decoder pins
# 2 - 3 - 4 - 5    GPIO pinout
# 4 - 8 - 1 - 2    hexadecimal
# xxDC BAxx
.equ GPIO_PINS,       0x3C
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
