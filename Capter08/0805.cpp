/*
	���K8-5:����n�̊K���Ԃ��֐�int fact(int n)���ċN��p�����ɒ�`����B
*/

#include  <stdio.h>

/*--- �K��l��Ԃ� ---*/
int factorial(int n){
	int fact = 1;
	do{
		fact *= n;
	}while(--n);
	return(fact);
}

int main(void){
	int	 num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	printf("���̐��̊K���%d�ł��B\n", factorial(num));

	return 0;
}