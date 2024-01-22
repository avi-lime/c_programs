#include <stdio.h>

void main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < m; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < n; j++)
            rowsum += matrix[i][j];
        printf("Row %d: %d\n", i, rowsum);
    }
    for (int i = 0; i < n; i++)
    {
        int colsum = 0;
        for (int j = 0; j < m; j++)
            colsum += matrix[j][i];
        printf("Col %d: %d\n", i, colsum);
    }
}