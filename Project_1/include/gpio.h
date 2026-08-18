#ifndef GPIO_H
#define GPIO_H
#include <stdint.h>
#include "cpu.h"

void gpio_init(void);

void gpio_write(u32 value);
u32 gpio(void);

void gpio_set_pin(u8 pin);
void gpio_clear_pin(u8 pin);
void gpio_toggle_pin(u8 pin);

void gpio_print(void);

#endif 