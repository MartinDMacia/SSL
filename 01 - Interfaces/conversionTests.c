#include<assert.h>
#include "conversion.h"

 //para comparar los float voy a realizar una funcion que permite ver si son iguales considerando una cota de error err admisible
int floatCmp(float n1, float n2, float err){
    return (n1 >= n2 && n1 - n2 < err) || (n1 < n2 && n2 - n1 < err) ;
}

int main(void){
    assert(Fahrenheit(0) == 32);
    assert(Celsius(32) == 0);
    assert(Fahrenheit(15) == 59);
    assert(Celsius(59) == 15);
    assert(floatCmp(Fahrenheit(20.6), 69.08, 0.0001));
    assert(floatCmp(Celsius(69.08), 20.6, 0.0001));
    assert(floatCmp(Fahrenheit(-70.9), -95.62, 0.0001));
    assert(floatCmp(Celsius(-95.62), -70.9, 0.0001));

    return 0;
}