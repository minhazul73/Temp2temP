#include "../include/converter.h"
#include <assert.h>
#include <stdio.h>

void test_celsius_to_fahrenheit() {
    double result = convert_temperature(0, CELSIUS, FAHRENHEIT);
    assert(result >= 31.99 && result <= 32.01);
    printf("[PASS] test_celsius_to_fahrenheit\n");
}

int main() {
    printf("Running tests...\n");
    test_celsius_to_fahrenheit();
    // Add more test function calls here
    printf("All tests passed!\n");
    return 0;
}