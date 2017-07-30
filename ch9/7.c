#include <stdio.h>

double power(double, int);

int main(void)
{
    double x;
    int p;
    while(scanf("%lf%d", &x, &p) == 2)
    {
        if (x == 0 && p == 0)
        {
            printf("Not defined.\n");
            continue;
        }
        else
            printf("%.3g to the power %d is %.5g\n", x, p, power(x, p));
    }
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    if (p == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        for (int i = 0; i < (p > 0 ? p : -p); i++)
            pow *= n;
    return p > 0 ? pow : (1 / pow);
}
