/*
	演習3-2:等価演算子や関係演算子が、1あるいは0の値を生成することを確認するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){

    printf("%d\n", 8 == 8);
    printf("%d\n", 8 == 9);
    printf("%d\n", 8 != 8);
    printf("%d\n", 8 != 9);
    printf("%d\n", 8 > 9);
    printf("%d\n", 8 < 9);
    
    return 0;
}