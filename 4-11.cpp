/*
	���K4-11:�E�Ɏ����悤�ɁA�ǂݍ��񂾐����l�̌�����*���c�ɘA�����ĕ\������v���O�������쐬����B
	�Ȃ��A0�ȉ��̐��������͂��ꂽ�ꍇ�́A�����\�����Ȃ����ƁB
*/

#include <stdio.h>

int main(void){
	int no;
	
	printf("���̐�������͂��Ă��������F");
    scanf("%d", &no);

	if(no > 0){
		while(no-- > 0){
			putchar('*');
			putchar('\n');
		}
	}
	
	return 0;
}