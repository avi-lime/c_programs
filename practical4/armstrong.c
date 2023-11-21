#include<stdio.h>
#include<math.h>

void main()
{
    int num, temp, sum = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(temp = num; temp > 0; temp /= 10, count++);
    for(temp = num; temp > 0; sum+= pow((temp % 10), count), temp /= 10);
    printf("%s", num==sum?"Armstrong Number":"Not Armstrong Number");
}