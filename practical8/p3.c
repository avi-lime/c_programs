#include <stdio.h>

void main()
{
    struct example
    {
        int a;
        struct ex
        {
            char b[10];
        } c;
    } s;
    scanf("%d %s", &s.a, s.c.b);
    printf("%d %s", s.a, s.c.b);
}