#include <stdio.h>

void msg1(void);
void msg2(void);

int main(void)
{
    msg1();
    msg1();
    msg1();
    msg2();
    return 0;
}

void msg1(void)
{
    printf("For he's a jolly good fellow!\n");
}

void msg2(void)
{
    printf("Which nobody can deny!\n");
}
