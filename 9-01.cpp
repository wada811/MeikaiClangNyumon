/*
	演習9-1:List9-3の配列strの宣言を char str[] = "ABC\0DEF"; と書き換えてプログラムを実行し、その結果に対する考察を行え。
*/

#include <stdio.h>

int main(void){
	char str[] = "ABC\0DEF";

	printf("文字列strは%sです。\n", str);

	return 0;
}
/* 文字列は、文字の並びとして表現される。その末尾は、最初に出現するナル文字である。 */