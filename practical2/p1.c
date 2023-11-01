// Program to check if 2 numbers are equal or not
#include<stdio.h>

void main()
{
    int num1, num2; 
    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    (num1==num2)?printf("Both numbers are equal"):printf("Both numbers are not equal");
}