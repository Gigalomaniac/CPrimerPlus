#include <stdio.h>

int main(void)
{
    char line[255];
    int i = 0;
    scanf("%c", &line[i]);
    while (line[i] != '\n')
        scanf("%c", &line[++i]);
    for (i--; i >= 0; i--)
        printf("%c", line[i]);
    printf("\n");
    return 0;
}
