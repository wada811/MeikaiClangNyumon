/*
	演習5-3:List0505を書きかえて、先頭から順に5,4,3,2,1で初期化して表示
*/

#include  <stdio.h>

int main(void){
	int	 i;
	int	 vc[5] = {5, 4, 3, 2, 1};		// 初期化

	for(i = 0; i < 5; i++){
		printf("vc[%d] = %d\n", i, vc[i]);
    }

	return 0;
}