/*
Write a program to read two numbers and an operator (+.-.*,/) which performs the specified operation and display the result.
By. Avinash Singh
Date. 4-11-23
*/

#include<stdio.h>

void main()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nEnter an operator (+,-,*,/): ");
    scanf(" %c",&op);
    switch(op) 
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        default:
            printf("Invalid operator");
    }   
}