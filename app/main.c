#include <stdio.h>

#include "roots.h"

int main()
{
    double a;
    double b;
    double c;
    double x1;
    double x2;
    printf("Введите значения a,b и c: ");
    if (scanf("%lf%lf%lf", &a, &b, &c) == 1) 
    {
    int r = square_root(a, b, c, &x1, &x2);
    if (r == 0) printf("Дискриминант меньше 0, нет корней");
    if (r == 1) printf("Дискриминант равен 0, корень: %.2lf \n", x1);
    if (r == 2) printf("Дискриминант больше 0, корни: %.2lf, %.2lf \n", x1, x2);
    } else printf("Failed to read\n");
    return 0;
}
