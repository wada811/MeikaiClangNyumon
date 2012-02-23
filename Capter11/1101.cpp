/*
	演習11-1:List9-9に示した関数put_stringと同じ動作をする関数を、添字演算子を使わずに作成せよ。
*/

#include <stdio.h>

void put_string(const char *str){
	unsigned  i = 0;

	while (*str){
		putchar(*str++);
    }
}

int main(void){
	char  st[100];

	printf("文字列を入力してください：");
	scanf("%s", st);

	put_string(st);
	putchar('\n');

	return 0;
}