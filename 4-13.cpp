/*
	���K4-13:�E�Ɏ����悤�ɁA1234567890���J��Ԃ��\������v���O�������쐬����B
	�Ȃ��A�\�����鐔���́A�ǂݍ��܂ꂽ�����l�̌��Ƃ���B
*/

#include <stdio.h>

int main(void){
	int i,no;

	printf("��������͂��Ă��������F");
    scanf("%d", &no);
	for(i = 1; i <= no; i++){
		printf("%d",i % 10);
	}
    putchar('\n');
	
	return 0;
}