#include <stdio.h>

void main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);
    }
    printf("Original\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    printf("Transpose\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }
}