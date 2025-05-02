CC = gcc
CFLAGS = -Wall -Wextra -I./include -IC:/msys64/mingw64/include
LDFLAGS = -LC:/msys64/mingw64/lib -lcheck -mconsole -e mainCRTStartup
TARGET = temp_converter

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

TEST_SRCS = $(wildcard tests/*.c)
TEST_OBJS = $(filter-out tests/test_runner.o, $(TEST_SRCS:.c=.o))

.PHONY: all clean test run-tests

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

run-tests: tests/test_all
	@echo "Running tests/test_all..."
	./tests/test_all

test: $(TEST_OBJS) tests/test_runner.o src/converter.o
	$(CC) $(CFLAGS) -o tests/test_all $^ 
	./tests/test_all

clean:
	rm -f $(OBJS) $(TARGET) tests/*.o tests/test_all