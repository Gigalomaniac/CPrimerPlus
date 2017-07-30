#include <stdio.h>
#include <ctype.h>

int chpos(char);

int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (isblank(ch) || ch == '\n')
            continue;
        int pos = chpos(ch);
        if (pos == -1)
            printf("%c is not a English letter.\n", ch);
        else
            printf("%c is a English letter whose position is %d\n", ch, pos);
    }
    return 0;
}

int chpos(char ch)
{
    if (isalpha(ch))
        return tolower(ch) - 'a' + 1;
    else
        return -1;
}
