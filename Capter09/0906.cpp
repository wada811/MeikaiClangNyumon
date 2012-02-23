/*
	演習9-6:文字列strをno回だけ連続して表示する関数void put_stringn(const char str[], int no)を作成せよ。
*/

#include <stdio.h>

void put_stringn(const char str[], int no){
	unsigned i = 0;
	int j;

	for(j = 0; j < no; j++){
		while(str[i]){
			printf("%c ", str[i++]);
		}
		putchar(' ');
		i = 0;
	}
}

int main(void){
	char str[100];
	int n;
	
	printf("文字列を入力してください：");
    scanf("%s", str);
	printf("何回繰り返しますか：");
    scanf("%d", &n);
	put_stringn(str, n);
	putchar('\n');

	return 0;
}