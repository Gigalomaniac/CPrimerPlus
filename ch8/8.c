#include <stdio.h>

int get_choice(void);
float get_flt(void);

int main(void)
{
    int mode;
    float num1, num2;
    mode = get_choice();
    while (mode != 0)
    {
        printf("Enter first number: ");
        num1 = get_flt();
        printf("Enter second number: ");
        num2 = get_flt();
        switch (mode)
        {
            case 1: printf("%g + %g = %g\n", num1, num2, num1 + num2);
                    break;
            case 2: printf("%g - %g = %g\n", num1, num2, num1 - num2);
                    break;
            case 3: printf("%g * %g = %g\n", num1, num2, num1 * num2);
                    break;
            case 4: while (num2 == 0)
                    {
                        printf("Enter a number other than 0: ");
                        num2 = get_flt();
                    }
                    printf("%g / %g = %g\n", num1, num2, num1 / num2);
                    break;
            default:printf("Error\n");
        }
        mode = get_choice();
    }
    puts("Bye.");
    return 0;
}

int get_choice(void)
{
    int ch, error = 0;
    printf("Enter the operation of your choice:\n");
    printf("a. add\t\ts. subtract\n");
    printf("m. multiply\td. divide\n");
    printf("q. quit\n");
    do {
        ch = getchar();
        while (getchar() != '\n')
            continue;
        switch (ch)
        {
            case 'a':   return 1;
            case 's':   return 2;
            case 'm':   return 3;
            case 'd':   return 4;
            case 'q':   return 0;
            default:    printf("Please respond with a, s, m, d, or q\n");
                        error = 1;
        }
    } while (error);
    return -1;
}

float get_flt(void)
{
    float input;
    char ch;
    while(scanf("%f", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\nPlease enter a ");
        printf("number, such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n')
        continue;
    return input;
}
