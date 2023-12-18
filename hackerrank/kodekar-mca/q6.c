#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int and = 0, or = 0, xor = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            and = ((i & j) < k && (i & j) > and) ? (i & j) : and;
            or = ((i | j) < k && (i | j) > or) ? (i | j) : or ;
            xor = ((i ^ j) < k && (i ^ j) > xor) ? (i ^ j) : xor;
            //  printf("%d %d %d %d %d\n", i, j, and, or, xor);
        }
    }
    printf("%d\n%d\n%d", and, or, xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
