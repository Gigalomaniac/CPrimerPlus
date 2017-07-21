#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '#')
    {
        printf("%c %3d\t", ch, ch);
        if (i++ % 8 == 7)
            putchar('\n');
    }
    return 0;
}
