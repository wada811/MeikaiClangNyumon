/*
	���K4-12:list0406�Ɏ������P����T�܂ł̘a�����߂�v���O�������Afor����p���ď���������B
*/

#include <stdio.h>

int main(void){
	int	 no;
	int	 sum = 0;

	for(no = 1; no <= 5 ; no++){
		sum += no;
	}

    printf("�P����T�܂ł𑫂����l��%d�ł��B\n", sum);

	return 0;
}