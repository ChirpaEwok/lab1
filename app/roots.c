#include <stdio.h>
#include <math.h>

#include "roots.h"

int square_root(double a, double b, double c,  double *x1, double *x2)
{
    if ((a == 0) && (b == 0))
    {
	x1 = NULL;
	x2 = NULL;
    	return 0;
    }
    if ((a == 0) && (b != 0))
    {
	*x1 = -c/b;
	return 1;
    }
    double D = b * b - 4 * a * c;
    if (D < 0)
    {
	x1 = NULL;
	x2 = NULL;
    	return 0;
    }
    if (D == 0)
    {
	*x1 = (-b) / (2 * a);
	return 1;
    }
    if (D > 0)
    {
	*x1 = ((-b) + sqrt(D)) / (2 * a);
	*x2 = ((-b) - sqrt(D)) / (2 * a);
	return 2;
    }
    return 0;
}
