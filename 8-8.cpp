/*
	���K8-8:�W�����͂Ɍ��ꂽ�s�����J�E���g����v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int ch, count = 1;

	while((ch = getchar()) != EOF){
		if(ch == '\n'){
			count++;
		}
	}

	printf("%d�s�ł��B\n", count);

	return 0;
}