/*
	演習8-7:List8-9のプログラムをもとに、数字文字の出現回数を、*を並べたグラフで表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int i, j, ch;
	int cnt[10] = {0};		// 数字文字の出現回数

	while (1) {				// 無限ループ
		ch = getchar();
		if(ch == EOF) break;

		if(ch >= '0'  &&  ch <= '9'){
			cnt[ch - '0']++;
        }
	}

	puts("数字文字の出現回数");
	for(i = 0; i < 10; i++){
		printf("'%d'：", i);
		for(j = 0; j < cnt[i]; j++){
				putchar('*');
		}
		putchar('\n');
	}

	return 0;
}