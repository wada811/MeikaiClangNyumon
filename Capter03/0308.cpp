/*
	���K3-8:���K3-5�̃v���O�������Aif���ł͂Ȃ��������Z�q��p���ď���������B
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

	min = (n1 > n2) ? n2 : n1;
	min = (min > n3) ? n3 : min;
	
	printf("�ŏ��l��%d�ł��B\n", min);

	return 0;
}