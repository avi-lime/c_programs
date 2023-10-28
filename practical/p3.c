/*
Program to calculate the simple interest and compound interest
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>
#include<math.h>

int main()
{
    double principal, rate, time, SI, Amount, CI;
    printf("\nEnter Principal Amount: ");
    scanf("%lf", &principal);
    printf("\nEnter Rate of interest: ");
    scanf("%lf", &rate);
    printf("\nEnter Time: ");
    scanf("%lf", &time);
    SI = (principal * rate * time)/100 ; //Simple Interest formula
    Amount = principal*(pow((1 + rate / 100), time)); //Compound Interest formula
    CI = Amount - principal;
    printf("\nThe Simple Interest is %.2lf\nThe Compound Interest is %.2lf", SI, CI);
    return 0;
}
