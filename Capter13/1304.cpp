#include <stdio.h>

void write_profile(FILE *fp){
    double height, weight;
    char name[100];
    printf("名前を入力してください：");
    scanf("%s", name);
    printf("身長を入力してください：");
    scanf("%lf", &height);
    printf("体重を入力してください：");
    scanf("%lf", &weight);
    
    fprintf(fp, "%-10s %4.1f %4.1f\n", name, height, weight);
    printf("ファイルに書き込みました。\n");
}


int main(void){
    FILE *fp;
    
    if((fp = fopen("hw.dat", "a")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    }
    else {
        int flag = 0;
        while(1) {
            write_profile(fp);
            printf("入力を続けますか？  Yes...1 / No...0\n");
            scanf("%d", &flag);
            
            if(!flag) break;
        }
        fclose(fp);
    }
    
    return(0);
}