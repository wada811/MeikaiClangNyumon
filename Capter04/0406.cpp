/*
	���K4-6:List0407�̃v���O�������A���̐���ǂݍ��񂾂Ƃ��ɉ��s���Ȃ��悤�ɏ���������B
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if(no >= 0){
		while(no >= 0){
			printf("%d ", no--);
		}
		putchar('\n');		/* ���s */
	}

	return 0;
}