#include <stdio.h>

int isPrime(int);

int main(void)
{
    int n, i = 1, j = 0;
    scanf("%d", &n);
    while (++i <= n)
    {
        if (isPrime(i))
        {
            printf("%d\t", i);
            if (j++ % 5 == 4)
            putchar('\n');
        }
    }
    putchar('\n');
    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
