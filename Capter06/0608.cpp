/*
	���K6-8:�v�f����no�ł���int�^�̔z��vc�̕��т��t���ɂ���֐�void rev_intary(int vc[], int no)���쐬����B
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- �v�f����no�ł���int�^�̔z��vc�̕��т��t���ɂ��� ---*/
void rev_intary(int vc[], int no){
	int i,temp;

	for(i = 0; i < no / 2; i++){
		temp = vc[i];
		vc[i] = vc[NUMBER - i - 1];
		vc[NUMBER - i- 1 ] = temp;
	}
}

int main(void){
	int a[NUMBER] = {0};
	int i;

	printf("%d�̐�������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]�F",i);
        scanf("%d", &a[i]);
	}
	puts("�t���ɕ\�������");
	rev_intary(a, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}