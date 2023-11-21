// print armstrong number between 2 intervals

#include<stdio.h>
#include<math.h>

void main()
{
    int i1, i2, sum=0, count=0, temp;
    printf("Enter the 2 intervals: ");
    scanf("%d%d", &i1, &i2);
    for(int i = i1; i <= i2; i++)
    {
        for(temp = i; temp > 0; temp /= 10, count++); // counting the number of digits
        for(temp = i; temp > 0; sum+= pow((temp % 10), count), temp /= 10); // sum of powers 
        if(i==sum) printf("%d ", i);
        count = 0, sum = 0;
    }
}