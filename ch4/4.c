#include <stdio.h>

int main(void)
{
    char name[10];
    float height;
    scanf("%s%f", name, &height);
    printf("%s, you are %.3f m tall.\n", name, height / 100);
    return 0;
}
