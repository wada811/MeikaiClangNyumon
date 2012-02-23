/*
    演習13-12:List13-4をもとにして、日付・時刻をstruct tm型の値として直接バイナリファイルに読み書きするように変更したプログラムを作成せよ。
*/
#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.bin";

int main(void){
    FILE *fp;
    time_t t;
    struct tm * local;
    
    time(&t);
    local = localtime(&t);
    
    if((fp = fopen(data_file, "wb")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        fwrite(local, sizeof(struct tm), 1, fp);
        fclose(fp);
    }
    
    if((fp = fopen(data_file, "rb")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        fread(local, sizeof(struct tm), 1, fp);
        fclose(fp);
        
        printf("%d %d %d %d %d %d \n", 
            local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
            local->tm_hour,        local->tm_min,     local->tm_sec);
    }
    
    return 0;
}