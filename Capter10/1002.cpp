/*
	演習10-2:三つのint型整数を昇順に並べかえる関数void sort3(int *n1, int *n2, int *n3)を作成せよ。
*/

#include <stdio.h>

void sort3(int *n1, int *n2, int *n3){
	int temp;
	if(*n1 > *n2){
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
	if(*n2 > *n3){
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;
	}
	if(*n1 > *n2){
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
}

int main(void){
	int x, y, z;
	
	puts("三つの整数を入力してください。");
	printf("整数x:");
    scanf("%d", &x);
	printf("整数y:");
    scanf("%d", &y);
	printf("整数z:");
    scanf("%d", &z);
	
	sort3(&x, &y, &z);
	
	printf("昇順に並べかえると%d,%d,%d\n", x, y, z);
	
	return 0;
}