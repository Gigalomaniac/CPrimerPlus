#include <stdio.h>
#define CM_PER_INCH 2.54

int main(void)
{
    double height;
    scanf("%lf", &height);
    printf("%.1f in = %.1f cm\n", height, height * CM_PER_INCH);
    return 0;
}
