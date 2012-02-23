/*
	演習3-3:右に示すように、整数値を読み込んで、その絶対値を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int nx;
	
	printf("整数を入力してください：");
    scanf("%d", &nx);
	
	if(nx < 0){
		nx = -nx;
	}
	printf("絶対値は%dです。", nx);
	
	return 0;
}