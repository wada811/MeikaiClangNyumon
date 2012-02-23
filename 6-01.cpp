/*
	演習6-1:二つの整数の小さい方の値を返す関数int minof(int x, int y)を作成せよ。
*/

#include  <stdio.h>

/*--- 小さい方の値を返す ---*/
int minof(int x, int y){
	return((x < y) ? x : y);
}

int main(void){
	int  na, nb;

	puts("二つの整数を入力してください。");
	printf("整数１：");
    scanf("%d", &na);
	printf("整数２：");
    scanf("%d", &nb);

	printf("小さい方の値は%dです。\n", minof(na, nb));

	return 0;
}