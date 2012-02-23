/*
	演習4-6:List0407のプログラムを、負の数を読み込んだときに改行しないように書きかえよ。
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("整数を入力してください：");
	scanf("%d", &no);

	if(no >= 0){
		while(no >= 0){
			printf("%d ", no--);
		}
		putchar('\n');		/* 改行 */
	}

	return 0;
}