#include<stdio.h>

void main()
{
    float radius, rate, cost;
    printf("\nEnter the radius of the circular playground: ");
    scanf("%f", &radius);
    
    printf("\nEnter the rate of covering the ground with grass: ");
    scanf("%f", &rate);

    cost = (22*radius*radius*rate)/7;

    printf("\nThe cost would be ₹%.2f", cost);
}