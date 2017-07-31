#include <stdio.h>

void copy_arr(double [], double [], int);
void copy_ptr(double *, double *, int);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target1[3], target2[3];
    copy_arr(source + 2, target1, 3);
    copy_ptr(source + 2, target2, 3);
    return 0;
}

void copy_arr(double source[], double target[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double * source, double * target, int n)
{
    while (n--)
        *target++ = *source++;
}
