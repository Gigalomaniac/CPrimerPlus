#include <stdio.h>

int main(void)
{
    char end;
    scanf("%c", &end);
    for (int i = 'A'; i <= end; i++)
    {
        for (int j = 0; j < end - i; j++)
            printf(" ");
        int k;
        for (k = 'A'; k < i; k++)
            printf("%c", k);
        for ( ; k >= 'A'; k--)
            printf("%c", k);
        printf("\n");
    }
    return 0;
}
