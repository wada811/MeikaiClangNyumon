/*
	���K4-18:�E�Ɏ����悤�ɁA�ǂݍ��񂾐����̒i�������s���~�b�h��\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int i,j,ln;

	printf("�s���~�b�h�����܂��傤�B\n");
	printf("���i�ł����F");
    scanf("%d",&ln);

	for(i=0;i<ln;i++){
		for(j=0;j<ln-i;j++){
			putchar(' ');
		}
		for(j=0;j<i*2+1;j++){
			putchar('*');
		}
		putchar('\n');
	}
	
	return (0);
}