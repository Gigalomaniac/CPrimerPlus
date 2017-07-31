#include <stdio.h>

void copy_arr(double [], double [], int);
void copy_ptr(double *, double *, int);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5];
    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);
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
