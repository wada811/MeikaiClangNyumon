/*
	演習9-2:以下のように初期化された文字列strを空文字列にするには、どのような操作を行えばよいかを示せ。
	char str[] = "ABC";
*/

#include <stdio.h>

int main(void){
	char str[] = "ABC";

    printf("文字列strは%sです。\n", str);
	str[0] = '\0';
	printf("文字列strは%sです。\n", str);
	
    return 0;
}