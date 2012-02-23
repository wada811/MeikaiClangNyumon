/*
	演習1-7:右に示すように、読み込んだ二つの整数値の積を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int  n1, n2;
	int  seki;
	
	puts("二つの整数を入力してください。");
	printf("整数１：");
    scanf("%d",&n1);
	printf("整数２：");
    scanf("%d",&n2);

	seki = n1 * n2;								/* n1とn2の積をsekiに代入 */
	
	printf("それらの積は%dです。\n", seki);		/* 積を表示 */
	
	return 0;
}