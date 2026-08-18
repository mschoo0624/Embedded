#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <cpu.h>
#define MEMORY_SIZE 65536 // 64KB of memory

void memory_init(void);
// READ and WRITE the 8bits and 32bits of the memory.  1 Byte = 8bits.
u8 memory_read8(u32 address);
void memory_write8(u32 address, u8 value);

u32 memory_read32(u32 address);
void memory_write32(u32 address, u32 value);

#endif
