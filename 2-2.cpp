/*
	���K2-2:�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA���̘a�Ɛς�\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int na, nb;

	puts("��̐�������͂����������B");
    printf("����A:");
    scanf("%d", &na);
	printf("����B:");
    scanf("%d", &nb);
	printf("�����̘a��%d�Őς�%d�ł��B\n", na + nb, na * nb);
	
	return (0);
}