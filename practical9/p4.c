#include <stdio.h>

void main()
{
    int a[5];
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}