/*
	���K4-7:List0408�̃v���O���������Ƃɂ��āA0�ł͂Ȃ�1�܂ŃJ�E���g�_�E������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while(no > 0){
		printf("%d ", no--);	// no�̒l��\��������Ƀf�N�������g
    }
	putchar('\n');

	return 0;
}