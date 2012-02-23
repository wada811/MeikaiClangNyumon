/*
	演習4-11:右に示すように、読み込んだ整数値の個数だけ*を縦に連続して表示するプログラムを作成せよ。
	なお、0以下の整数が入力された場合は、何も表示しないこと。
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("正の整数を入力してください：");
    scanf("%d", &no);

	if(no > 0){
		while(no-- > 0){
			putchar('*');
			putchar('\n');
		}
	}
	
	return 0;
}