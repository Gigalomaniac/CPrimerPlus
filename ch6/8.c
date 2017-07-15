#include <stdio.h>

double cal(double, double);

int main(void)
{
    double a, b;
    while(scanf("%lf%lf", &a, &b) == 2)
        printf("%f\n", cal(a, b));
    return 0;
}

double cal(double a, double b)
{
    return (b - a) / a * b;
}
