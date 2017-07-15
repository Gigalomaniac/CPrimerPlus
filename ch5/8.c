#include <stdio.h>

void Temperature(double);

int main(void)
{
    double temp;
    while (scanf("%lf", &temp))
        Temperature(temp);
    return 0;
}

void Temperature(double fah)
{
    double cel = (fah - 32) / 1.8;
    double kel = cel + 273.16;
    printf("Celcius: %.2f\n", cel);
    printf("Fahrenheit: %.2f\n", fah);
    printf("Kelvin: %.2f\n", kel);
}
