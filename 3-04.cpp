/*
	演習3-4:右に示すように、二つの整数値を読み込んで、それらの値が等しければ、「AとBは等しいです。」と、
	Aの方が大きければ「AはBより大きいです。」と、Bの方が大きければ「AはBより小さいです。」と表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int na, nb;
	
	puts("二つの整数を入力してください。");
	printf("整数A：");
    scanf("%d", &na);
	printf("整数B：");
    scanf("%d", &nb);	
	
	if(na == nb){
		puts("AとBは等しいです。");
	}else if(na > nb){
		puts("AはBより大きいです。");
	}else{
		puts("AはBより小さいです。");
	}
	
	return (0);
}