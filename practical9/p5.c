#include <stdio.h>

void main()
{
    int a[10], numToFind, flag = -1;
    int *p = a;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p + i);
    }
    scanf("%d", &numToFind);
    for (int i = 0; i < 10; i++)
    {
        if (*(p + i) == numToFind)
        {
            flag = i;
            break;
        }
    }
    if (flag >= 0)
        printf("Element is present at index %d\n", flag);
    else
        printf("Element is not present in the array");
}