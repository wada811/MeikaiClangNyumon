/*
	演習4-5:List0403のプログラムを、複合代入演算子/=および後置増分演算子++を用いて書きかえよ。
*/

#include <stdio.h>

int main(void){
	int num;
	int dig;		/* 桁数 */

	do{
		printf("非負の整数を入力してください：");
		scanf("%d", &num);
		if (num < 0){
			puts("\a負の数を入力しないでください。");
        }
	}while(num < 0);                    // numは0以上となっている

	dig = 0;
	do{
		num / 10;					    // 右に１桁ずらす
		dig++;
	}while(num > 0);
	printf("その数は%d桁です。\n", dig);

	return (0);
}