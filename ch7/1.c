#include <stdio.h>

int main(void)
{
    char ch;
    int space = 0, newl = 0, others = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            newl++;
        else
            others++;
    }
    printf("Space: %d\nNewline: %d\nOthers: %d\n",
        space, newl, others);
    return 0;
}
