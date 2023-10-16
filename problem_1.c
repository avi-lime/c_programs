#include<stdio.h>
#include<conio.h>

void main() 
{
    float marks[5], total = 0.0, percentage;
    printf("Enter five subject marks : ");
    for(int i=0;i<=4;++i)
    {
        scanf("%f",&marks[i]);
        total+= marks[i];

    }
    percentage = total/5;
    printf("\nThe total is %.2f and the percentage is %.2f", total, percentage);

}