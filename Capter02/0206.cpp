/*
	���K2-6:�E�Ɏ����悤�ɁA�V���𐮐��l�Ƃ��ēǂݍ���ŁA�W���̏d�������ŕ\������v���O�������쐬����B
	�W���̏d��(�g��-100)�~0.9�ɂ���ċ��߁A���̏����_�ȉ��́A1�������\�����邱�ƁB
*/

#include <stdio.h>

int main(void){
	int tall;
	
    printf("�g������͂��Ă��������F");
    scanf("%d", &tall);
	printf("�W���̏d��%.1f�ł��B\n", (double)(tall - 100) * 0.9);
	
	return (0);
}