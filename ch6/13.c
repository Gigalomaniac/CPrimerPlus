#include <stdio.h>
#define N 8

int main(void)
{
    double num[N], sum[N];
    for (int i = 0; i < N; i++)
        scanf("%lf", &num[i]);
    sum[0] = num[0];
    for (int i = 1; i < N; i++)
        sum[i] = sum[i - 1] + num[i];
    for (int i = 0; i < N; i++)         //I just cannot print the two arrays using one loop.
        printf("%lf\t", num[i]);
    printf("\n");
    for (int i = 0; i < N; i++)
        printf("%lf\t", sum[i]);
    printf("\n");
    return 0;
}
