#include <stdio.h>
#define SEC_PER_YEAR 3.156e7

int main(void)
{
    int age;
    scanf("%d", &age);
    printf("%e\n", age * SEC_PER_YEAR);
    return 0;
}
