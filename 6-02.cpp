/*
	演習6-2:三つのint型整数の最大値を返す関数int min3(int x, int y, int z)を作成せよ。
*/

#include  <stdio.h>

/*--- 三つの整数の最小値を返す ---*/
int min3(int x, int y, int z){
	int  min = x;

	if (y > min) min = y;
	if (z > min) min = z;
	return (min);
}

int main(void){
	int  na, nb, nc;

	puts("三つの整数を入力してください。");
	printf("整数１：");
    scanf("%d", &na);
	printf("整数２：");
    scanf("%d", &nb);
	printf("整数３：");
    scanf("%d", &nc);

	printf("最も小さい値は%dです。\n", min3(na, nb, nc));

	return 0;
}