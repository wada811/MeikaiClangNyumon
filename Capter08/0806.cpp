/*
	���K8-6:�قȂ�n�̐�������r�̐��������o���g�ݍ��킹�̐�n_C_r�����߂�֐�int combination(int n, int r)���쐬����B
	�Ȃ�n_C_r�͈ȉ��̂悤�ɒ�`�����B
	n_C_r = n-1_C_r-1 + n-1_C_r (�������An_C_0 = n_C_n = 1 , n_C_1 = n)
*/
#include <stdio.h>

int combination(int n, int r){
	if(n==r){
		return(1);
	}else if(r==0){
		return(1);
	}else if(r==1){
		return(n);
	}else{
		return (combination(n-1, r-1) + combination(n-1, r));
	}
}

int main(void){
	int n, r;

	puts("�قȂ�n�̐�������r�̐��������o���g�ݍ��킹�̐�n_C_r�����߂�B");
	printf("����n�F");
    scanf("%d",&n);
	printf("����r�F");
    scanf("%d",&r);

	if(n>=0 && r>=0){
		if(n>=r){
			printf("n_C_r��%d�ł��B",combination(n,r));
		}else{
			printf("n��r��0�ōē��͂��Ă��������B");
		}
	}else{
		printf("n��r��0�ōē��͂��Ă��������B");
	}
	
	return 0;
}