#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter lower and upper integer limits: ");
    scanf("%d%d", &a, &b);
    while (a < b)
    {
        long sum = 0;
        for (int i = a; i <= b; i++)
            sum += i * i;
        printf("The sums of the squares from %d to %d is %ld\n", a, b, sum);
        printf("Enter next set of limits: ");
        scanf("%d%d", &a, &b);
    }
    printf("Done\n");
    return 0;
}
