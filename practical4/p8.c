// reverse a number
#include<stdio.h>
void main()
{
    int num, rev = 0;
    scanf("%d", &num);
    while(num > 0)
    {
        rev*=10;
        rev += num%10;
        num/=10;
    }
    printf("%d", rev);
}