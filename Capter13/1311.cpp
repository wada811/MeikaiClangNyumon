/*
    演習13-11:要素型がdouble型で要素数が10である配列の全要素の値を読み書きするプログラムを作成せよ。
*/
#include <stdio.h>

#define DATA_NUMBER 10

int main(void){
    FILE *fp;
    double data[DATA_NUMBER] = {123, 3.14, 0, 9.87, 0.000001, 100000, 55.555, 777, -100, -2.97};
    
    if((fp = fopen("data.dat", "wb")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        fwrite(data, sizeof(double), DATA_NUMBER, fp);
        fclose(fp);
    }
    
    if((fp = fopen("data.dat", "rb")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        int i;
        fread(data, sizeof(double), DATA_NUMBER, fp);
        
        for(i=0;i<DATA_NUMBER;i++){
            printf("%20.10f\n", data[i]);
        }
        fclose(fp);
    }
    
    return 0;
}