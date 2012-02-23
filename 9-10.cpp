/*
	演習9-10:文字列str内のすべての数字文字を削除する関数void del_digit(char str[])を作成せよ(たとえば、"AB1C9"を受け取ったら、"ABC"とする)。
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void del_digit(char str[]){
	unsigned i = 0 , count = 0;
	int len = str_length(str);

	for(i = 0; i < len; i++){
		if(str[i] >= '0' && str[i] <='9'){
			count++;
		}else{
			str[i - count] = str[i];
		}
	}
	str[i - count] ='\0';
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("文字列を入力してください：");
    scanf("%s", str);
	del_digit(str);
	putchar('\n');

	return 0;
}