#include <stdio.h>
#include <math.h>
double f(double x,double y);
void main(){
    double x = 5;
    double y = 3.14;
    double res;
    res = f(x,y);
    printf(" x = %.4f\n y = %.4f\n f= %.4f\n",x,y,res);
    scanf("%lf %lf", &x, &y);
    res = f(x,y);
    printf(" x = %.4f\n y = %.4f\n f= %.4f\n",x,y,res);
}