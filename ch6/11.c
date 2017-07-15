#include <stdio.h>

double pon(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    double sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 += 1.0 / i;
        sum2 += pon(i) / i;
    }
    printf("Sum of the first series: %f\n", sum1);
    printf("Sum of the second series: %f\n", sum2);
    return 0;
}

double pon(int n)
{
    double ans = 1.0;
    for (int i = 1; i < n; i++)
    ans *= -1;
    return ans;
}
