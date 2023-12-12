#include <stdio.h>

void main()
{
    int n, min = 0, max = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (arr[max] < arr[i])
            max = i;
        if (arr[min] > arr[i])
            min = i;
    }
    printf("The greatest element of the array is %d\nThe least element of the array is %d", arr[max], arr[min]);
}