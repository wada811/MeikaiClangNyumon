/*
	���K6-2:�O��int�^�����̍ő�l��Ԃ��֐�int min3(int x, int y, int z)���쐬����B
*/

#include  <stdio.h>

/*--- �O�̐����̍ŏ��l��Ԃ� ---*/
int min3(int x, int y, int z){
	int  min = x;

	if (y > min) min = y;
	if (z > min) min = z;
	return (min);
}

int main(void){
	int  na, nb, nc;

	puts("�O�̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d", &na);
	printf("�����Q�F");
    scanf("%d", &nb);
	printf("�����R�F");
    scanf("%d", &nc);

	printf("�ł��������l��%d�ł��B\n", min3(na, nb, nc));

	return 0;
}