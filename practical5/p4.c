#include <stdio.h>

void main()
{
    int n, tosearch, location = -1;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be searched for: ");
    scanf("%d", &tosearch);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tosearch)
        {
            location = i;
            break;
        }
    }

    if (location != -1)
        printf("The element is at position %d of the array", location);
    else
        printf("The element is not in the array");
}