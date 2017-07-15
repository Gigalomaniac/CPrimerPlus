#include <stdio.h>

long double cube(float);

int main(void)
{
    float num;
    scanf("%f", &num);
    printf("%Lf\n", cube(num));
    return 0;
}

long double cube(float n)
{
    return n*n*n;
}
