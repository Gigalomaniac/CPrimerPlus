#include <stdio.h>
#include <float.h>

int main(void)
{
    double var1 = 1.0 / 3.0;
    float var2 = 1.0 / 3.0;
    printf("%.4f %.4f\n", var1, var2);
    printf("%.12f %.12f\n", var1, var2);
    printf("%.16f %.16f\n", var1, var2);
    printf("%d %d\n", FLT_DIG, DBL_DIG);
    return 0;
}
