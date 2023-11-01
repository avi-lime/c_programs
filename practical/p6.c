/*
Program that swaps two numbers using a third variable
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>

void main()
{
    int a, b, temp;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nBefore swap:\na=%d\nb=%d\n",temp,b);//printing before swap values
    temp = a; //assigning value of 'a' to temporary variable
    a=b;
    b=temp;
    printf("\nAfter Swap:\na=%d\nb=%d\n",a,b);

}