/*
	演習8-8:標準入力に現れた行数をカウントするプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int ch, count = 1;

	while((ch = getchar()) != EOF){
		if(ch == '\n'){
			count++;
		}
	}

	printf("%d行です。\n", count);

	return 0;
}