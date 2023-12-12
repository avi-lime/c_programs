#include <stdio.h>

void main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}