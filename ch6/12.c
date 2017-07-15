#include <stdio.h>
#define N 8

int power(int, int);

int main(void)
{
    int arr[N], i;
    for (i = 0; i < N; i++)
        arr[i] = power(2, i+1);
    i = 0;
    do {
        printf("%d ", arr[i++]);
    } while (i < N);
    printf("\n");
    return 0;
}

int power(int n, int p)
{
    int ans = 1;
    for (int i = 0; i < p; i++)
        ans *= n;
    return ans;
}
