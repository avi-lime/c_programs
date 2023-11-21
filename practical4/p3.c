// factorial

#include<stdio.h>

void main() 
{
    int n, ans = 1;
    scanf("%d", &n);
    for(;n>=1;ans*=n,n--);
    printf("%d", ans);
}