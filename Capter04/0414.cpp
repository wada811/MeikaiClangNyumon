/*
	演習4-14:右に示すように、身長と標準体重の対応表を表示するプログラムを作成せよ。
	なお、表示する身長の範囲(開始値、終了値、増分)は、整数値として読み込み、標準体重は小数点以下２桁だけを表示すること。
*/

#include <stdio.h>

int main(void){
	int tall, end, i;

	printf("何cmから：");
    scanf("%d", &tall);
	printf("何cmまで：");
    scanf("%d", &end);
	printf("何cmごと：");
    scanf("%d", &i);
	for(tall; tall <= end; tall += i){
		printf("%dcm	%.2fkg\n", tall, (double)(tall - 100) * 0.9);		// 身長と標準体重
	}
	
	return 0;
}