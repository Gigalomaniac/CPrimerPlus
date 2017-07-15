#include <stdio.h>

int main(void)
{
    int lo, up;
    scanf("%d%d", &lo, &up);
    for (int i = lo; i <= up; i++)
        printf("%d\t%ld\t%ld\n", i, i * i, i * i * i);
    return 0;
}
