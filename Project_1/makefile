CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = simulator
SRC = src/main.c src/cpu.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean