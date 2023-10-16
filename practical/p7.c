/*
Program that swaps two variables without using a third variable
By Avinash Singh
Date 13/10/2023
*/

#include<stdio.h>

void main()
{
    int a, b;
    void swapByAddition(int a, int b);
    void swapByXOR(int a, int b);
    printf("Enter the value of A: "); 
    scanf("%d", &a);
    printf("\nEnter the value of B: ");
    scanf("%d",&b);
    printf("\nThe values before swapping are:\nA = %d\nB= %d \n", a , b );
    
    printf("\nUsing Addition method to Swap:");
    swapByAddition(a, b);
    printf("\nUsing XOR method to Swap:");
    swapByXOR(a, b);
}

void swapByAddition(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nA=%d and B=%d ", a, b ) ;
}

void swapByXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nA=%d and B=%d ", a, b ) ;

}
