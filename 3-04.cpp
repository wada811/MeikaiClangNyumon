/*
	���K3-4:�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�����̒l����������΁A�uA��B�͓������ł��B�v�ƁA
	A�̕����傫����΁uA��B���傫���ł��B�v�ƁAB�̕����傫����΁uA��B��菬�����ł��B�v�ƕ\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int na, nb;
	
	puts("��̐�������͂��Ă��������B");
	printf("����A�F");
    scanf("%d", &na);
	printf("����B�F");
    scanf("%d", &nb);	
	
	if(na == nb){
		puts("A��B�͓������ł��B");
	}else if(na > nb){
		puts("A��B���傫���ł��B");
	}else{
		puts("A��B��菬�����ł��B");
	}
	
	return (0);
}