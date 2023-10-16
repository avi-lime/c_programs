/*
Program to calculate the area and circumference of a circle
By Avinash Singh
Date: 13/10/2023
*/

#include<stdio.h>

void main()
{
    float radius, area, circumference;
    printf("\nEnter radius: ");
    scanf("%f", &radius);
    area = (22*radius*radius)/7;
    circumference = (2*22*radius)/7;
    printf("\nThe area of the circle is %.2f\nThe circumference of the circle is %.2f", area, circumference);
    
}