/*
	���K3-3:�E�Ɏ����悤�ɁA�����l��ǂݍ���ŁA���̐�Βl��\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int nx;
	
	printf("��������͂��Ă��������F");
    scanf("%d", &nx);
	
	if(nx < 0){
		nx = -nx;
	}
	printf("��Βl��%d�ł��B", nx);
	
	return 0;
}