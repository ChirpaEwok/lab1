#include <stdio.h>
#include <math.h>

#include "roots.h"

double x1
double x2;

int square_root(double a, double b, double c)
{
    if ((a == 0) && (b == 0)) return 0;
    double D = b * b - 4 * a * c;
    if (D < 0) return 0;
    if (D == 0)
    {
	x1 = (-b) / (2 * a);
	return 1;
    }
    if (D > 0)
    {
	x1 = ((-b) + sqrt(D)) / (2 * a);
	x2 = ((-b) - sqrt(D)) / (2 * a);
	return 2;
    }
    return 0;
}
