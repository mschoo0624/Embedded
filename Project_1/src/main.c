#include <stdio.h>

#include "cpu.h"
#include "memory.h"

int main(void)
{
    CPU cpu;

    cpu_init(&cpu);
    memory_init();

    memory_write32(0x100, 0x12345678);

    uint32_t value = memory_read32(0x100);

    printf("Memory value: 0x%08X\n", value);

    cpu_print(&cpu);

    return 0;
}