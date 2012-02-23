/*
	演習11-5:文字列str内のすべての数字文字を削除する関数void del_digit(char *str)を添字演算子を用いずに作成せよ(たとえば、"AB1C9"を受け取ったら、"ABC"とする)。
*/

#include <stdio.h>

void del_digit(char *str){
	int count = 0;

	do{
		if(*str >= '0' && *str <='9'){
			count++;
		}else if(count > 0){
			*(str - count) = *str;
		}
	}while(*str++);
	
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