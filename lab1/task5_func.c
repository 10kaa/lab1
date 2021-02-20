#include <stdio.h>
#include <math.h>

double function(double x)
{
	double f,pi=acos(-1.0);
	f = 2 * pow(sin(3 * pi - 2 * x),2) * pow(cos(5 * pi + 2 * x),2);
	return(f);
}

