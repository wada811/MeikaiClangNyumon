/*
	演習6-3:int型整数の三乗値を返す関数int cube(int x)を作成せよ。
*/

#include  <stdio.h>

/*--- 三乗値を返す ---*/
int cube(int x){
	return (x * x * x);
}

int main(void){
	int	 x;

	printf("整数を入力してください：");
    scanf("%d", &x);

	printf("%dの三乗は%dです。\n", x, cube(x));

	return 0;
}