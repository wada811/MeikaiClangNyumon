/*
	���K9-1:List9-3�̔z��str�̐錾�� char str[] = "ABC\0DEF"; �Ə��������ăv���O���������s���A���̌��ʂɑ΂���l�@���s���B
*/

#include <stdio.h>

int main(void){
	char str[] = "ABC\0DEF";

	printf("������str��%s�ł��B\n", str);

	return 0;
}
/* ������́A�����̕��тƂ��ĕ\�������B���̖����́A�ŏ��ɏo������i�������ł���B */