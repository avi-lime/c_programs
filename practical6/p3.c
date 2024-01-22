#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the matrix (NxN): ");
    scanf("%d");
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
    // Displaying the entered matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    // Finding sum of diagonal elements in the matrix
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    printf("\nSum of Diagonal Elements: %d\n", sum);
}