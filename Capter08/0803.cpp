/*
	演習8-3:type型のを交換する関数形式マクロswap(type, a, b)を定義せよ。
	たとえばint型の変数x, yの値が5と10であるとき、swap(int, x ,y)を呼び出した後は、x, yには10と5が格納されていなければならない。
*/

#include <stdio.h>

#define	swap(type, a, b)	{ type tmp; tmp = a; a = b; b = tmp; }
	
int main(void){
	int m, n;
	double x, y;\
	
	puts("二つの整数を入力してください。");
	printf("整数1:");
    scanf("%d", &m);
	printf("整数2:");
    scanf("%d", &n);
	
    swap(int, m, n);
	puts("二つの整数を交換すると");
	printf("整数1の値:%d\n", m);
	printf("整数2の値:%d\n\n", n);
	
	puts("二つの実数を入力してください。");
	printf("実数1:");	scanf("%lf", &x);
	printf("実数2:");	scanf("%lf", &y);
	
    swap(double, x, y);
	puts("二つの実数を交換すると");
	printf("実数1の値:%f\n", x);
	printf("実数2の値:%f\n", y);
	
	return 0;
}