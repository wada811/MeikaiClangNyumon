/*
    演習13-10:List13-7のプログラムをもとに、すべての英大文字を英小文字に変換しながらコピーするプログラムを作成せよ。
*/
#include <stdio.h>
#include <ctype.h>

int main(void){
    int ch;
    FILE *sfp, *dfp;
    char sname[64], dname[64];
    
    printf("コピー元ファイル名：");
    scanf("%s", sname);
    printf("コピー先ファイル名：");
    scanf("%s", dname);
    
    if((sfp = fopen(sname, "r")) == NULL ){
        printf("\aコピー元ファイルをオープンできません。\n");
    }else{
        if((dfp = fopen(dname, "w")) == NULL){
            printf("\aコピー先ファイルをオープンできません。\n");
        }else{
            while((ch = fgetc(sfp)) != EOF){
                ch = tolower(ch);
                fputc(ch, dfp);
                
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    
    return 0;
}