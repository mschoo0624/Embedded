#include <stdio.h>

#include "cpu.h"
#include "memory.h"
#include "gpio.h"

int main(void)
{
    CPU cpu;

    cpu_init(&cpu);
    memory_init();
    gpio_init();

    cpu_print(&cpu);

    gpio_set_pin(3); //0x00000100 = 8

    gpio_print();

    gpio_set_pin(5); //0x0010|1000 = 28

    gpio_print();

    gpio_clear_pin(3); //0x0010|0000 = 8

    gpio_print();
                        //    0      
    gpio_toggle_pin(5); //0x0010|0000 = 0

    gpio_print();

    return 0;
}