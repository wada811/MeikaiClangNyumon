/*
	���K11-1:List9-9�Ɏ������֐�put_string�Ɠ������������֐����A�Y�����Z�q���g�킸�ɍ쐬����B
*/

#include <stdio.h>

void put_string(const char *str){
	unsigned  i = 0;

	while (*str){
		putchar(*str++);
    }
}

int main(void){
	char  st[100];

	printf("���������͂��Ă��������F");
	scanf("%s", st);

	put_string(st);
	putchar('\n');

	return 0;
}