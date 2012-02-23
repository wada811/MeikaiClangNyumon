/*
	演習3-1:右に示すように、二つの整数値を読み込んで、後者が前者の約数であれば「BはAの約数です。」と表示し、
	そうでなければ「BはAの約数ではありません。」と表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int na, nb;
	
	printf("二つの整数を入力してください。\n");
	printf("整数A:");
    scanf("%d", &na);
	printf("整数B:");
    scanf("%d", &nb);
	
	if(na % nb){
		puts("BはAの約数ではありません。");
	}else{
		puts("BはAの約数です。");
	}
	
	return 0;
}