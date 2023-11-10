#include<stdio.h>

void main()
{
    int n, i, j;
    scanf("%d", &n);
    // for ( i = 1; i <= n; i++)
    // {
    //     for ( j = i; j <= n; j--)
    //     {
    //         if(i < j)
    //             printf("  ");
    //         else
    //             printf("1 ");
    //     }
    //     printf("\n");
    // }
    
    // for( i = 1; i <= n; i++)
    // {
    //     for( j = n; j >= 1; j--)
    //     {
    //         if(j < n)
    //             printf(" ");

    //     }
    // }

    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */
    // for(i = 1; i <= n; i++)
    // {
    //     for(j = n; j >= i; j--)
    //     {
    //         printf("%d ", n - j + 1);
    //     }
    //     printf("\n");
    // }

    /*
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5
    */
    for(i = 1; i <= n; i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}