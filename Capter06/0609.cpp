/*
	演習6-9:要素数がnoであるint型の配列v2の並びを逆順にしたものを配列v1に格納する関数void intary_rcpy(int v1[], const int v2[], int no)を作成せよ。
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- 要素数がnoであるint型の配列v2の並びを逆順にしたものを配列v1に格納する ---*/
void intary_rcpy(int v1[], const int v2[], int no){
	int i,temp;

	for(i = 0; i < no; i++){
		v1[i] = v2[no - 1 - i];
	}
}

int main(void){
	int a[NUMBER] = {0};
	int b[NUMBER] = {0};
	int i;

	printf("%d個の整数を入力してください。\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("b[%d]:",i);
        scanf("%d", &b[i]);
	}
	puts("初期化された配列a");
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	puts("配列bの中身を逆順に配列aに格納すると");
	intary_rcpy(a, b, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}