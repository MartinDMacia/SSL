#include "conversion.h"

float Celsius(float fahrenheit){
    float celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

float Fahrenheit(float celsius){
    float fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    return fahrenheit;
}
