// Program to find the greatest of three numbers

#include<stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if(a > b && a > c) 
        printf("\nFirst number (%d) is the greatest", a);
    else if (b > a && b > c)
        printf("\nSecond number (%d) is the greatest", b);
    else
        printf("\nThird number (%d) is the greatest", c);

}