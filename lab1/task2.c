#include <stdio.h>
#include <math.h>


double function(double x)
{
	double f,pi=acos(-1.0);
	f = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);
	return(f);
}

void main()
{
	double f, x = 5;
	f = function(x);
	printf("x = %.4lf\n", x);
        printf("f = %.4lf\n\n", f);
	printf("x = ");
	scanf("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}
