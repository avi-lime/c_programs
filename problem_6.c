#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1=0,r2=0;
    printf("\nEnter a, b, c: \n");
    scanf("%d%d%d", &a, &b, &c);

    d = (b*b)-(4*a*c);
    if(d > 0) {
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
    } else {
        if(d==0) {
            r1 = -b/(2*a);
            r2 = -b/(2*a);
        }
    }
    if(r1!=0) 
        printf("\nThe roots of the quadratic equation are %.2f and %.2f", r1, r2);
    else
        printf("\nThe roots are imaginary");
    
}