#include <stdio.h>
#define BASIC 10.00
#define EXTRA 1.5
#define STAGE1 0.15
#define STAGE2 0.2
#define STAGE3 0.25

int main(void)
{
    float wt, salary, tax, net;
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
    return 0;
}
