#include <stdio.h>
#include <math.h>

#include "roots.h"

int main()
{
    double a;
    double b;
    double c;
    printf("Введите значения a,b и c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    int r = square_root(a, b, c);
    if (r == 0) printf("Нет корней");
    if (r == 1) printf("Дискриминант равен 0, корень: %.2lf \n", x1);
    if (r == 2) printf("Дискриминант больше 0, корни: %.2lf, %.2lf \n", x1, x2);
    return 0;
}
