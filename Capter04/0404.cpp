/*
	���K4-4:List0402�̃v���O�������A����������Z�q/=��p���ď���������B
*/

#include <stdio.h>

int main(void){
	int num;

	do{
		printf("�񕉂̐�������͂��Ă��������F");
		scanf("%d", &num);
		if (num < 0){
			puts("\a���̐�����͂��Ȃ��ł��������B");
        }
	}while(num < 0);                    // num��0�ȏ�ƂȂ��Ă���

	printf("���̐����t����ǂނ�");
	do{
		printf("%d", num % 10);			// �ŉ��ʂ̌��̒l��\��
		num /= 10;					    // �E�ɂP�����炷
	}while(num > 0);
	puts("�ł��B");

	return 0;
}