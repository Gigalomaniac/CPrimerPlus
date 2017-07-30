#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    puts("Enter your option");
    char ch = get_first();
    printf("You option is %c\n", ch);
    return 0;
}

char get_first(void)
{
    char ch;
    while ((ch = getchar()) && isblank(ch) || ch == '\n')
        continue;
    while (getchar() != '\n')
        continue;
    return ch;
}
