#include <stdio.h>
#define ROWS 3
#define COLS 5

int read2darr(int, int, double [*][*]);
double avgarr(int, double [*]);
double avg2darr(int, int, double [*][*]);
double max2darr(int, int, double [*][*]);
void showres(int, int, double [*][*]);

int main(void)
{
    double ar[ROWS][COLS];
    printf("Please enter %d sets of numbers, each of which contains %d numbers.\n", ROWS, COLS);
    while (read2darr(ROWS, COLS, ar) != ROWS * COLS)
        printf("Input Error! Try again please.\n");
    showres(ROWS, COLS, ar);
    return 0;
}

int read2darr(int n, int m, double ar[n][m])
{
    int READ_SUCCESS = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            if (scanf("%lf", &ar[i][j]))
                READ_SUCCESS++;
    return READ_SUCCESS;
}

double avgarr(int n, double ar[n])
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += ar[i];
    return sum / n;
}

double avg2darr(int n, int m, double ar[n][m])
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += ar[i][j];
    return sum / (n * m);
}

double max2darr(int n, int m, double ar[n][m])
{
    double max = ar[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            max = ar[i][j] > max ? ar[i][j] : max;
    return max;
}

void showres(int n, int m, double ar[n][m])
{
    printf("Average of each set:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%g\n", i + 1, avgarr(m, ar[i]));
    printf("\nAverage of all: %g\n", avg2darr(m, n, ar));
    printf("\nMax of all: %g\n", max2darr(m, n, ar));
}
