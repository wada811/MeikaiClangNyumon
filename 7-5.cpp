/*
	演習7-5:符号無し整数に対する算術演算が、オーバーフローを起こさないことを確認するプログラムを作成せよ。
*/

#include <stdio.h>
#include <limits.h>

int main(void){
	printf("符号付き整数の最高数		= %u\n", INT_MAX);
	printf("符号付き整数の最高数 + 5	= %u\n", INT_MAX + 5);

	printf("符号なし整数の最高数		= %u\n", UINT_MAX);
	printf("符号なし整数の最高数 + 5	= %u\n", UINT_MAX + 5);

    return 0;
}