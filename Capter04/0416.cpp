/*
	���K4-16:List0417�̃v���O���������������āA�����̒����`��\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int	 i, j;
	int	 e1, e2;
	int height, width;
	
	puts("�����`�����܂��傤�B");
	printf("���(���̂P)�F");
    scanf("%d", &e1);
	printf("���(���̂Q)�F");
    scanf("%d", &e2);
	
	width  = (e1 > e2) ? e1 : e2;
	height = (e1 < e2) ? e1 : e2;
	for (i = 1; i <= height; i++) {			// �����`��height�s
		for (j = 1; j <= width; j++)		// width��'*'��\��
			putchar('*');
		putchar('\n');						// ���s
	}

	return 0;
}