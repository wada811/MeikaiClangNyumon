/*
	���K6-9:�v�f����no�ł���int�^�̔z��v2�̕��т��t���ɂ������̂�z��v1�Ɋi�[����֐�void intary_rcpy(int v1[], const int v2[], int no)���쐬����B
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- �v�f����no�ł���int�^�̔z��v2�̕��т��t���ɂ������̂�z��v1�Ɋi�[���� ---*/
void intary_rcpy(int v1[], const int v2[], int no){
	int i,temp;

	for(i = 0; i < no; i++){
		v1[i] = v2[no - 1 - i];
	}
}

int main(void){
	int a[NUMBER] = {0};
	int b[NUMBER] = {0};
	int i;

	printf("%d�̐�������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("b[%d]:",i);
        scanf("%d", &b[i]);
	}
	puts("���������ꂽ�z��a");
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	puts("�z��b�̒��g���t���ɔz��a�Ɋi�[�����");
	intary_rcpy(a, b, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}