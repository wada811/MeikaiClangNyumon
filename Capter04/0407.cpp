/*
	演習4-7:List0408のプログラムをもとにして、0ではなく1までカウントダウンするプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while(no > 0){
		printf("%d ", no--);	// noの値を表示した後にデクリメント
    }
	putchar('\n');

	return 0;
}