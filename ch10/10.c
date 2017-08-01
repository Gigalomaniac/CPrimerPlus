#include <stdio.h>

void showarr(int [][5], int);
void dbarr(int [][5], int);

int main(void)
{
    int ar[3][5] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {5, 7, 9, 1, 3}
    };
    showarr(ar, 3);
    dbarr(ar, 3);
    showarr(ar, 3);
    return 0;
}

void showarr(int ar[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d\t", ar[i][j]);
        putchar('\n');
    }
    putchar('\n');
}

void dbarr(int ar[][5], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            ar[i][j] *= 2;
}
