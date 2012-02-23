/*
	演習3-11:List0304のプログラムを、if文ではなくswitch文を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int	 no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	switch(no % 2){
		case 0 : puts("その数は偶数です。");	break;
		case 1 : puts("その数は奇数です。");	break;
	}
	
	return 0;
}