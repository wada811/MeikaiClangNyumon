/*
	���K8-7:List8-9�̃v���O���������ƂɁA���������̏o���񐔂��A*����ׂ��O���t�ŕ\������v���O�������쐬����B
*/

#include <stdio.h>

int main(void){
	int i, j, ch;
	int cnt[10] = {0};		// ���������̏o����

	while (1) {				// �������[�v
		ch = getchar();
		if(ch == EOF) break;

		if(ch >= '0'  &&  ch <= '9'){
			cnt[ch - '0']++;
        }
	}

	puts("���������̏o����");
	for(i = 0; i < 10; i++){
		printf("'%d'�F", i);
		for(j = 0; j < cnt[i]; j++){
				putchar('*');
		}
		putchar('\n');
	}

	return 0;
}