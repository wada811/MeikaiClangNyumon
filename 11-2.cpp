/*
	���K11-2:������str�̒��ɁA����c���܂܂�Ă���΁i��������ꍇ�́A�ł��擪���Ƃ���B�j�A
	���̕����ւ̃|�C���^��Ԃ��A�܂܂�Ă��Ȃ����NULL��Ԃ��֐�char *str_char(const char *str, int c)���쐬����B
*/

#include <stdio.h>

char *str_char(const char *str, int c){
	
	do{
		if(*str == c){
			return((char*)str);
		}
	}while(*str++);

	return NULL;
}
int main(void){
	char str[128];
	char ch;
	char *find;

	printf("������F");
	scanf("%s",str);
	printf("�����F");
	scanf(" %c",&ch);


	if((find = str_char(str, ch)) == NULL)
		printf("%c�͑��݂��܂���B\n", ch);
	else
		printf("%c��\"%p\"�ɑ��݂��܂��B\n", *find, find);

	return 0;
}