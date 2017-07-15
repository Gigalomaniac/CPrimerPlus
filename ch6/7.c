#include <stdio.h>

int main(void)
{
    double a, b;
    while(scanf("%lf%lf", &a, &b) == 2)
        printf("%f\n", (b - a) / a * b);
    return 0;
}
