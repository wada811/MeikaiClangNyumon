/*
	演習5-7:右に示す行列x,yの積を求めるプログラムを作成せよ。
*/

#include <stdio.h>

int main(void){
	int i,r,c;
	int ma[2][3]={{1,2,3},{4,5,6}};
	int mb[3][2]={{1,5},{5,3},{8,1}};
	int mc[2][2]={0};

	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			for(i=0;i<3;i++){
				mc[r][c]+=ma[r][i]*mb[i][c];
			}
		}
	}
	
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%3d",mc[r][c]);
		}
		putchar('\n');
	}

	return 0;

}