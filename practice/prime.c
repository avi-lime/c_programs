#include<stdio.h>

void main()
{
    int num, flag = 0;   
    scanf("%d", &num);
    
    for(int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            flag = 1;
            break;
        }
    }
    printf("%s", !flag?num==1?"Special Number":"Prime Number":"Not a Prime Number");
}