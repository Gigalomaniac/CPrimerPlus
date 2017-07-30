#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    larger_of(&x, &y);
    printf("%g %g\n", x, y);
    return 0;
}

void larger_of(double * x, double * y)
{
    *x = *x > *y ? *x : *y;
    *y = *x;
}
