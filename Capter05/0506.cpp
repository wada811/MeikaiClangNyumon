/*
	���K5-6:�ϐ�a��double�^�ŁA�ϐ�b��int�^�ł���Ƃ���B�ȉ��̑���ɂ���āA���ꂼ��̕ϐ��̒l���ǂ��Ȃ邩��������B
    a = b = 1.5;
*/

#include  <stdio.h>

int main(void){
	double a;
	int	 b;

    a = b = 1.5;
    
    printf("%f\n", a);
    printf("%d\n", b);

	return 0;
	
/*
    a = b = 1.5
    a = (b = 1.5)
	b = 1
    a = b
    a = 1
	���ʁFa��b��1
*/

}