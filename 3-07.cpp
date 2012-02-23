/*
	演習3-7:List3-14のプログラムを、条件演算子ではなくif文を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int	 n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数１：");
    scanf("%d", &n1);
	printf("整数２：");
    scanf("%d", &n2);

	if(n1 > n2){
		printf("それらの差は%dです。\n", n1 - n2);
	}else{
		printf("それらの差は%dです。\n", n2 - n1);
	}
	
	return 0;
}