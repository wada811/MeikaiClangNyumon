/*
	���K11-4:List9-13�Ɏ������֐�str_toupper�����str_tolower�Ɠ������������֐����A�Y�����Z�q���g�킸�ɍ쐬����B
*/

#include  <ctype.h>
#include  <stdio.h>

/*--- ��������̉p����啶���ɕϊ� ---*/
void str_toupper(char *str){
	do{
		*str = toupper(*str);
	}while (*str++);
}

/*--- ��������̉p�����������ɕϊ� ---*/
void str_tolower(char *str){
	do{
		*str = tolower(*str);
	}while (*str++);
}

int main(void)
{
	char  str[100];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	str_toupper(str);
	printf("�啶���F%s\n", str);

	str_tolower(str);
	printf("�������F%s\n", str);

	return 0;
}