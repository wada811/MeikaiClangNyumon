/*
	���K1-7:�E�Ɏ����悤�ɁA�ǂݍ��񂾓�̐����l�̐ς�\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int  n1, n2;
	int  seki;
	
	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d",&n1);
	printf("�����Q�F");
    scanf("%d",&n2);

	seki = n1 * n2;								/* n1��n2�̐ς�seki�ɑ�� */
	
	printf("�����̐ς�%d�ł��B\n", seki);		/* �ς�\�� */
	
	return 0;
}