#include<stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // sort
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; i++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

}