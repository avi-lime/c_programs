#include <stdio.h>

int main(){
	int H, W;
	scanf("%d%d", &H, &W);
	char map[H][W];
	for(int i = 0; i < H; i++) 
	{
		for(int j = 0; j < W; j++)
			scanf("%c", &map[i][j]);
	}     

	for(int i = 0; i < H; i++) 
	{
		for(int j = 0; j < W; j++)
			printf("%c", map[i][j]);
	}     
	
}
