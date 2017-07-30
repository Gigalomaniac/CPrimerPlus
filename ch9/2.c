#include <stdio.h>

void chline(char, int, int);

int main(void)
{
    char ch;
    int i, j;
    scanf("%c%d%d", &ch, &i, &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 1; k < i; k++)
        putchar(' ');
    while (i++ <= j)
        putchar(ch);
}
