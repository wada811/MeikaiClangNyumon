/*
    演習12-2:身の回りを見渡して、構造体で表現できるものを見つけて、それをプログラムとして実現せよ。
*/

#include <stdio.h>

typedef struct{
    char name[20];
    int age;
    int birthday;
}info;

int main(void){
    info wada = {"wada", 22, 811};
    
    printf("wadaの個人情報が知りたいな。\n");
    printf("名前は？：%s\n", wada.name);
    printf("年齢は？：%d\n歳", wada.age);
    printf("誕生日は？：%d月%d日\n", wada.birthday/100, wada.birthday%100);
    
    past15years(&wada);
    
    printf("wadaの個人情報が知りたいな。\n");
    printf("名前は？：%s\n", wada.name);
    printf("年齢は？：%d\n歳", wada.age);
    printf("誕生日は？：%d月%d日\n", wada.birthday/100, wada.birthday%100);

    return 0;
}

void past15years(info *wada){
    printf("\nそして15年の月日が過ぎた…。\n\n");
    wada->age = (*wada).age + 15;
}