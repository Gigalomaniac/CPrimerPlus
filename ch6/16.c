#include <stdio.h>

int main(void)
{
    double money = 1e6;
    int i = 0;
    while (money > 0)
    {
        i++;
        money *= 1.08;
        money -= 1e5;
    }
    printf("%d years\n", i);
    return 0;
}
