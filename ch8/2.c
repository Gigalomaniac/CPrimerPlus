#include <stdio.h>

int main(void)
{
    int i = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch < 32)
        {
            if (ch == '\n')
                printf("\\n %d\t", ch);
            else if (ch == '\t')
                printf("\\t %d\t", ch);
            else
                printf("^%c %d\t", ch + 64, ch);
        }
        else
            printf("%2c %d\t", ch, ch);
        if (i++ % 10 == 9)
            putchar('\n');
    }
    return 0;
}
