/*
	���K6-11:5�l�̊w����3����(����E���w�E�p��)�̓_����2�����z���p���ď�������v���O���������R�ɍ쐬����B
	��P�j�F�Ȗڕʂ̍ō����_�����߂�B
	��Q�j�F�e�w���̕��ϓ_�����߂�B
*/

#include <stdio.h>
#define	STUDENT     5
#define	SUBJECT     3
#define	JAPANESE    0
#define	MATH        1
#define	ENGLISH     2

/*--- �ō����_�����߂� ---*/
int high_score(const int score[STUDENT][SUBJECT], int subject){
	int i, max;
	max = score[0][subject];

	for(i = 1; i < STUDENT; i++){
		max = (max > score[i][subject]) ? max : score[i][subject];
	}

	return (max);
}
/*--- �e�w���̕��ϓ_�����߂� ---*/
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
		printf("%d�l�ڍ���F", i+1);
        scanf("%d", &score[i][JAPANESE]);
		printf("%d�l�ڐ��w�F", i+1);
        scanf("%d", &score[i][MATH]);
		printf("%d�l�ډp��F", i+1);
        scanf("%d", &score[i][ENGLISH]);
		putchar('\n');
	}
	
	printf("����̍ō����_��%d�_�ł��B\n", high_score(score, JAPANESE));
	printf("���w�̍ō����_��%d�_�ł��B\n", high_score(score, MATH));
	printf("�p��̍ō����_��%d�_�ł��B\n", high_score(score, ENGLISH));
	putchar('\n');

	for(i = 0; i < STUDENT; i++){
		printf("%d�l�ڂ̕��ϓ_�F%d�_\n", i+1, ave_score(score, i));
	}

	return 0;
}