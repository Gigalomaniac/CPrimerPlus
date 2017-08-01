#include <stdio.h>

void arrcpy(int, int, double [*][*], double [*][*]);
void showarr(int, int, double [*][*]);

int main(void)
{
    double ar[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {2.2, 3.3, 4.4, 5.5, 6.6},
        {3.3, 4.4, 5.5, 6.6, 7.7}
    };
    double dest[3][5];
    arrcpy(3, 5, ar, dest);
    showarr(3, 5, ar);
    showarr(3, 5, dest);
    return 0;
}

void arrcpy(int n, int m, double source[n][m], double target[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            target[i][j] = source[i][j];
}

void showarr(int n, int m, double ar[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%g\t", ar[i][j]);
        putchar('\n');
    }
    putchar('\n');
}
