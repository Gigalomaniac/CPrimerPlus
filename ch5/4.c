#include <stdio.h>
#define IN_PER_CM 0.3937
#define IN_PER_FT 12

int main(void)
{
    double height;
    printf("Enter a height in centimeters: ");
    scanf("%lf", &height);
    while (height > 0)
    {
        int ft = height * IN_PER_CM / IN_PER_FT;
        printf("%.1f cm = %d feet, %.1f inches\n", 
            height, ft, height * IN_PER_CM - ft * IN_PER_FT);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &height);
    }
    printf("bye\n");
    return 0;
}
