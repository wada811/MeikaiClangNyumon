/*
	���K9-4:������str�̒��ɁA����c���܂܂�Ă����(�܂܂�Ă��Ȃ����0�Ƃ���)��Ԃ��֐�int str_chnum(const char str[], int c)���쐬����B
*/

#include <stdio.h>

int str_chnum(const char str[], int c){
	int i;
	int num=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i] == c){
			num++;
        }
	return num;
}

int main(void){
	int no;
	char str[128];
	char ch;

	printf("������F");
	scanf("%s",str);
	printf("�����F");
	scanf(" %c",&ch);

	no = str_chnum(str, ch);

	if(no){
		printf("%c��%d���݂��܂��B", ch, no);
	}else{
		printf("%c�͑��݂��܂���B", ch);
    }

	return 0;
}