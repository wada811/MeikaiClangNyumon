/*
	演習4-10:右に示すように、読み込まれた整数値以下である正の2べき乗の数を昇順に表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int i, no;
	
	printf("正の整数を入力してください：");
    scanf("%d", &no);

	i = 2;
	if(no >= 2){
		while(i <= no){
			printf("%d ", i);
			i *= 2;
		}
		putchar('\n');
	}

	return 0;
}