#include <stdio.h>
#include <math.h>

double f(double x,double y)
{
    return ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
}

void main(){
    double x = 5;
    double y = 3.14;
    double res;
    res = f(x,y);
    printf(" x = %.4lf\n y = %.4lf\n f= %.4lf\n",x,y,res);
    scanf("%lf %lf", &x, &y);
    res = f(x,y);
    printf(" x = %.4lf\n y = %.4lf\n f= %.4lf\n",x,y,res);
}