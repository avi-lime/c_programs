#include <stdio.h>

void main()
{
    struct S
    {
        int a;
        char b[10];
    };
    struct S s = {10, "Avinash"};
    printf("%d %s", s.a, s.b);
}