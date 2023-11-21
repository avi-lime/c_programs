#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// print

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char numbers[][9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  	// Complete the code.
    for(int i = a; i <= b; i++)
    {
        if(i <= 9) printf("%s\n", numbers[i-1]);
        else printf("%s\n", i%2==0?"even":"odd");
    }
    return 0;
}

