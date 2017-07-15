#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int end = num + 10;
    while (num <= end)
        printf("%d ", num++);
    return 0;
}
