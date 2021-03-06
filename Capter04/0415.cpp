/*
	演習4-15:list0415:九九の表を表示
*/

#include <stdio.h>

int main(void){
	int	 i, j;
	
	printf("   |");
	for (i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	printf("\n-------------------------------\n");		// 上の部分
	
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);				// 左の部分
		for (j = 1; j <= 9; j++){
			printf("%3d", i * j);			// 中身
		}
		putchar('\n');
	}

	return 0;
}