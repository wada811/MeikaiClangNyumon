/*
	���K9-8:������str���t���Ɋi�[����֐�("SEC"���󂯎������"CES"�Ƃ���)void rev_string(char str[])���쐬����B
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void rev_string(char str[]){
	unsigned i = 0;
	int len = str_length(str);
	char temp;

	for(i = 0; i < len / 2; i++){
	    temp = str[i];
	    str[i] = str[len - i -1];
	    str[len - i -1] = temp;
	}
	str[len] = '\0';
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("���������͂��Ă��������F");
    scanf("%s", str);
	rev_string(str);
	putchar('\n');

	return 0;
}