#include "memory.h"
#include "cpu.h"
#include <stdio.h>
#define MEMORY_SIZE 65536 // 64KB of memory

static u8 memory[MEMORY_SIZE];

void memory_init(void)
{
    for (u32 i = 0; i < MEMORY_SIZE; i++)
    {
        memory[i] = 0; // Initialzing all the memory as 0;
    }
}
// READ and WRITE the 8bits and 32bits of the memory.  1 Byte = 8bits.
u8 memory_read8(u32 address)
{
    if (address >= MEMORY_SIZE)
    {
        return -1;
    }
    return memory[address];
}
void memory_write8(u32 address, u8 value)
{
    if (address >= MEMORY_SIZE)
    {
        return -1;
    }
    return memory[address] = value;
}

u32 memory_read32(u32 address)
{
    if (address >= MEMORY_SIZE - 3)
    {
        return -1;
    }
    u32 value = 0;
    // Reading the each byte so shift by 8 bits to next. 
    value |= memory[address];
    value |= memory[address + 1] << 8;
    value |= memory[address + 2] << 16;
    value |= memory[address + 3] << 24;
    return value;
}
void memory_write32(u32 address, u32 value)
{
    if (address >= MEMORY_SIZE - 3)
    {
        return -1;
    }
    // Writing the each byte so shift by 8 bits to next. 
    memory[address] = value & 0xFF;
    memory[address + 1] = (value >> 8) & 0xFF;
    memory[address + 2] = (value >> 16) & 0xFF;
    memory[address + 3] = (value >> 24) & 0xFF;
}