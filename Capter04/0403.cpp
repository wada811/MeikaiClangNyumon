/*
	���K4-3:�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA���������̐��ȏ�ő傫�������ȉ��̐��������ׂĉ������l��\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int n1, n2, min, max, sum = 0;
	
	puts("��̐�������͂��Ă��������B");
	printf("����1�F");
    scanf("%d", &n1);
	printf("����2�F");
    scanf("%d", &n2);
	
	min = (n1 < n2) ? n1 : n2;
	max = (n1 > n2) ? n1 : n2;
	printf("%d�ȏ�%d�ȉ��̑S�����̘a��", min, max);
	do{
        sum = sum + min;
        min = min + 1;
	}while(min <= max);
	
	printf("%d�ł��B\n", sum);

	return 0;
}