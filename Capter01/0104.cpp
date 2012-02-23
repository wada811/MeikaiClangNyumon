/*
	演習1-4:右に示すように、読み込んだ整数値に10を加えた値を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int no;

	printf("整数を入力してください：");
	scanf("%d",&no);							/* 整数値を読み込む */
	
	printf("その数に10を加えると%dです。\n", no + 10);

	return 0;
}