/*
	���K6-7:�v�f����no�ł���int�^�̔z��vc�̗v�f�̍ŏ��l��Ԃ��֐�int min_of(const int vc[], int no)���쐬����B
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- �v�f����no�ł���int�^�̔z��vc�̗v�f�̍ŏ��l��Ԃ� ---*/
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

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("%d�l�ځF",i+1);
        scanf("%d", &score[i]);
	}
	printf("�Œ�_��%d�_�ł��B\n", min_of(score, NUMBER));

	return 0;
}