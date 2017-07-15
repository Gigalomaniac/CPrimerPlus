#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int minute;
    scanf("%d", &minute);
    while (minute > 0)
    {
        printf("%d hr %d min\n", minute / MIN_PER_HOUR, minute % MIN_PER_HOUR);
        scanf("%d", &minute);
    }
    return 0;
}
