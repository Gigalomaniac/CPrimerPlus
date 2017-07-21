#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            i++;
            putchar('!');
        }     
        else if (ch == '!')
        {
            i++;
            printf("!!");
        }
        else
            putchar(ch);
    }
    printf("\n%d replaces.\n", i);
    return 0;
}
