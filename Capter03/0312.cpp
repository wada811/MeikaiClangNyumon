/*
	���K3-12:List0316�̃v���O�������Aif���ł͂Ȃ�switch����p���ď���������B
*/

#include <stdio.h>

int main(void){
	int	 month;

	printf("�����ł����F");
	scanf("%d", &month);

	switch(month){
		case 3 :
		case 4 :
		case 5 : puts("�t�ł��B");	break;
		case 6 :
		case 7 :
		case 8 : puts("�Ăł��B");	break;
		case 9 :
		case 10 :
		case 11 : puts("�H�ł��B");	break;
		case 12 :
		case 1 :
		case 2 : puts("�~�ł��B");	break;
		default : puts("����Ȍ��͂���܂����!!\a");
	}
	
	return 0;
}