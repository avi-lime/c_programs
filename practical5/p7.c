#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("The sum of all even numbers is %d", sum);
}