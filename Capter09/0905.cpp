/*
	���K9-5:List9-9�Ɏ������֐�put_string�Ɠ������������֐����Aputchar�֐��ł͂Ȃ��āAprintf�֐���p���č쐬����B
*/

#include  <stdio.h>

void put_string(const char str[]){
	unsigned i = 0;

	while(str[i]){
	    printf("%c", str[i++]);
    }
	
}

int main(void){
	char  str[100];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	put_string(str);
	putchar('\n');

	return 0;
}