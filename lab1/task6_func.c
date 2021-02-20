#include <stdio.h>
#include <math.h>

extern double x, result;

void  function()
{
	double pi=acos(-1.0);
	result = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);
}