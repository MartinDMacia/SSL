#include<stdio.h>
#include "conversion.h"

int main(void){
    const int lower = 0, upper = 300, step = 20;
    printf("\n----Tabla de Fahrenheit a Celsius----");
    printf("\nFahrenheit\tCelsius");
    for (float fahr = lower; fahr <= upper; fahr += step){
        printf("\n%10.0f\t%7.1f", fahr, Celsius(fahr));
    }
    printf("\n\n----Tabla de Celsius a Fahrenheit----");
    printf("\nCelsius\t\tFahrenheit");
    for (float celsius = lower; celsius <= upper; celsius += step){
        printf("\n%7.0f\t\t%10.1f", celsius, Fahrenheit(celsius));
    }
    return 0;
}
