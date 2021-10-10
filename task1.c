#include <stdio.h>
#include <math.h>
void main(){
  double x = 5;
  double y = 3.14;
  double f;   
  f = (sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x));
  printf(" x = %.4lf\n y = %.4lf\n f= %.4lf\n",x,y,f);
  scanf("%lf %lf", &x, &y); 
  f = (sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x));
  printf(" x = %.4lf\n y = %.4lf\n f= %.4lf\n",x,y,f);
}
