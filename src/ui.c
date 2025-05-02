#include "../include/converter.h"
#include <stdio.h>

void run_conversion_loop() {
    char from_unit[2]; 
    char to_unit[2];
    double temp;
    
    printf("Temperature Converter\n");
    printf("Available units: C (Celsius), F (Fahrenheit), K (Kelvin)\n");
    
    while(1) {
        printf("\nEnter conversion (e.g., 25 C F): ");
        if (scanf("%lf %1s %1s", &temp, from_unit, to_unit) != 3) {
            printf("Invalid input!\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        TemperatureUnit from = parse_unit(from_unit);
        TemperatureUnit to = parse_unit(to_unit);
        
        if (!validate_temperature(from, temp)) {
            printf("Invalid temperature/unit!\n");
            continue;
        }
        
        double result = convert_temperature(temp, from, to);
        printf("Result: %.2f %s\n", result, to_unit);
    }
}