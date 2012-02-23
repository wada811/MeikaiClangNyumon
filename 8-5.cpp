/*
	演習8-5:整数nの階乗を返す関数int fact(int n)を再起を用いずに定義せよ。
*/

#include  <stdio.h>

/*--- 階乗値を返す ---*/
int factorial(int n){
	int fact = 1;
	do{
		fact *= n;
	}while(--n);
	return(fact);
}

int main(void){
	int	 num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	printf("その数の階乗は%dです。\n", factorial(num));

	return 0;
}