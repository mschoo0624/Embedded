#include <stdio.h>
#include "cpu.h"

void cpu_init(CPU *cpu)
{
    // Initializing the CPU registers value 0;
    cpu->r0 = 0;
    cpu->r1 = 0;
    cpu->r2 = 0;
    cpu->r3 = 0;

    cpu->pc = 0; 
    cpu->sp = 0XFFFF; // Since its the pointer, keep it 0XFFFF to point to the top of the stack.
}

void cpu_print(const CPU *cpu)
{
    printf("\n===== CPU =====\n");

    printf("R0: 0x%08X\n", cpu->r0);
    printf("R1: 0x%08X\n", cpu->r1);
    printf("R2: 0x%08X\n", cpu->r2);
    printf("R3: 0x%08X\n", cpu->r3);

    printf("PC: 0x%08X\n", cpu->pc);
    printf("SP: 0x%08X\n", cpu->sp);

    printf("================\n");
}