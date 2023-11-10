#include<stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 15)
        printf("You cannot work.");
    else if (age < 20)
        printf("You can work for 3 hours.");
    else if (age < 25)
        printf("You can work for 6 hours.");
    else
        printf("You can work for 8 hours.");
}