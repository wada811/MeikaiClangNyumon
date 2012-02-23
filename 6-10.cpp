/*
	演習6-10:2行3列の行列maと3行2列の行列mbの積を、2行2列の行列mcに格納する関数void mul(const int ma[2][3], const int mb[3][2], int mc[2][2])を作成せよ。
*/

#include <stdio.h>

/*--- 2行3列の行列maと3行2列の行列mbの積を、2行2列の行列mcに格納する ---*/
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

	puts("配列maの要素を入力してください。");
	for(r=0;r<2;r++){
		for(i=0;i<3;i++){
			printf("ma[%d][%d]:", r, i);
            scanf("%d", &ma[r][i]);
		}
		putchar('\n');
	}
	puts("配列mbの要素を入力してください。");
	for(r=0;r<3;r++){
		for(c=0;c<2;c++){
			printf("mb[%d][%d]:", r, c);
            scanf("%d", &mb[r][c]);
		}
		putchar('\n');
	}
	puts("配列mcの要素を表示");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%3d",mc[r][c]);
		}
		putchar('\n');
	}
	puts("行列maと行列mbの積を行列mcに格納すると");
	mul(ma, mb, mc);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%3d",mc[r][c]);
		}
		putchar('\n');
	}

	return 0;
}