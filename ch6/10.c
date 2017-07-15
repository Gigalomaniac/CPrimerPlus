#include <stdio.h>
#define N 8

int main(void)
{
    int num[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    for (int i = N - 1; i >= 0; i--)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}
