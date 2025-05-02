#include "../include/converter.h"
#include <assert.h>
#include <stdio.h>

void test_celsius_to_fahrenheit() {
    double result = convert_temperature(0, CELSIUS, FAHRENHEIT);
    assert(result >= 31.99 && result <= 32.01);
    printf("[PASS] test_celsius_to_fahrenheit\n");
}

void test_fahrenheit_to_celsius() {
    double result = convert_temperature(32, FAHRENHEIT, CELSIUS);
    assert(result >= -0.01 && result <= 0.01);
    printf("[PASS] test_fahrenheit_to_celsius\n");
}

void test_celsius_to_kelvin() {
    double result = convert_temperature(0, CELSIUS, KELVIN);
    assert(result >= 273.14 && result <= 273.16);
    printf("[PASS] test_celsius_to_kelvin\n");
}

void test_kelvin_to_celsius() {
    double result = convert_temperature(273.15, KELVIN, CELSIUS);
    assert(result >= -0.01 && result <= 0.01);
    printf("[PASS] test_kelvin_to_celsius\n");
}

void test_fahrenheit_to_kelvin() {
    double result = convert_temperature(32, FAHRENHEIT, KELVIN);
    assert(result >= 273.14 && result <= 273.16);
    printf("[PASS] test_fahrenheit_to_kelvin\n");
}

void test_kelvin_to_fahrenheit() {
    double result = convert_temperature(273.15, KELVIN, FAHRENHEIT);
    assert(result >= 31.99 && result <= 32.01);
    printf("[PASS] test_kelvin_to_fahrenheit\n");
}

void test_invalid_unit() {
    double result = convert_temperature(100, INVALID_UNIT, CELSIUS);
    assert(result == -1);
    printf("[PASS] test_invalid_unit\n");
}

void test_all_conversions() {
    test_celsius_to_fahrenheit();
    test_fahrenheit_to_celsius();
    test_celsius_to_kelvin();
    test_kelvin_to_celsius();
    test_fahrenheit_to_kelvin();
    test_kelvin_to_fahrenheit();
    printf("[PASS] All conversion tests passed!\n");
}