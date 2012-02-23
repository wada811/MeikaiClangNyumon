/*
	演習9-4:文字列strの中に、文字cが含まれている個数(含まれていなければ0とする)を返す関数int str_chnum(const char str[], int c)を作成せよ。
*/

#include <stdio.h>

int str_chnum(const char str[], int c){
	int i;
	int num=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i] == c){
			num++;
        }
	return num;
}

int main(void){
	int no;
	char str[128];
	char ch;

	printf("文字列：");
	scanf("%s",str);
	printf("文字：");
	scanf(" %c",&ch);

	no = str_chnum(str, ch);

	if(no){
		printf("%cは%d個存在します。", ch, no);
	}else{
		printf("%cは存在しません。", ch);
    }

	return 0;
}