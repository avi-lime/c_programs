// #include <stdio.h>

// int main(){
// 	int H, W;
// 	scanf("%d%d", &H, &W);
// 	char map[H][W];
// 	for(int i = 0; i < H; i++)
// 	{
// 		for(int j = 0; j < W; j++)
// 			scanf("%c", &map[i][j]);
// 	}

// 	for(int i = 0; i < H; i++)
// 	{
// 		for(int j = 0; j < W; j++)
// 			printf("%c", map[i][j]);
// 	}

// }
#include <stdio.h>
#include <math.h>
void main()
{
	int n, m, count = 0, i, temp, po = 0;
	int k, e;
	printf("Enter a Starting point: ");
	scanf("%d", &n);
	printf("Enter End point : ");
	scanf("%d", &e);
	for (k = n; k <= e; k++)
	{
		m = k;
		while (m > 0)
		{
			m = m / 10;
			count++;
		}
		m = n;
		for (i = 1; k > 0; i++)
		{
			temp = k % 10;
			po = po + pow(temp, count);
			k = k / 10;
		}
		if (po == m)
		{
			printf("%d", k);
		}
	}
}