/*
	���K4-5:List0403�̃v���O�������A����������Z�q/=����ь�u�������Z�q++��p���ď���������B
*/

#include <stdio.h>

int main(void){
	int num;
	int dig;		/* ���� */

	do{
		printf("�񕉂̐�������͂��Ă��������F");
		scanf("%d", &num);
		if (num < 0){
			puts("\a���̐�����͂��Ȃ��ł��������B");
        }
	}while(num < 0);                    // num��0�ȏ�ƂȂ��Ă���

	dig = 0;
	do{
		num / 10;					    // �E�ɂP�����炷
		dig++;
	}while(num > 0);
	printf("���̐���%d���ł��B\n", dig);

	return (0);
}