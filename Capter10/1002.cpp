/*
	���K10-2:�O��int�^�����������ɕ��ׂ�����֐�void sort3(int *n1, int *n2, int *n3)���쐬����B
*/

#include <stdio.h>

void sort3(int *n1, int *n2, int *n3){
	int temp;
	if(*n1 > *n2){
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
	if(*n2 > *n3){
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;
	}
	if(*n1 > *n2){
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
}

int main(void){
	int x, y, z;
	
	puts("�O�̐�������͂��Ă��������B");
	printf("����x:");
    scanf("%d", &x);
	printf("����y:");
    scanf("%d", &y);
	printf("����z:");
    scanf("%d", &z);
	
	sort3(&x, &y, &z);
	
	printf("�����ɕ��ׂ������%d,%d,%d\n", x, y, z);
	
	return 0;
}