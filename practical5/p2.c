#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], sum[n];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    printf("Sum Array: ");
    for (int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
        printf("%d ", sum[i]);
    }
}