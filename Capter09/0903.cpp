/*
	���K9-3:������str�̒��ɁA����c���܂܂�Ă���΁i��������ꍇ�́A�ł��擪���Ƃ���B�j�A
	���̓Y������Ԃ��A�܂܂�Ă��Ȃ����-1��Ԃ��֐�int str_char(const char str[], int c)���쐬����B
*/

#include <stdio.h>

int str_char(const char str[], int c){
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i] == c){
			return i;
        }
	}
	return -1;
}
int main(void){
	int no;
	char str[128];
	char ch;

	printf("������F");
	scanf("%s",str);
	printf("�����F");
	scanf(" %c",&ch);

	no = str_char(str, ch) + 1;

	if(no){
		printf("%c�̓Y������%d�ł��B\n", ch, no - 1);
	}else{
		printf("%c�͑��݂��܂���B\n", ch);
    }

	return 0;
}