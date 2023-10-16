/*
Program to read two integer and two floating point numbers.
By. Avinash Singh 
Date: 13/10/2023
*/

#include<stdio.h>

int main()
{
    int i1, i2;
    float f1, f2;
    printf("\nEnter 2 integers:\n");
    scanf("%d%d", &i1, &i2);
    printf("\nEnter 2 floats:\n");
    scanf("%f%f", &f1, &f2);

    printf("\nThe 2 integers are %d, %d\nThe 2 float values are %.2f, %.2f", i1, i2, f1, f2);
    return 0;
}
