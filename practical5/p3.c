#include <stdio.h>

void main()
{
    int n, min, max;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        min = min < arr[i] ? min : arr[i];
        max = max > arr[i] ? max : arr[i]; 
    }
    printf("The greatest element of the array is %d\nThe least element of the array is %d", max, min);
}