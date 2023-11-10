#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp, sum = 0, count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n/=10;
        count++;   
    }
    n = temp;
    while(n>0)
    {
        r = n%10;
        sum += pow(r, count);
        n = n/10;
    }
    if(temp==sum)

    {
    printf("\nThe given number is a Armstrong number");
    } 

   else{
    printf("\nThe given number is not an Armstrong number");
    }
    return 0;
}