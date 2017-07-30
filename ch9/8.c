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
    double ans;
    if (p == 0)
        ans = 1;
    else
        ans = p > 0 ? (n * power(n, p - 1)) : (1 / n * power(n, p+1));
    return ans;
}
