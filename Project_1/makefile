CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = simulator
SRC = src/main.c src/cpu.c src/memory.c src/gpio.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean