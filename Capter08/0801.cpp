/*
	演習8-1:二つの値xとyの差を返す関数形式マクロdiff(x, y)を定義せよ。
*/

#include <stdio.h>

#define diff(x, y)  ((x)  - (y))

int main(void){
	int n1, n2:
	
	puts("二つの整数を入力してください。");
	printf("整数１：");
    scanf("%d", &n1);
	printf("整数２：");
    scanf("%d", &n2);

	if(n1 > n2){
		printf("その差は%dです。\n", diff(n1, n2));
	}else{
		printf("その差は%dです。\n", diff(n1, n2));
	}

	return 0;
}