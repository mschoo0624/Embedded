# Project 1

## What Am I Building???
### - Understanding of C, pointers, memory, registers, bit manipulation, and eventually interrupts.
### - Create A Small Simulated Microcontroller.
## Diagram:
                    ┌──────────────────┐
                    │       CPU        │
                    │                  │
                    │ R0 R1 R2 R3      │
                    │ PC   SP          │
                    │ FLAGS            │
                    └────────┬─────────┘
                             │
                       MEMORY BUS
                             │
              ┌──────────────┼──────────────┐
              │              │              │
              ▼              ▼              ▼
           ┌──────┐       ┌──────┐       ┌──────┐
           │ RAM  │       │ GPIO │       │ UART │
           └──────┘       └──────┘       └──────┘
                             │
                             ▼
                          LED / pins

## Eventually you'll be able to write a fake program such as:
MOV R0, 5
MOV R1, 10
ADD R0, R1
STORE R0, GPIO
### and your simulator will execute it.
## You'll see:
R0 = 15
GPIO = 00001111

## Project Structure
        microcontroller-simulator/
            │
        ├── include/
        │   ├── cpu.h
        │   ├── memory.h
        │   ├── gpio.h
        │   └── uart.h
        │
        ├── src/
        │   ├── main.c
        │   ├── cpu.c
        │   ├── memory.c
        │   ├── gpio.c
        │   └── uart.c
        │
        ├── programs/
        │   └── program.txt
        │
        ├── tests/
        │
        ├── Makefile
        └── README.md
