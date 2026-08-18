// #ifndef CPU_H
#ifndef CPU_H
#define CPU_H

#include <stdint.h>
typedef uint32_t u32;
typedef uint8_t u8;

typedef struct
{
    // Define the CPU registers. 
    u32 r0;
    u32 r1;
    u32 r2;
    u32 r3;
    // Define the program counter and stack pointer. 
    u32 pc; // It tellls the CPU where it is in the program. 
    u32 sp; // It points. to the current stack location. 
} CPU;

void cpu_init(CPU *cpu);
void cpu_print(const CPU *cpu);

#endif