#include <math.h>

extern double x, y, result;

void f(void){    
    result = (sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x));
}

