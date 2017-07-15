#include <stdio.h>
#define MASS_PER_MOLECULE 3.0e-23
#define GRAM_PER_QUART 950

int main(void)
{
    double quarts;
    scanf("%lf", &quarts);
    printf("%g\n", quarts * GRAM_PER_QUART / MASS_PER_MOLECULE);
    return 0;
}
