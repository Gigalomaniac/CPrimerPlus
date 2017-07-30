#include <stdio.h>

int main(void)
{
    int a = 1, b = 100;
    char response;
    printf("Pick a integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf(" an l if it is lower and with a h if it is higher.\n");
    printf("Uh...is your number %d?\n", (a + b) / 2);
    while ((response = getchar()) != 'y')
    {
        switch (response)
        {
            case 'l':   a = (a + b) / 2;
                        printf("Well, then, is it %d?\n", (a + b) / 2);
                        break;
            case 'h':   b = (a + b) / 2;
                        printf("Well, then, is it %d?\n", (a + b) / 2);
                        break;
            default:    printf("Sorry, I understand only y, h, or l.\n");
        }
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
    return 0;
}
