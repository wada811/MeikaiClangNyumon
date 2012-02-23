/*
	演習4-3:右に示すように、二つの整数値を読み込んで、小さい方の数以上で大きいかず以下の整数をすべて加えた値を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int n1, n2, min, max, sum = 0;
	
	puts("二つの整数を入力してください。");
	printf("整数1：");
    scanf("%d", &n1);
	printf("整数2：");
    scanf("%d", &n2);
	
	min = (n1 < n2) ? n1 : n2;
	max = (n1 > n2) ? n1 : n2;
	printf("%d以上%d以下の全整数の和は", min, max);
	do{
        sum = sum + min;
        min = min + 1;
	}while(min <= max);
	
	printf("%dです。\n", sum);

	return 0;
}