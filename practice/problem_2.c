// Calculate Simple Interest

#include<stdio.h>

void main()
{
    int p, t;
    float r, si;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("\n");
    printf("Enter Rate of interest per year in percentage : ");
    scanf("%f",&r );
    printf("\n");
    printf("Enter Time period (in years): ");
    scanf( "%d" ,&t  );
    
    si=(p*r*t)/100;
    printf("Simple Interest is %.2f ",si);
            
}