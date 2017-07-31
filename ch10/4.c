#include <stdio.h>

int idmaxofarr(double *, int);

int main(void)
{
    double ar[5] = {32.4, 45.7, 12.1, 73.5, 50.9};
    printf("max: %d\n", idmaxofarr(ar, 5));
    return 0;
}

int idmaxofarr(double * ar, int n)
{
    double max = ar[0];
    int idmax = 0;
    for (int i = 1; i < n; i++)
        if (ar[i] > max)
        {
            max = ar[i];
            idmax = i;
        }
    return idmax;
}
