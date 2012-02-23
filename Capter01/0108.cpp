/*
	演習1-8:右に示すように、読み込んだ三つの整数値の和を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int  n1, n2, n3;
    	
	puts("三つの整数を入力してください。");
    printf("整数１：");
    scanf("%d",&n1);
	printf("整数２：");
    scanf("%d",&n2);
	printf("整数３：");
    scanf("%d",&n3);
	
	
	printf("それらの積は%dです。\n", n1 + n2 + n3);		/* 和を表示 */
	
	return 0;
}