#ifndef CONVERTER_H
#define CONVERTER_H

#include <stdbool.h>

typedef enum {
    CELSIUS,
    FAHRENHEIT,
    KELVIN,
    INVALID_UNIT
} TemperatureUnit;

// Conversion functions
double convert_temperature(double value, 
                         TemperatureUnit from, 
                         TemperatureUnit to);

// Input validation
TemperatureUnit parse_unit(const char *unit_str);
bool validate_temperature(TemperatureUnit unit, double value);

#endif