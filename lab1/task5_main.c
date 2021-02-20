#include <stdio.h>
#include <math.h>

double function(double x);
void main()
{
	double f, x = 5,pi=acos(-1.0);
	f = function(x);
	printf("x = %.4lf\n", x); 
	printf("f = %.4lf\n\n", f);
	printf("x = ");
	scanf("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}
