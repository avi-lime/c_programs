#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the matrix (NxN): ");
    scanf("%d", &n);
    int matrix[n][n];
    // Input elements of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("\nElement [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Finding sum of diagonal elements in the matrix
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    printf("\nSum of Diagonal Elements: %d\n", sum);
}