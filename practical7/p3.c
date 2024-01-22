#include <stdio.h>

int mystrlen(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;
    return len;
}

void mystrcat(char str1[], char str2[])
{
    int len, len2;
    for (len = 0; str1[len] != '\0'; len++)
        ;
    for (len2 = 0; str2[len2] != '\0'; len2++)
    {
        str1[len + len2] = str2[len2];
    }
    str1[len + len2] = '\0';
}

void mystrcpy(char str1[], char str2[])
{
    int len;
    for (len = 0; str2[len] != '\0'; len++)
    {
        str1[len] = str2[len];
    }
    str1[len] = '\0';
}

void main()
{
    char str[20], str2[20];
    gets(str);
    gets(str2);
    printf("%d\n", mystrlen(str));
    mystrcat(str, str2);
    puts(str);
    mystrcpy(str, str2);
    puts(str);
}