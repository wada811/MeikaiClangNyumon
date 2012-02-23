/*
	演習6-7:要素数がnoであるint型の配列vcの要素の最小値を返す関数int min_of(const int vc[], int no)を作成せよ。
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- 要素数がnoであるint型の配列vcの要素の最小値を返す ---*/
int min_of(const int vc[], int no){
	int i;
	int	min = vc[0];

	for(i = 1; i < no; i++){
		min = (min < vc[i]) ? min : vc[i];
	}

	return (min);
}

int main(void){
	int score[NUMBER];
	int i;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("%d人目：",i+1);
        scanf("%d", &score[i]);
	}
	printf("最低点は%d点です。\n", min_of(score, NUMBER));

	return 0;
}