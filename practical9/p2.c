#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swapping: %d %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: %d %d", a, b);
}