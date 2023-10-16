/*
Program to calculate and print the area of triangle, where the three sides of the triangle is given as input.
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int a, b, c, s;
    float area;

    printf("Enter side one : ");
    scanf("%d", &a);
    printf("\n");
    printf("Enter side two : ");
    scanf("%d",&b);
    printf("\n");
    printf("Enter side three : ");
    scanf("%d",&c);
    s = (a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is %f", area);
}