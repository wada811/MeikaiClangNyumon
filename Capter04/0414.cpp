/*
	���K4-14:�E�Ɏ����悤�ɁA�g���ƕW���̏d�̑Ή��\��\������v���O�������쐬����B
	�Ȃ��A�\������g���͈̔�(�J�n�l�A�I���l�A����)�́A�����l�Ƃ��ēǂݍ��݁A�W���̏d�͏����_�ȉ��Q��������\�����邱�ƁB
*/

#include <stdio.h>

int main(void){
	int tall, end, i;

	printf("��cm����F");
    scanf("%d", &tall);
	printf("��cm�܂ŁF");
    scanf("%d", &end);
	printf("��cm���ƁF");
    scanf("%d", &i);
	for(tall; tall <= end; tall += i){
		printf("%dcm	%.2fkg\n", tall, (double)(tall - 100) * 0.9);		// �g���ƕW���̏d
	}
	
	return 0;
}