// Program to print the letter A

#include<stdio.h>

void main()
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++) {
            if((i>4 && j==3)||(i>4 && j==2) || (i==2 && j==2)|| (i==2 && j==3))
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}