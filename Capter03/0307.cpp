/*
	���K3-7:List3-14�̃v���O�������A�������Z�q�ł͂Ȃ�if����p���ď���������B
*/

#include <stdio.h>

int main(void){
	int	 n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d", &n1);
	printf("�����Q�F");
    scanf("%d", &n2);

	if(n1 > n2){
		printf("�����̍���%d�ł��B\n", n1 - n2);
	}else{
		printf("�����̍���%d�ł��B\n", n2 - n1);
	}
	
	return 0;
}