/*
	���K9-6:������str��no�񂾂��A�����ĕ\������֐�void put_stringn(const char str[], int no)���쐬����B
*/

#include <stdio.h>

void put_stringn(const char str[], int no){
	unsigned i = 0;
	int j;

	for(j = 0; j < no; j++){
		while(str[i]){
			printf("%c ", str[i++]);
		}
		putchar(' ');
		i = 0;
	}
}

int main(void){
	char str[100];
	int n;
	
	printf("���������͂��Ă��������F");
    scanf("%s", str);
	printf("����J��Ԃ��܂����F");
    scanf("%d", &n);
	put_stringn(str, n);
	putchar('\n');

	return 0;
}