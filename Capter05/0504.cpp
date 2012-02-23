/*
	演習5-4:List0506を書きかえて、配列vaの要素の並びを逆順にしたものをvbにコピーせよ。
*/

#include  <stdio.h>

int main(void){
	int	 i;
	int	 va[5] = {15, 20, 30};		// {15,20,30,0,0} で初期化
	int	 vb[5];	

	for(i = 0; i < 5; i++){
		vb[i] = va[4-i];
    }

	puts(" va vb");
	puts("-------");
	for(i = 0; i < 5; i++){
		printf("%3d%3d\n", va[i], vb[i]);
    }

	return 0;
}