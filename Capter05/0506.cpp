/*
	演習5-6:変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値がどうなるか説明せよ。
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
	結果：aもbも1
*/

}