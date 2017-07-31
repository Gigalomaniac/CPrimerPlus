#include <stdio.h>

int maxofarr(int *, int);

int main(void)
{
    int ar[5] = {32, 45, 12, 73, 50};
    printf("max: %d\n", maxofarr(ar, 5));
    return 0;
}

int maxofarr(int * ar, int n)
{
    int max = ar[0];
    for (int i = 1; i < n; i++)
        max = ar[i] > max ? ar[i] : max;
    return max;
}
