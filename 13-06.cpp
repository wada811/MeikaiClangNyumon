/*
    演習13-6:キーボードからファイル名を読み込み、そのファイル中の行数(改行文字の個数)をカウントして画面に表示するプログラムを作成せよ。
*/
#include <stdio.h>

int main(void){
    int ch;
    FILE *fp;
    char fname[128];
    int count = 1;
    
    printf("ファイル名：");
    scanf("%s", fname);
    
    if((fp = fopen(fname, "r")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        while((ch = getc(fp)) != EOF){
            if(ch == '\n') count++;
        }
        fclose(fp);
        
        printf("このファイルの行数は%dです。\n", count);
    }
    
    return 0;
}