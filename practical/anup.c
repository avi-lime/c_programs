#include<stdio.h>

void main()
{
    float s1, s2, s3, s4, s5, sum, per;
    printf("\nenter:");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    sum = s1+s2+s3+s4+s5;
    printf("%f\n", sum);
    per = sum/5;
    printf("%f\n", per);
}