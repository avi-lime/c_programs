#include <stdio.h>

int add(int *p, int *q)
{
    return *p + *q;
}

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", add(&a, &b));
}