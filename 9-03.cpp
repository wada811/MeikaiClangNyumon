/*
	演習9-3:文字列strの中に、文字cが含まれていれば（複数ある場合は、最も先頭側とする。）、
	その添え字を返し、含まれていなければ-1を返す関数int str_char(const char str[], int c)を作成せよ。
*/

#include <stdio.h>

int str_char(const char str[], int c){
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i] == c){
			return i;
        }
	}
	return -1;
}
int main(void){
	int no;
	char str[128];
	char ch;

	printf("文字列：");
	scanf("%s",str);
	printf("文字：");
	scanf(" %c",&ch);

	no = str_char(str, ch) + 1;

	if(no){
		printf("%cの添え字は%dです。\n", ch, no - 1);
	}else{
		printf("%cは存在しません。\n", ch);
    }

	return 0;
}