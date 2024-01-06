#include <stdio.h>

void inputMatrix(int row, int col, int x[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d,%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void outputMatrix(int row, int col, int x[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int transposeMatrix(int row, int col, int x[][col], int y[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            y[i][j] = x[j][i];
        }
    }
}

void main()
{
    int x[3][3], y[3][3];
    inputMatrix(3, 3, x);
    transposeMatrix(3, 3, x, y);
    outputMatrix(3, 3, x);
    outputMatrix(3, 3, y);
}