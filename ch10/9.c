#include <stdio.h>

void arradd(int *, int *, int *, int);

int main(void)
{
    int arr1[4] = {2, 4, 5, 8},
        arr2[4] = {1, 0, 4, 6},
        arr3[4];
    arradd(arr1, arr2, arr3, 4);
    return 0;
}

void arradd(int * ar1, int * ar2, int * ar3, int n)
{
    for (int i = 0; i < n; i++)
        ar3[i] = ar1[i] + ar2[i];
}
