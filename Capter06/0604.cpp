/*
	���K6-4:int�^�����̎l��l��Ԃ��֐�int pow4(int x)���쐬����B�������AList6-3�Ɏ������֐�sqr�𗘗p���邱�ƁB
*/

#include  <stdio.h>

/*--- ���l��Ԃ� ---*/
int sqr(int x){
	return (x * x);
}

/*--- �l��l��Ԃ� ---*/
int pow4(int x){
	return (sqr(x) * sqr(x));
}

int main(void){
	int	 x;

	printf("��������͂��Ă��������F");
    scanf("%d", &x);

	printf("%d�̎l��l��%d�ł��B\n", x, pow4(x));

	return 0;
}