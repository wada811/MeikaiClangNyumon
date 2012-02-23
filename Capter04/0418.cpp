/*
	演習4-18:右に示すように、読み込んだ整数の段数をもつピラミッドを表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int i,j,ln;

	printf("ピラミッドを作りましょう。\n");
	printf("何段ですか：");
    scanf("%d",&ln);

	for(i=0;i<ln;i++){
		for(j=0;j<ln-i;j++){
			putchar(' ');
		}
		for(j=0;j<i*2+1;j++){
			putchar('*');
		}
		putchar('\n');
	}
	
	return (0);
}