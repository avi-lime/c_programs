#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,D, r1=0,r2=0;
    printf("\nEnter a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);

    D = (b*b)-(4*a*c);
    if(D > 0) {
        r1 = (-b+sqrt(D))/(2*a);
        r2 = (-b-sqrt(D))/(2*a);
    } else if(D==0) {
        r1 = r2 = -b/(2*a);
    }
    if(r1!=0) 
        printf("\nThe roots of the quadratic equation are %.2f and %.2f", r1, r2);
    else
        printf("\nThe roots are imaginary");
    
}