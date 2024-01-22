#include <stdio.h>

void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a is %d\n", *p);
    printf("Address of a is %u", p);
}