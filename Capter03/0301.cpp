/*
	���K3-1:�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA��҂��O�҂̖񐔂ł���΁uB��A�̖񐔂ł��B�v�ƕ\�����A
	�����łȂ���΁uB��A�̖񐔂ł͂���܂���B�v�ƕ\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int na, nb;
	
	printf("��̐�������͂��Ă��������B\n");
	printf("����A:");
    scanf("%d", &na);
	printf("����B:");
    scanf("%d", &nb);
	
	if(na % nb){
		puts("B��A�̖񐔂ł͂���܂���B");
	}else{
		puts("B��A�̖񐔂ł��B");
	}
	
	return 0;
}