// sum of even and odds

#include<stdio.h>

void main()
{
    int n, i, sumofodds = 0, sumofevens = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if (i%2==0)
            sumofevens+=i;
        else
            sumofodds+=i;
    }
    printf("Sum of odds: %d\nSum of evens: %d", sumofodds, sumofevens);
}