/*
	���K6-1:��̐����̏��������̒l��Ԃ��֐�int minof(int x, int y)���쐬����B
*/

#include  <stdio.h>

/*--- ���������̒l��Ԃ� ---*/
int minof(int x, int y){
	return((x < y) ? x : y);
}

int main(void){
	int  na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d", &na);
	printf("�����Q�F");
    scanf("%d", &nb);

	printf("���������̒l��%d�ł��B\n", minof(na, nb));

	return 0;
}