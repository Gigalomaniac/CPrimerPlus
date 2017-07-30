#include <stdio.h>
#define BASIC1 8.75
#define BASIC2 9.33
#define BASIC3 10.00
#define BASIC4 11.20
#define EXTRA 1.5
#define STAGE1 0.15
#define STAGE2 0.2
#define STAGE3 0.25

char get_choice(void);

int main(void)
{
    char mode;
    float BASIC, wt, salary, tax, net;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr\t\tb) $9.33/hr\n");
    printf("c) $10.00/hr\t\td) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
    while ((mode = get_choice()) && mode != 'q')
    {
        switch (mode)
        {
            case 'a':   BASIC = BASIC1;
                        break;
            case 'b':   BASIC = BASIC2;
                        break;
            case 'c':   BASIC = BASIC3;
                        break;
            case 'd':   BASIC = BASIC4;
                        break;
            default:    printf("No such option! Please enter a English letter within the range a ~ d & q.\n");
                        continue;
        }
        printf("Now enter the working hours\n");
        scanf("%f", &wt);
        while (getchar() != '\n')
            continue;
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

char get_choice(void)
{
    char ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}
