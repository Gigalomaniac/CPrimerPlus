#include <stdio.h>

double hmean(double, double);

int main(void)
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%g\n", hmean(a, b));
    return 0;
}

double hmean(double a, double b)
{
    return 1 / ((1 / a + 1 / b) / 2);
}
