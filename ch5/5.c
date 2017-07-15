#include <stdio.h>

int main(void)
{
    int count = 0, sum = 0, n;
    scanf("%d", &n);
    while (count++ < n)
        sum = sum + count;
    printf("sum = %d\n", sum);
    return 0;
}
