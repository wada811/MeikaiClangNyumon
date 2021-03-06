/*
	演習9-8:文字列strを逆順に格納する関数("SEC"を受け取ったら"CES"とする)void rev_string(char str[])を作成せよ。
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void rev_string(char str[]){
	unsigned i = 0;
	int len = str_length(str);
	char temp;

	for(i = 0; i < len / 2; i++){
	    temp = str[i];
	    str[i] = str[len - i -1];
	    str[len - i -1] = temp;
	}
	str[len] = '\0';
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("文字列を入力してください：");
    scanf("%s", str);
	rev_string(str);
	putchar('\n');

	return 0;
}