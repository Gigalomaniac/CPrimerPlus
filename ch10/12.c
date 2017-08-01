#include <stdio.h>
#define ROWS 3
#define COLS 5

int read2darr(double [][COLS], int);
double avgarr(double [], int);
double avg2darr(double [][COLS], int);
double max2darr(double [][COLS], int);
void showres(double [][COLS], int);

int main(void)
{
    double ar[ROWS][COLS];
    printf("Please enter %d sets of numbers, each of which contains %d numbers.\n", ROWS, COLS);
    while (read2darr(ar, ROWS) != ROWS * COLS)
        printf("Input Error! Try again please.\n");
    showres(ar, ROWS);
    return 0;
}

int read2darr(double ar[][COLS], int n)
{
    int READ_SUCCESS = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            if (scanf("%lf", &ar[i][j]))
                READ_SUCCESS++;
    return READ_SUCCESS;
}

double avgarr(double ar[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += ar[i];
    return sum / n;
}

double avg2darr(double ar[][COLS], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < COLS; j++)
            sum += ar[i][j];
    return sum / (n * COLS);
}

double max2darr(double ar[][COLS], int n)
{
    double max = ar[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < COLS; j++)
            max = ar[i][j] > max ? ar[i][j] : max;
    return max;
}

void showres(double ar[][COLS], int n)
{
    printf("Average of each set:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%g\n", i + 1, avgarr(ar[i], COLS));
    printf("\nAverage of all: %g\n", avg2darr(ar, n));
    printf("\nMax of all: %g\n", max2darr(ar, n));
}
