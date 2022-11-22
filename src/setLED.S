.section .text
.align   4
.globl   setLED

.include "Memory_map.inc"
.include "GPIO.inc"

.equ LEDON, 0x01
.equ NOERROR, 0x00
.equ ERROR, 0x01

//Which LED to set will come into in to register a0
//The status of the LED (ON/OFF) will come in register a1

setLED:
    addi  sp, sp, -4    //allocate the stack frame
    sw    ra, 0(sp)     //saving the return address registor onto stack

    li    t0, GPIO_CTRL_ADDR
    lw    t1, GPIO_OUTPUT_VAL(t0)

    beqz  a1, ledOFF
    li    t2, LEDON
    beq   a1, t2, ledON
    li    a0, ERROR
    j     exit

ledON:
    or    t1, t1, a0
    sw    t1, GPIO_OUTPUT_VAL(t0)
    li    a0, NOERROR
    j     exit    

ledOFF:
    xor  a0, a0, 0xffffffff  //invert everything to set all pins we want to zero
    and t1, t1, a0      //set the LED to zero in output val
    sw  t1, GPIO_OUTPUT_VAL(t0) //write back to new value to memory
    li  a0, NOERROR

exit:
    lw ra, 0(sp)        //restore return address
    addi sp, sp, 4      //deallocating the stack pointer

    ret                 //return to main parent function
