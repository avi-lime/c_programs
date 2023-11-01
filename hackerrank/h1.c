#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, str[10], str2[20];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &ch);
    scanf("%s", str);
    scanf("\n");
    scanf("%[^\n]%*c", str2);
    printf("%c\n%s\n%s", ch, str, str2);
    return 0;
}