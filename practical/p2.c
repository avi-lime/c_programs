/*
Program to accept the marks of 5 subjects and find the sum and percentage marks obtained by the student.
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>

void main() 
{
    float marks[5], total = 0.0, percentage;
    printf("Enter five subject marks : \n");
    for(int i=0;i<=4;++i)
    {
        scanf("%f",&marks[i]);
        total+= marks[i];

    }
    percentage = total/5;
    printf("\nThe total is %.2f and the percentage is %.2f", total, percentage);

}