#include<stdio.h>

void main()
{
    int b = 15, c = 50, d = 8, e = 8, a ,x = 5, y = -10, z = 4, w = 2;
	a = b > c ? 12 : d > e ? 13 : 14;
    printf("%d\n", a);
	a = !10 > 14 ;
    printf("%d\n", a);
	a =  x++ - -- y * w/z; 
    printf("%d\n", a);
	a = 5+5 == 10 || 4 == 5 ;
    printf("%d\n", a);
	a = ++ d + d++ ;
    printf("%d\n", a);
	a = x ++  +  -- x ;
    printf("%d\n", a);
	a = 5 > 10 || 10 < 20 && 3 < 5 ;
    printf("%d\n", a);
}