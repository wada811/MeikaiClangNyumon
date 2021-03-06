/*
	演習9-9:文字列strを空文字列にする関数void null_string(char str[])を作成せよ。
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void null_string(char str[]){
	unsigned i = 0;
	int len = str_length(str);

	for(i = 0; i <= len; i++){
	    str[i] = '\0';
	}
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("文字列を入力してください：");
    scanf("%s", str);
	null_string(str);
	putchar('\n');

	return 0;
}