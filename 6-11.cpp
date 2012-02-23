/*
	演習6-11:5人の学生の3教科(国語・数学・英語)の点数を2次元配列を用いて処理するプログラムを自由に作成せよ。
	例１）：科目別の最高得点を求める。
	例２）：各学生の平均点を求める。
*/

#include <stdio.h>
#define	STUDENT     5
#define	SUBJECT     3
#define	JAPANESE    0
#define	MATH        1
#define	ENGLISH     2

/*--- 最高得点を求める ---*/
int high_score(const int score[STUDENT][SUBJECT], int subject){
	int i, max;
	max = score[0][subject];

	for(i = 1; i < STUDENT; i++){
		max = (max > score[i][subject]) ? max : score[i][subject];
	}

	return (max);
}
/*--- 各学生の平均点を求める ---*/
int ave_score(const int score[STUDENT][SUBJECT], int student){
	int i,ave,sum = 0;

	for(i = 0; i < SUBJECT; i++){
		sum += score[student][i];
	}
	ave = sum / SUBJECT;

	return (ave);
}

int main(void){
	int score[STUDENT][SUBJECT] = {0};
	int i, j;

	for(i = 0; i < STUDENT; i++){
		printf("%d人目国語：", i+1);
        scanf("%d", &score[i][JAPANESE]);
		printf("%d人目数学：", i+1);
        scanf("%d", &score[i][MATH]);
		printf("%d人目英語：", i+1);
        scanf("%d", &score[i][ENGLISH]);
		putchar('\n');
	}
	
	printf("国語の最高得点は%d点です。\n", high_score(score, JAPANESE));
	printf("数学の最高得点は%d点です。\n", high_score(score, MATH));
	printf("英語の最高得点は%d点です。\n", high_score(score, ENGLISH));
	putchar('\n');

	for(i = 0; i < STUDENT; i++){
		printf("%d人目の平均点：%d点\n", i+1, ave_score(score, i));
	}

	return 0;
}