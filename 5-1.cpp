/*
	演習5-1:List0503を書きかえて、先頭から順に0,1,2,3,4を代入せよ。
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5];		// 要素数が５の配列

	for(i = 0; i < 5; i++)
		vc[i] = i;

	for(i = 0; i < 5; i++){
		printf("vc[%d] = %d\n", i, vc[i]);
    }

	return 0;
}