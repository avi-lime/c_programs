#include <stdio.h>

void swap_by_val(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping: a: %d, b: %d", a, b);
}

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping: a: %d, b: %d", a, b);
    swap_by_val(a, b);
}