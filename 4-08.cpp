/*
	���K4-8:List0409�̃v���O�������ȉ��̂悤�ɏ���������B
	�E0����ł͂Ȃ�1����J�E���g�A�b�v���s���B
	�E���͂��ꂽ�l��0�ȉ��ł���Ƃ��ɂ́A���s���s��Ȃ��B
*/

#include <stdio.h>

int main(void){
	int i, no;
	
    printf("���̐�������͂��Ă��������F");
    scanf("%d", &no);

	i = 1;
	if(no > 0){
		while(i <= no){
			printf("%d ", i++);		/* i�̒l��\��������ɃC���N�������g */
		}
		putchar('\n');
	}

	return 0;
}