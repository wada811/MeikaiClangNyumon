/*
	演習2-3:右に示すように、読み込んだ実数値をそのまま表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	double dx;

    printf("実数を入力してください:");
    scanf("%lf", &dx);
	printf("あなたは%fと入力しましたね。\n", dx);
	
	return 0;
}