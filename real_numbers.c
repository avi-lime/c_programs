#include<stdio.h>
#include<math.h>

void main()
{
    float num;
    printf("\nEnter a real number: ");
    scanf("%f", &num);
    printf("\n%.0lf", ceil(num));
    printf("\n%.2lf", num);
    printf("\n%.0lf", floor(num));
}