// Program to find the greatest of three numbers

#include<stdio.h>

void main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter third number: ");
    scanf("%d", &c);
    if(a > b) 
    {
        if (a > c)
            printf("\nFirst number (%d) is the greatest", a);
        else
            printf("\nThird number (%d) is the greatest", c);
    }
    else 
    {
        if (b > c)
            printf("\nSecond number (%d) is the greatest", b);
        else
            printf("\nThird number (%d) is the greatest", c);
    }
}