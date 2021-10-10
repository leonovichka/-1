#include <stdio.h>
#include <math.h>

void f (void);

double x,y, result;
void main(){
  scanf("%lf %lf",&x,&y);
  f();
  printf(" x = %.4f\n y = %.4f\n f= %.4f\n",x,y, result);
}

void f(void)
{    
    result = (sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x));
}
