#include<stdio.h>

void main()
{
    int x, y, z, temp;
    printf("\nEnter x, y, z:");
    scanf("%d%d%d", &x, &y, &z);
    temp=x,x=z,z=y,y=temp;
    printf("\nx: %d\ny: %d\nz: %d", x, y, z);
}