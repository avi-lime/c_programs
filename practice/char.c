/* Program to switch uppercase to lowercase and vice versa*/

#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    printf("%c", isupper(ch)?tolower(ch):toupper(ch));
}