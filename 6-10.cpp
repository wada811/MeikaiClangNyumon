/*
	���K6-10:2�s3��̍s��ma��3�s2��̍s��mb�̐ς��A2�s2��̍s��mc�Ɋi�[����֐�void mul(const int ma[2][3], const int mb[3][2], int mc[2][2])���쐬����B
*/

#include <stdio.h>

/*--- 2�s3��̍s��ma��3�s2��̍s��mb�̐ς��A2�s2��̍s��mc�Ɋi�[���� ---*/
void mul(const int ma[2][3], const int mb[3][2], int mc[2][2]){
	int i,r,c;

	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			for(i=0;i<3;i++){
				mc[r][c]+=ma[r][i]*mb[i][c];
			}
		}
	}
}

int main(void){
	int i,r,c;
	int ma[2][3]={{0},{0}};
	int mb[3][2]={{0},{0},{0}};
	int mc[2][2]={{0},{0}};

	puts("�z��ma�̗v�f����͂��Ă��������B");
	for(r=0;r<2;r++){
		for(i=0;i<3;i++){
			printf("ma[%d][%d]:", r, i);
            scanf("%d", &ma[r][i]);
		}
		putchar('\n');
	}
	puts("�z��mb�̗v�f����͂��Ă��������B");
	for(r=0;r<3;r++){
		for(c=0;c<2;c++){
			printf("mb[%d][%d]:", r, c);
            scanf("%d", &mb[r][c]);
		}
		putchar('\n');
	}
	puts("�z��mc�̗v�f��\��");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%3d",mc[r][c]);
		}
		putchar('\n');
	}
	puts("�s��ma�ƍs��mb�̐ς��s��mc�Ɋi�[�����");
	mul(ma, mb, mc);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%3d",mc[r][c]);
		}
		putchar('\n');
	}

	return 0;
}