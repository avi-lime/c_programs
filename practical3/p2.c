/*
Program to display the color name according to the code entered.
*/

#include<stdio.h>
int main() 
{
    int colorcode;
    printf("Enter a color code: ");
    scanf("%d", &colorcode);
    switch(colorcode) 
    {
        case 1:
            printf("RED");
            break;
            
        case 2:
            printf("GREEN");
            break;
        case 3:
            printf("WHITE");
            break;
        case 4:
            printf("YELLOW");
            break;
        case 5:
            printf("ORANGE");
            break;
        default:
            printf("Wrong color code");
    }
    

}