CC = gcc
CFLAGS = -Wall -Wextra -I./include -IC:/msys64/mingw64/include
LDFLAGS = -LC:/msys64/mingw64/lib -lcheck -mconsole -e mainCRTStartup
TARGET = temp_converter

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

test:
	$(CC) $(CFLAGS) -c tests/test_converter.c -o tests/test_converter.o
	$(CC) $(CFLAGS) tests/test_converter.o src/converter.c -o tests/test_converter $(LDFLAGS)
	./tests/test_converter

clean:
	rm -f $(OBJS) $(TARGET) tests/*.o tests/test_converter