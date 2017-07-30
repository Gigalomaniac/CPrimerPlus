#include <stdio.h>

void to_base_n(unsigned long, int);

int main(void)
{
    unsigned long num;
    int radix;
    while(scanf("%lu%d", &num, &radix) == 2)
    {
        to_base_n(num, radix);
        putchar('\n');
    }
    return 0;
}

void to_base_n(unsigned long n, int r)
{
    if (n >= r)
        to_base_n(n / r, r);
    putchar('0' + n % r);
}
