/*
	演習4-8:List0409のプログラムを以下のように書きかえよ。
	・0からではなく1からカウントアップを行う。
	・入力された値が0以下であるときには、改行を行わない。
*/

#include <stdio.h>

int main(void){
	int i, no;
	
    printf("正の整数を入力してください：");
    scanf("%d", &no);

	i = 1;
	if(no > 0){
		while(i <= no){
			printf("%d ", i++);		/* iの値を表示した後にインクリメント */
		}
		putchar('\n');
	}

	return 0;
}