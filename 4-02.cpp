/*
	演習4-2:List0403のプログラムを、結果を出力するときに読み込まれた値も表示するように書きかえよ。
*/

#include <stdio.h>

int main(void){
	int num;
	int dig;		/* 桁数 */

	do{
		printf("非負の整数を入力してください：");
		scanf("%d", &num);
		if(num < 0){
			puts("\a負の数を入力しないでください。");
        }
	}while(num < 0);                    // numは0以上となっている
	dig = 0;
	printf("%dは",num);
	do{
		num = num / 10;					// 右に１桁ずらす
		dig = dig + 1;
	}while(num > 0);
	printf("%d桁です。\n", dig);

	return 0;
}