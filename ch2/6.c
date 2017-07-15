#include <stdio.h>

void msg(void);

int main(void)
{
    msg();
    msg();
    msg();
    printf("\n");
    msg();
    msg();
    printf("\n");
    msg();
    printf("\n");
    return 0;
}

void msg(void)
{
    printf("Smile!");
}
