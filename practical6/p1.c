#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter the number of rows(m) and columns(n): ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of the 2D array: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Printing the original matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}