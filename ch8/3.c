#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int up = 0, lo = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            up++;
        else if (islower(ch))
            lo++;
    }
    printf("%d upper-case letters, and %d lower-case letters.\n", up, lo);
    return 0;
}
