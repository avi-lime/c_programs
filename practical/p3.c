/*
Program to calculate the simple interest and compound interest
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int principal, rate, time;
    float SI;
    double CI;
    printf("\nEnter Principal Amount: ");
    scanf("%d", &principal);
    printf("\nEnter Rate of interest: ");
    scanf("%d", &rate);
    printf("\nEnter Time: ");
    scanf("%d", &time);
    SI = (principal * rate * time)/100 ; //Simple Interest formula
    CI = (principal*(pow((1 + rate / 100), time)) - principal); //Compound Interest formula
    printf("\nThe Simple Interest is %.2f\nThe Compound Interest is %.2lf", SI, CI);
    return 0;
}
