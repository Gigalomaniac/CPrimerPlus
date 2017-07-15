#include <stdio.h>

int main(void)
{
    double daphne = 100, deirdre = 100;
    int i = 0;
    while (deirdre <= daphne)
    {
        i++;
        daphne += 100 * 0.1;
        deirdre *= 1.05;
    }
    printf("%d years\nDaphne: $%.2f\nDeirdre: $%.2f\n",
        i, daphne, deirdre);
    return 0;
}
