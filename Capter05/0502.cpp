/*
	演習5-2:List0503を書きかえて、先頭から順に5,4,3,2,1を代入せよ。
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5];		// 要素数が５の配列

	for(i = 0; i < 5; i++)
		vc[i] = 5 - i;

	for(i = 0; i < 5; i++){
		printf("vc[%d] = %d\n", i, vc[i]);
    }

	return (0);
}