.section .text
.align   2
.globl   userInput

.include "Memory_map.inc"
.include "GPIO.inc"

userInput:
.data
helloworld: .ascii "Hello World"

.text
addi a7, x0, 4
la  a0, helloworld
 
ecall

addi a7, x0, 1