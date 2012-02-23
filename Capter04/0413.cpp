/*
	演習4-13:右に示すように、1234567890を繰り返し表示するプログラムを作成せよ。
	なお、表示する数字は、読み込まれた整数値の個数とする。
*/

#include <stdio.h>

int main(void){
	int i,no;

	printf("整数を入力してください：");
    scanf("%d", &no);
	for(i = 1; i <= no; i++){
		printf("%d",i % 10);
	}
    putchar('\n');
	
	return 0;
}