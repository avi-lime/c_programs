#include<stdio.h>

void main()
{
    float r, n, dist;
    printf("\nEnter the radius of the circular track (in km): ");
    scanf("%f", &r);
    printf("\nEnter the number of laps: ");
    scanf("%f", &n);
    dist = (2 * 22 * r * n)/7;
    printf("\nThe driver covered %.2f km", dist);
}