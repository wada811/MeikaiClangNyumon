/*
	���K6-5:�x���no�񂾂�������֐�void alert(int no)���쐬����B
*/

#include  <stdio.h>

/*--- �x���no�񂾂������� ---*/
void alert(int no){
	while(no-- > 0){
		putchar('\a');
	}
}

int main(void){
	int	 no;

	printf("��������͂��Ă��������F");
    scanf("%d", &no);

	alert(no);

	return 0;
}