/*
	���K9-7:List9-9�Ɏ������֐������Ƃɂ��āA���������납��t�ɕ\������("SEC"���󂯎������"CES"�ƕ\������)�֐�put_rstring���쐬����B
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void put_rstring(const char str[]){
	unsigned i = 0;
	int len = str_length(str);

	for(i = 1; i <= len; i++){
		printf("%c", str[len - i]);
	}
	
}

int main(void){
	char str[100];
	
	printf("���������͂��Ă��������F");
    scanf("%s", str);
	put_rstring(str);
	putchar('\n');

	return 0;
}