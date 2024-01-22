#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the matrix (NxN): ");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], mul[n][n];
    printf("Enter the elements of the first matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);
    }
    printf("Enter the elements of the second matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);
    }
    printf("Sum of the 2 matrices: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr1[i][j] + arr2[i][j]);
        printf("\n");
    }
    printf("Product of the 2 matrices: \n");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
                mul[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
}