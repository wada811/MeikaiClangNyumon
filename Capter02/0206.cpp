/*
	演習2-6:右に示すように、新調を整数値として読み込んで、標準体重を実数で表示するプログラムを作成せよ。
	標準体重は(身長-100)×0.9によって求め、その小数点以下は、1桁だけ表示すること。
*/

#include <stdio.h>

int main(void){
	int tall;
	
    printf("身長を入力してください：");
    scanf("%d", &tall);
	printf("標準体重は%.1fです。\n", (double)(tall - 100) * 0.9);
	
	return (0);
}