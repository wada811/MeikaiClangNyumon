/*
	���K8-1:��̒lx��y�̍���Ԃ��֐��`���}�N��diff(x, y)���`����B
*/

#include <stdio.h>

#define diff(x, y)  ((x)  - (y))

int main(void){
	int n1, n2:
	
	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");
    scanf("%d", &n1);
	printf("�����Q�F");
    scanf("%d", &n2);

	if(n1 > n2){
		printf("���̍���%d�ł��B\n", diff(n1, n2));
	}else{
		printf("���̍���%d�ł��B\n", diff(n1, n2));
	}

	return 0;
}