/*
	演習6-5:警報をno回だけ発する関数void alert(int no)を作成せよ。
*/

#include  <stdio.h>

/*--- 警報をno回だけ発する ---*/
void alert(int no){
	while(no-- > 0){
		putchar('\a');
	}
}

int main(void){
	int	 no;

	printf("整数を入力してください：");
    scanf("%d", &no);

	alert(no);

	return 0;
}