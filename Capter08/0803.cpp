/*
	���K8-3:type�^�̂���������֐��`���}�N��swap(type, a, b)���`����B
	���Ƃ���int�^�̕ϐ�x, y�̒l��5��10�ł���Ƃ��Aswap(int, x ,y)���Ăяo������́Ax, y�ɂ�10��5���i�[����Ă��Ȃ���΂Ȃ�Ȃ��B
*/

#include <stdio.h>

#define	swap(type, a, b)	{ type tmp; tmp = a; a = b; b = tmp; }
	
int main(void){
	int m, n;
	double x, y;\
	
	puts("��̐�������͂��Ă��������B");
	printf("����1:");
    scanf("%d", &m);
	printf("����2:");
    scanf("%d", &n);
	
    swap(int, m, n);
	puts("��̐��������������");
	printf("����1�̒l:%d\n", m);
	printf("����2�̒l:%d\n\n", n);
	
	puts("��̎�������͂��Ă��������B");
	printf("����1:");	scanf("%lf", &x);
	printf("����2:");	scanf("%lf", &y);
	
    swap(double, x, y);
	puts("��̎��������������");
	printf("����1�̒l:%f\n", x);
	printf("����2�̒l:%f\n", y);
	
	return 0;
}