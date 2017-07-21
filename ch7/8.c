#include <stdio.h>
#define BASIC1 8.75
#define BASIC2 9.33
#define BASIC3 10.00
#define BASIC4 11.20
#define EXTRA 1.5
#define STAGE1 0.15
#define STAGE2 0.2
#define STAGE3 0.25

int main(void)
{
    int mode;
    float BASIC, wt, salary, tax, net;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    while (scanf("%d", &mode) && mode != 5)
    {
        switch (mode)
        {
            case 1: BASIC = BASIC1;
                    break;
            case 2: BASIC = BASIC2;
                    break;
            case 3: BASIC = BASIC3;
                    break;
            case 4: BASIC = BASIC4;
                    break;
            default:printf("No such option! Please enter an integer number within the range 1 ~ 5.\n");
                    continue;
        }
        printf("Now enter the working hours\n");
        scanf("%f", &wt);
        salary = BASIC * (wt > 40 ? 40 : wt)
            + EXTRA * BASIC * (wt > 40 ? wt - 40 : 0);
        if (salary <= 300)
            tax = salary * STAGE1;
        else if (salary <= 450)
            tax = 300 * STAGE1 + (salary - 300) * STAGE2;
        else
            tax = 300 * STAGE1 + 150 * STAGE2 + (salary - 450) * STAGE3;
        net = salary - tax;
        printf("Total salary: %.2f\nTax: %.2f\nNet salary: %.2f\n",
        salary, tax, net);
    }
    return 0;
}
