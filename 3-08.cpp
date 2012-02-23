/*
	演習3-8:演習3-5のプログラムを、if文ではなく条件演算子を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int	 n1, n2, n3, min;

	puts("三つの整数を入力してください。");
	printf("整数１：");
    scanf("%d", &n1);
	printf("整数２：");
    scanf("%d", &n2);
	printf("整数３：");
    scanf("%d", &n3);

	min = (n1 > n2) ? n2 : n1;
	min = (min > n3) ? n3 : min;
	
	printf("最小値は%dです。\n", min);

	return 0;
}