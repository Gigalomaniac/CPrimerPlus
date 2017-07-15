#include <stdio.h>
#define DAY_PER_WEEK 7

int main(void)
{
    int days;
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d days are %d weeks, %d days.\n", days, days / DAY_PER_WEEK, days % DAY_PER_WEEK);
        scanf("%d", &days);
    }
    return 0;
}
