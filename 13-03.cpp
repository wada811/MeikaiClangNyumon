/*
    演習13-3:List13-2を書き換えて、ファイルから読み込んだ個人データを身長順にソートした上で表示するプログラムを作成せよ。
*/

#include <stdio.h>

#define NUM 6

typedef struct{
    char name[100];
    double height, weight;
} People;

void swap(People *x, People *y){
    People temp = *x;
    *x = *y;
    *y = temp;
}

void sort(People data[], int n){
    int i, j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(data[j-1].height > data[j].height){
                swap(&data[j-1], &data[j]);
            }
        }
    }
}

int main(void){
    FILE *fp;
    People people[NUM];
    int i;
    
    if(( fp = fopen("hw.dat", "r")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    }else{
        for(i=0;i<NUM;i++){
            fscanf(fp, "%s%lf%lf", people[i].name, &people[i].height, &people[i].weight);
        }
        
        sort(people, NUM);
        
        for(i=0;i<NUM;i++){
            printf("%-10s %5.1f %5.1f\n", people[i].name, people[i].height, people[i].weight);
        }
        
        fclose(fp);
    }
    
    return 0;
}