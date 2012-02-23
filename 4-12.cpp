/*
	演習4-12:list0406に示した１から５までの和を求めるプログラムを、for文を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int	 no;
	int	 sum = 0;

	for(no = 1; no <= 5 ; no++){
		sum += no;
	}

    printf("１から５までを足した値は%dです。\n", sum);

	return 0;
}