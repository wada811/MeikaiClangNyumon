/*
	演習6-4:int型整数の四乗値を返す関数int pow4(int x)を作成せよ。ただし、List6-3に示した関数sqrを利用すること。
*/

#include  <stdio.h>

/*--- 二乗値を返す ---*/
int sqr(int x){
	return (x * x);
}

/*--- 四乗値を返す ---*/
int pow4(int x){
	return (sqr(x) * sqr(x));
}

int main(void){
	int	 x;

	printf("整数を入力してください：");
    scanf("%d", &x);

	printf("%dの四乗値は%dです。\n", x, pow4(x));

	return 0;
}