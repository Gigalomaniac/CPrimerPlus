#include <stdio.h>

void func(char, int, int);

int main(void)
{
    char ch;
    int row, col;
    scanf("%c%d%d", &ch, &col, &row);
    func(ch, col, row);
    return 0;
}

void func(char ch, int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            putchar(ch);
        putchar('\n');
    }
}
