/*
	���K2-1:�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�O�҂̒l����҂̉����ł��邩��\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int na, nb;

    puts("��̐�������͂����������B");
	printf("����A:");
    scanf("%d", &na);
	printf("����B:");
    scanf("%d", &nb);
	printf("A�̒l��B��%d%%�ł��B", 100 * na / nb );
	
	return 0;
}