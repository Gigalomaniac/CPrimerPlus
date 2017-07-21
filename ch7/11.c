#include <stdio.h>
#define typeA 1.25
#define typeB 0.65
#define typeC 0.89

void menu(void);

int main(void)
{
    float weightA = 0, weightB = 0, weightC = 0;
    char type;
    menu();
    while (scanf("%c", &type) && type != 'q')
    {
        while (getchar() != '\n')
            continue;
        float addition;
        switch (type)
        {
            case 'a':   printf("please enter the weight (in pound) of artichoke\n");
                        scanf("%f", &addition);
                        weightA += addition;
                        break;
            case 'b':   printf("please enter the weight (in pound) of beet\n");
                        scanf("%f", &addition);
                        weightB += addition;
                        break;
            case 'c':   printf("please enter the weight (in pound) of carrot\n");
                        scanf("%f", &addition);
                        weightC += addition;
                        break;
            default:    printf("No such option! Please enter a letter within the range a ~ c & q.\n");
                        continue;
        }
        while (getchar() != '\n')
            continue;
        menu();
    }
    float   costA = weightA * typeA,
            costB = weightB * typeB,
            costC = weightC * typeC,
            costABC = costA + costB + costC,
            weight = weightA + weightB + weightC,
            costTrans = weight < 5 ? 3.5 : weight < 20 ? 10.0 : 8 + 0.1 * (weight - 20),
            discount = costABC > 100 ? 0.05 * costABC : 0,
            costT = costABC - discount + costTrans;
    printf("\n***********************************\n\n");
    printf("Unit price:\n");
    printf("Artichoke: $%.2f\tBeet: $%.2f\n", typeA, typeB);
    printf("Carrot: $%.2f\n\n", typeC);
    printf("Weight ordered:\n");
    printf("Artichoke: %.2f\t\tBeet: %.2f\n", weightA, weightB);
    printf("Carrot: %.2f\n\n", weightC);
    printf("Order price:\n");
    printf("Artichoke: $%.2f\tBeet: $%.2f\n", costA, costB);
    printf("Carrot: $%.2f\t\tAll: $%.2f\n\n", costC, costABC);
    printf("Discount: $%.2f\n", discount);
    printf("Transportation cost: $%.2f\n\n", costTrans);
    printf("Total: $%.2f\n", costT);
    printf("\n***********************************\n\n");
    return 0;
}

void menu(void)
{
    printf("*************************************************************\n");
    printf("Enter the letter corresponding to the desired type or action:\n");
    printf("a) Artichoke\t\tb) Beet\n");
    printf("c) Carrot\t\tq) quit\n");
    printf("*************************************************************\n");
}
