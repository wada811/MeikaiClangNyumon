/*
	���K3-11:List0304�̃v���O�������Aif���ł͂Ȃ�switch����p���ď���������B
*/

#include <stdio.h>

int main(void){
	int	 no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	switch(no % 2){
		case 0 : puts("���̐��͋����ł��B");	break;
		case 1 : puts("���̐��͊�ł��B");	break;
	}
	
	return 0;
}