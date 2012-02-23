/*
    演習13-8:List13-7のプログラムをもとに、ファイルの内容を画面に表示しながらコピーするプログラムを作成せよ。
*/
#include <stdio.h>

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
                fputc(ch, dfp);
                
                putchar(ch);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    
    return 0;
}