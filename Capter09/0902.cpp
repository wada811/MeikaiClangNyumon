/*
	���K9-2:�ȉ��̂悤�ɏ��������ꂽ������str���󕶎���ɂ���ɂ́A�ǂ̂悤�ȑ�����s���΂悢���������B
	char str[] = "ABC";
*/

#include <stdio.h>

int main(void){
	char str[] = "ABC";

    printf("������str��%s�ł��B\n", str);
	str[0] = '\0';
	printf("������str��%s�ł��B\n", str);
	
    return 0;
}