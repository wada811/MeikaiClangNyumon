/*
	���K4-9:�E�Ɏ����悤�ɁA�ǂݍ��܂ꂽ�����l�ȉ��ł��鐳�̋����������ɕ\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	
    printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 2;
	if(no >= 2){
		while(i <= no){
			printf("%d ", i);
			i += 2;
		}
		putchar('\n');
	}

	return 0;
}