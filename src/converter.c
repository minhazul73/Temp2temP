#include "../include/converter.h"
#include <string.h>
#include <stdbool.h>

double convert_temperature(double value, 
                         TemperatureUnit from, 
                         TemperatureUnit to) {
    // Convert to Celsius first
    double celsius;
    switch(from) {
        case CELSIUS:   celsius = value; break;
        case FAHRENHEIT: celsius = (value - 32) * 5/9; break;
        case KELVIN:    celsius = value - 273.15; break;
        default:        return -1; // Invalid
    }

    // Convert to target unit
    switch(to) {
        case CELSIUS:   return celsius;
        case FAHRENHEIT: return (celsius * 9/5) + 32;
        case KELVIN:    return celsius + 273.15;
        default:        return -1;
    }
}

TemperatureUnit parse_unit(const char *unit_str) {
    if (!unit_str) return INVALID_UNIT;
    
    if (strcasecmp(unit_str, "C") == 0) return CELSIUS;
    if (strcasecmp(unit_str, "F") == 0) return FAHRENHEIT;
    if (strcasecmp(unit_str, "K") == 0) return KELVIN;
    
    return INVALID_UNIT;
}

bool validate_temperature(TemperatureUnit unit, double value) {
    if (unit == KELVIN && value < 0) {
        return false; // Kelvin cannot be negative
    }
    return true; // All other values are valid
}