/*
    演習13-2:キーボードからファイル名を読み込んで、そのファイルが存在すれば『そのファイルは存在します。』と表示し、そうでなければ『そのファイルは存在しません。』と表示するプログラムを作成せよ。
*/
#include <stdio.h>

int main(void){
    FILE *fp;
    char filename[100];
    
    printf("ファイル名を入力してください：");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if(fp == NULL) {
        puts("ファイルは存在しません。");
    }else{
        puts("そのファイルは存在します。");
        
        fclose(fp);
    }
    
    return 0;
}