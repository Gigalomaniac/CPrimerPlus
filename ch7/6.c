#include <stdio.h>

int main(void)
{
    char prev = 0, now;
    int n = 0;
    while ((now = getchar()) != '#')
    {
        if (now == 'i' && prev == 'e')
            n++;
        prev = now;
    }
    printf("%d\n", n);
    return 0;
}
