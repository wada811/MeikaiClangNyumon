/*
	���K6-3:int�^�����̎O��l��Ԃ��֐�int cube(int x)���쐬����B
*/

#include  <stdio.h>

/*--- �O��l��Ԃ� ---*/
int cube(int x){
	return (x * x * x);
}

int main(void){
	int	 x;

	printf("��������͂��Ă��������F");
    scanf("%d", &x);

	printf("%d�̎O���%d�ł��B\n", x, cube(x));

	return 0;
}