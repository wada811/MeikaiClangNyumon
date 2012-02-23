/*
	演習2-5:右に示すように、二つの整数値を読み込んで、前者の値が後者の何％であるかを実数で表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int na, nb;

	puts("二つの整数を入力した下さい。");
    printf("整数A:");
    scanf("%d", &na);
	printf("整数B:");
    scanf("%d", &nb);
	printf("Aの値はBの%f%%です。", (double)100 * na / nb );
	
	return 0;
}