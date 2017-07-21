#include <stdio.h>
#define TYPE1 17850
#define TYPE2 23900
#define TYPE3 29750
#define TYPE4 14875
#define STAGE1 0.15
#define STAGE2 0.28

int main(void)
{
    float income, tax;
    int mode, basic;
    printf("*************************************************************\n");
    printf("Enter the number corresponding to the desired type or action:\n");
    printf("1) Single\t\t2) Householder\n");
    printf("3) Married, shared\t4) Married, divorced\n");
    printf("5) quit\n");
    printf("*************************************************************\n");
    while (scanf("%d", &mode) && mode != 5)
    {
        switch (mode)
        {
            case 1: basic = TYPE1;
                    break;
            case 2: basic = TYPE2;
                    break;
            case 3: basic = TYPE3;
                    break;
            case 4: basic = TYPE4;
                    break;
            default:printf("No such option! Please enter an integer number within the range 1 ~ 5.\n");
                    continue;
        }
        printf("Now enter the taxable income\n");
        scanf("%f", &income);
        tax = STAGE1 * (income > basic ? basic : income) + STAGE2 * (income > basic ? income - basic : 0);
        printf("Tax: %.2f\n", tax);
    }
        return 0;
}
