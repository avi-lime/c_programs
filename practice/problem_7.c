#include<stdio.h>

void main() 
{
    int marks[4], sum;
    float per;
    printf("\nEnter marks for 4 subjects: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    per = sum/4;
    if(per < 50) 
        printf("\nAverage: %.2f\nStatus: Failed", per);
    else
        printf("\nAverage: %.2f\nStatus: Passed", per);
}