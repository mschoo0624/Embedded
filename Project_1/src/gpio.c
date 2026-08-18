#include <stdio.h>
#include "gpio.h"
#include "cpu.h"

/*
GPIO = General Purpose Input/Output
    ㄴ is basically a programmable electrical pin on a microcontroller. 

Each GPIO pin can generally be configured as either:
 - Input → microcontroller reads an electrical signal
 - Output → microcontroller produces an electrical signal
*/

static u32 gpio_register;

void gpio_init(void)
{
    gpio_register = 0; // Initialize the GPIO register to 0
}

void gpio_write(u32 value)
{
    gpio_register = value;
}

u32 gpio_read(void)
{
    return gpio_register;
}

void gpio_set_pin(u8 pin)
{
    if (pin < 32) // Ensure the pin number is valid (0-31)
    {
        gpio_register |= (1U << pin); // Set the specified pin using unsinged so its positivew value.
    }
}

void gpio_clear_pin(u8 pin)
{
    if (pin < 32) // Ensure the pin number is valid (0-31)
    {
        gpio_register &= ~(1U << pin); // Clear the specified pin
    }
}

void gpio_toggle_pin(u8 pin)
{
    if (pin < 32) // Ensure the pin number is valid (0-31)
    {
        gpio_register ^= (1U << pin); // Toggle the specified pin
    }
}

void gpio_print(void)
{
    printf("GPIO: 0x%08X\n", gpio_register);
}