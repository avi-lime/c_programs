#include<stdio.h>

void main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if(age >= 18) 
        printf("\nEligible for applying for voter card");
    else
        printf("\nNot eligible for applying for voter card");

}