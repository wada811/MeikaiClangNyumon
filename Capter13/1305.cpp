/*
    演習13-5:List13-4のプログラムに、現在の”気分”を表す文字列を追加したプログラムを作成せよ。
    すなわち、前回の時刻(と前回の気分)を表示した後に、『現在の気分は：』と入力を促してキーボードから文字列を読み込んで、ファイルに書き込む。
    たとえば、”最高!!”と入力した場合、次回実行した時には、『前回は9999年99月99日99時99分99秒で、機運は最高!!でした。』と表示すること。
*/
#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void){
    FILE *fp;
    
    if((fp = fopen(data_file, "r")) == NULL){
        printf("本プログラムを実行するのは初めてですね。\n");
    }else{
        int year, month, day, h, m, s;
        char feel[100];
        
        fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, feel);
        printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は%sでした。\n", year, month, day, h, m, s, feel);
        fclose(fp);
    }
}

void put_data(void){
    FILE *fp;
    time_t t;
    struct tm *local;
    
    time(&t);
    local = localtime(&t);
    
    if((fp = fopen(data_file, "w")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        char feel[100];
        printf("今の気分は：");
        scanf("%s", feel);
        fprintf(fp, "%d %d %d %d %d %d %s\n",
            local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
            local->tm_hour,        local->tm_min,    local->tm_sec,  feel);
        fclose(fp);
    }
}

int main(void){
    get_data();
    
    put_data();
    
    return 0;
}