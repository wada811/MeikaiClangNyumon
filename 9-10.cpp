/*
	���K9-10:������str���̂��ׂĂ̐����������폜����֐�void del_digit(char str[])���쐬����(���Ƃ��΁A"AB1C9"���󂯎������A"ABC"�Ƃ���)�B
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void del_digit(char str[]){
	unsigned i = 0 , count = 0;
	int len = str_length(str);

	for(i = 0; i < len; i++){
		if(str[i] >= '0' && str[i] <='9'){
			count++;
		}else{
			str[i - count] = str[i];
		}
	}
	str[i - count] ='\0';
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("���������͂��Ă��������F");
    scanf("%s", str);
	del_digit(str);
	putchar('\n');

	return 0;
}