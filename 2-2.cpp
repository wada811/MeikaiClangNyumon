/*
	演習2-2:右に示すように、二つの整数値を読み込んで、その和と積を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int na, nb;

	puts("二つの整数を入力した下さい。");
    printf("整数A:");
    scanf("%d", &na);
	printf("整数B:");
    scanf("%d", &nb);
	printf("それらの和は%dで積は%dです。\n", na + nb, na * nb);
	
	return (0);
}