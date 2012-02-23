/*
	演習8-6:異なるn個の整数からr個の整数を取り出す組み合わせの数n_C_rを求める関数int combination(int n, int r)を作成せよ。
	なおn_C_rは以下のように定義される。
	n_C_r = n-1_C_r-1 + n-1_C_r (ただし、n_C_0 = n_C_n = 1 , n_C_1 = n)
*/
#include <stdio.h>

int combination(int n, int r){
	if(n==r){
		return(1);
	}else if(r==0){
		return(1);
	}else if(r==1){
		return(n);
	}else{
		return (combination(n-1, r-1) + combination(n-1, r));
	}
}

int main(void){
	int n, r;

	puts("異なるn個の整数からr個の整数を取り出す組み合わせの数n_C_rを求める。");
	printf("整数n：");
    scanf("%d",&n);
	printf("整数r：");
    scanf("%d",&r);

	if(n>=0 && r>=0){
		if(n>=r){
			printf("n_C_rは%dです。",combination(n,r));
		}else{
			printf("n≧r≧0で再入力してください。");
		}
	}else{
		printf("n≧r≧0で再入力してください。");
	}
	
	return 0;
}