.section .text
.align   2
.globl   setupGPIO  //symbol definition for function name

.include "Memory_map.inc"
.include "GPIO.inc"

setupGPIO:
    addi  sp, sp, -4    //allocate the stack frame
    sw    ra, 0(sp)     //saving the return address registor onto stack
    
    li    t0, GPIO_CTRL_ADDR
    li    t1, GPIO_GRB_PINS

    sw    t1, GPIO_OUTPUT_EN(t0)    //enable output on RGB pins so they are writable
    sw    t1, GPIO_OUTPUT_XOR(t0)   //set XOR so the RGB pins are active high
    sw    x0, GPIO_OUTPUT_VAL(t0)   //set all RGB pins to zero to clear them

    lw ra, 0(sp)        //restore return address
    addi sp, sp, 4      //deallocating the stack pointer

    ret                 //return to main parent function