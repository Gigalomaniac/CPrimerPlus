#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int inword = 0, sum = 0, word = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (!isspace(ch) && !ispunct(ch))
        {
            if (!inword)
            {
                inword = 1;
                word++;
            }
            sum++;
        }
        else
            inword = 0;
    }
    printf("Average: %.1f lpw\n", (float)sum / word);
    return 0;
}
