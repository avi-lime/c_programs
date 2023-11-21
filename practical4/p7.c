#include<stdio.h>

void main()
{
    int n, sum=0, temp;
    printf("How many digits do you want to add? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum+=temp;
    }
    printf("%d",sum);
}