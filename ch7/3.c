#include <stdio.h>

int main(void)
{
    int num, odd = 0, even = 0, osum = 0, esum = 0;
    while (scanf("%d", &num) && num != 0)
    {
        if (num % 2)
        {
            odd++;
            osum += num;
        }
        else
        {
            even++;
            esum += num;
        }
    }
    printf("Odd: %d, avg: %.2f\nEven: %d, avg: %.2f\n",
        odd, (float)osum / odd, even, (float)esum / even);
    return 0;
}
