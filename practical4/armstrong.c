#include<stdio.h>
#include<math.h>

void main()
{
    int r1, r2, temp, sum = 0, count = 0;
    printf("Enter the intervals: ");
    scanf("%d%d", &r1, &r2);
    for(int i = r1; i <= r2; i++)
    {
        temp = i;
        while(temp > 0)
        {
            temp /= 10;
            count++;
        }
        temp = i;
        while (temp > 0)
        {
            sum += pow((temp % 10), count);
            temp /= 10;
        }
        if(i == sum)
            printf("%d ", i);
        count = 0;
        sum = 0;
    }
}