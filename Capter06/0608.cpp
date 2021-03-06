/*
	演習6-8:要素数がnoであるint型の配列vcの並びを逆順にする関数void rev_intary(int vc[], int no)を作成せよ。
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- 要素数がnoであるint型の配列vcの並びを逆順にする ---*/
void rev_intary(int vc[], int no){
	int i,temp;

	for(i = 0; i < no / 2; i++){
		temp = vc[i];
		vc[i] = vc[NUMBER - i - 1];
		vc[NUMBER - i- 1 ] = temp;
	}
}

int main(void){
	int a[NUMBER] = {0};
	int i;

	printf("%d個の整数を入力してください。\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]：",i);
        scanf("%d", &a[i]);
	}
	puts("逆順に表示すると");
	rev_intary(a, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}