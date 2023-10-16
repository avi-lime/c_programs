/*
Program that accepts Centigrade and converts into Fahrenheit
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>

void main()
{
    float c, f;
    printf("\nEnter the temperature in C: ");
    scanf("%f", &c);
    f = ((9*c)/5) +32;
    printf("\nThe temperature in F is %.2f", f);
    
}