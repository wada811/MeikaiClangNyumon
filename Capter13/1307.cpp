/*
    演習13-7:キーボードからファイル名を読み込み、そのファイル中の数字文字の個数をカウントして画面に表示するプログラムを作成せよ。
*/
#include <stdio.h>

int main(void){
    int ch;
    FILE *fp;
    char fname[64];
    int count = 0;
    
    printf("ファイル名：");
    scanf("%s", fname);
    
    if((fp = fopen(fname, "r")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        while((ch = fgetc(fp)) != EOF){
            if(ch <= '9' && ch >= '0') count++;
        }
        
        fclose(fp);
        printf("このファイルに含まれる数字の数は%d個です。\n", count);
    }
    
    return 0;
}