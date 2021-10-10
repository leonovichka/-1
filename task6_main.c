#include <stdio.h>


double x, y, result;

void f (void);

void main(){
  scanf("%lf %lf",&x,&y);
  f();
  printf(" x = %.4f\n y = %.4f\n f= %.4f\n", x, y, result);
}

