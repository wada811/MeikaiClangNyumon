/*
	演習4-16:List0417のプログラムを書きかえて、横長の長方形を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int	 i, j;
	int	 e1, e2;
	int height, width;
	
	puts("長方形を作りましょう。");
	printf("一辺(その１)：");
    scanf("%d", &e1);
	printf("一辺(その２)：");
    scanf("%d", &e2);
	
	width  = (e1 > e2) ? e1 : e2;
	height = (e1 < e2) ? e1 : e2;
	for (i = 1; i <= height; i++) {			// 長方形はheight行
		for (j = 1; j <= width; j++)		// width個の'*'を表示
			putchar('*');
		putchar('\n');						// 改行
	}

	return 0;
}