/*
	演習11-2:文字列strの中に、文字cが含まれていれば（複数ある場合は、最も先頭側とする。）、
	その文字へのポインタを返し、含まれていなければNULLを返す関数char *str_char(const char *str, int c)を作成せよ。
*/

#include <stdio.h>

char *str_char(const char *str, int c){
	
	do{
		if(*str == c){
			return((char*)str);
		}
	}while(*str++);

	return NULL;
}
int main(void){
	char str[128];
	char ch;
	char *find;

	printf("文字列：");
	scanf("%s",str);
	printf("文字：");
	scanf(" %c",&ch);


	if((find = str_char(str, ch)) == NULL)
		printf("%cは存在しません。\n", ch);
	else
		printf("%cは\"%p\"に存在します。\n", *find, find);

	return 0;
}