#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter the count of numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all numbers in the array is %d", sum);
}