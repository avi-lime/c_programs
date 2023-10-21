#include<stdio.h>

void main()
{
    float ratio;
    int male, female;
    scanf("%d%d", &male, &female);
    ratio = (float)male/(float)female;
    printf("ratio is %.2f\n", ratio );
}