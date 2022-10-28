.section .text
.align   2
.globl   delay

.include "Memory_map.inc"

delay:
    addi sp, sp, -4     //Alocate the stack frame
    sw   ra, 0(sp)      //Saving the return address register onto memory

    li   t0, MTIME      //Load the timer register memory address
    lw   t1, 0(t0)      //Load the current time value in register t1

    li   t2, MTIME_FREQUENCY    //store our clock frequency in t2
    mul  t2, t2, a0             //multiply the delay in miliseconds by frequency
    add  t2, t2, t1             //t2 register contains our target time

1:
    lw   t1, 0(t0)      //Load the current time value in register
    blt  t1, t2, 1b     //if current time is less than target time keep looping

    lw   ra, 0(sp)       //Restore the return address
    addi sp, sp, 4       //Deallocating the stack pointer
    ret
