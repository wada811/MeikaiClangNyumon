/*
    演習13-1:List13-1のプログラムは、オープンするファイルが"abc"に限られている。キーボードからファイル名を読み込んで、そのファイルをオープンするように変更せよ。
*/
#include <stdio.h>

int main(void){
    FILE *fp;
    char filename[100];
    
    printf("オープンするファイルを入力してください：");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if(fp == NULL) {
        printf("\aファイルをオープンできません。\n");
    }else{
        fclose(fp);
    }
    
    return 0;
}