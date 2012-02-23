/*
	演習3-12:List0316のプログラムを、if文ではなくswitch文を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int	 month;

	printf("何月ですか：");
	scanf("%d", &month);

	switch(month){
		case 3 :
		case 4 :
		case 5 : puts("春です。");	break;
		case 6 :
		case 7 :
		case 8 : puts("夏です。");	break;
		case 9 :
		case 10 :
		case 11 : puts("秋です。");	break;
		case 12 :
		case 1 :
		case 2 : puts("冬です。");	break;
		default : puts("そんな月はありませんよ!!\a");
	}
	
	return 0;
}