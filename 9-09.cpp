/*
	���K9-9:������str���󕶎���ɂ���֐�void null_string(char str[])���쐬����B
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void null_string(char str[]){
	unsigned i = 0;
	int len = str_length(str);

	for(i = 0; i <= len; i++){
	    str[i] = '\0';
	}
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("���������͂��Ă��������F");
    scanf("%s", str);
	null_string(str);
	putchar('\n');

	return 0;
}