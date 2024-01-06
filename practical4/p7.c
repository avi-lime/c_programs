#include <stdio.h>

void main()
{
    int n, sum = 0;
    // printf("How many digits do you want to add? ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
}