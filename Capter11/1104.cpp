/*
	演習11-4:List9-13に示した関数str_toupperおよびstr_tolowerと同じ動作をする関数を、添字演算子を使わずに作成せよ。
*/

#include  <ctype.h>
#include  <stdio.h>

/*--- 文字列内の英字を大文字に変換 ---*/
void str_toupper(char *str){
	do{
		*str = toupper(*str);
	}while (*str++);
}

/*--- 文字列内の英字を小文字に変換 ---*/
void str_tolower(char *str){
	do{
		*str = tolower(*str);
	}while (*str++);
}

int main(void)
{
	char  str[100];

	printf("文字列を入力してください：");
	scanf("%s", str);

	str_toupper(str);
	printf("大文字：%s\n", str);

	str_tolower(str);
	printf("小文字：%s\n", str);

	return 0;
}