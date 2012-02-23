/*
	演習4-17:List0418およびList0419を書きかえて、左上側および右上側が直角となる直角三角形を表示するプログラムを作成せよ。
*/

#include<stdio.h>

int main(void){
	int i,j,ln;

	printf("何段ですか：");
    scanf("%d",&ln);	

	for(i=0;i<ln;i++){          // 左上側ここから
    	for(j=0;j<ln-i;j++){
			putchar('*');
		}
		putchar('\n');
    }							// 左上側ここまで

    for(i=0;i<ln;i++){          // 右上側ここから
		for(j=0;j<i;j++){
			putchar(' ');
        }
		for(j=0;j<ln-i;j++){
			putchar('*');
		}
		putchar('\n');
    } 							//右上側ここまで

	return 0;
} 