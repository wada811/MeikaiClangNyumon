/*
	���K3-5:�O�̐����l�ǂݍ���ŁA���̍ŏ��l�����߂ĕ\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int	 n1, n2, n3, min;

	puts("�O�̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d", &n1);
	printf("�����Q�F");
    scanf("%d", &n2);
	printf("�����R�F");
    scanf("%d", &n3);

	min = n1;	
	if(n2 < min){
        min = n2;
    }
	if(n3 < min){
        min = n3;
    }

	printf("�ŏ��l��%d�ł��B\n", min);

	return 0;
}