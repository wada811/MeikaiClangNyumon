/*
	演習6-12:静的記憶領域期間が与えられた配列の全要素が0初期化されることを確認するプログラムを作成せよ。
*/

#include <stdio.h>

int fx[5];
static int fsx[5];

int main(void){
    int i;
    int ax[5];
    static int sx[5];
    
    puts("          fx         fsx          ax          sx");
    puts("------------------------------------------------");
    for(i = 0; i < 5; i++) {
        printf("%12d%12d%12d%12d\n", fx[i], fsx[i], ax[i], sx[i]);
    }
    puts("------------------------------------------------");
    
    return 0;
}