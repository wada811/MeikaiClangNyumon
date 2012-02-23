/*
	演習9-7:List9-9に示した関数をもとにして、文字列を後ろから逆に表示する("SEC"を受け取ったら"CES"と表示する)関数put_rstringを作成せよ。
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void put_rstring(const char str[]){
	unsigned i = 0;
	int len = str_length(str);

	for(i = 1; i <= len; i++){
		printf("%c", str[len - i]);
	}
	
}

int main(void){
	char str[100];
	
	printf("文字列を入力してください：");
    scanf("%s", str);
	put_rstring(str);
	putchar('\n');

	return 0;
}