#include <stdio.h>

double diffofarr(double *, int);

int main(void)
{
    double ar[5] = {32.4, 45.7, 12.1, 73.5, 50.9};
    printf("diff: %g\n", diffofarr(ar, 5));
    return 0;
}

double diffofarr(double * ar, int n)
{
    double max = ar[0], min = ar[0];
    for (int i = 1; i < n; i++)
    {
        max = ar[i] > max ? ar[i] : max;
        min = ar[i] < min ? ar[i] : min;
    }
    return max - min;
}
