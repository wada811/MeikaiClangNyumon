/*
	���K11-5:������str���̂��ׂĂ̐����������폜����֐�void del_digit(char *str)��Y�����Z�q��p�����ɍ쐬����(���Ƃ��΁A"AB1C9"���󂯎������A"ABC"�Ƃ���)�B
*/

#include <stdio.h>

void del_digit(char *str){
	int count = 0;

	do{
		if(*str >= '0' && *str <='9'){
			count++;
		}else if(count > 0){
			*(str - count) = *str;
		}
	}while(*str++);
	
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