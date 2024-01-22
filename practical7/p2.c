#include <stdio.h>

void checkPrime(int x)
{
    int flag = 1;
    for (int i = 2; i < x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    printf("%s", flag ? x == 1 ? "Special" : "Prime" : "Not a prime");
}

void main()
{
    int a;
    scanf("%d", &a);
    checkPrime(a);
}