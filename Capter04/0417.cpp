/*
	���K4-17:List0418�����List0419�����������āA���㑤����щE�㑤�����p�ƂȂ钼�p�O�p�`��\������v���O�������쐬����B
*/

#include<stdio.h>

int main(void){
	int i,j,ln;

	printf("���i�ł����F");
    scanf("%d",&ln);	

	for(i=0;i<ln;i++){          // ���㑤��������
    	for(j=0;j<ln-i;j++){
			putchar('*');
		}
		putchar('\n');
    }							// ���㑤�����܂�

    for(i=0;i<ln;i++){          // �E�㑤��������
		for(j=0;j<i;j++){
			putchar(' ');
        }
		for(j=0;j<ln-i;j++){
			putchar('*');
		}
		putchar('\n');
    } 							//�E�㑤�����܂�

	return 0;
} 