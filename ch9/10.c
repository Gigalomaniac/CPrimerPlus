#include <stdio.h>

long Fibonacci(int);

int main(void)
{
    int i;
    scanf("%d", &i);
    printf("%ld\n", Fibonacci(i));
    return 0;
}

long Fibonacci(int n)
{
    int prev1 = 1, prev2 = 1;
    long now;
    if (n == 1 || n == 2)
        return 1;
    else
        for (int i = 3; i <= n; i++)
        {
            now = prev1 + prev2;
            prev2 = prev1;
            prev1 = now;
        }
    return now;
}
