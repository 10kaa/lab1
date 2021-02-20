#include <stdio.h>
#include <math.h>

void main()
{   
    double x1,f1,x = 5, pi=acos(-1.0);
    double f = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    printf("x1 = ");
    scanf("%lf", &x1);
    f1 = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);
    printf("f1 = %.4lf", f1);
}


