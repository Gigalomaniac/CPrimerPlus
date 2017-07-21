#include <stdio.h>

int main(void)
{
    int num, odd = 0, even = 0, osum = 0, esum = 0;
    while (scanf("%d", &num) && num != 0)
    {
        switch (num % 2)
        {
            case 0: even++;
                    esum += num;
                    break;
            case 1: odd++;
                    osum += num;
        }
    }
    printf("Odd: %d, avg: %.2f\nEven: %d, avg: %.2f\n",
        odd, (float)osum / odd, even, (float)esum / even);
    return 0;
}
