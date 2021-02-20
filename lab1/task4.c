#include <stdio.h>
#include <math.h>

void function();
double x, result,pi=acos(-1.0);
void main()
{
	x = 5;
	function();
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", result);
	printf("x = ");
	scanf("%lf", &x);
	function();
	printf("f = %.4lf", result);
}

void  function()
{
	result = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);;
}
