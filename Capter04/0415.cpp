/*
	‰‰K4-15:list0415:‹ã‹ã‚Ì•\‚ğ•\¦
*/

#include <stdio.h>

int main(void){
	int	 i, j;
	
	printf("   |");
	for (i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	printf("\n-------------------------------\n");		// ã‚Ì•”•ª
	
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);				// ¶‚Ì•”•ª
		for (j = 1; j <= 9; j++){
			printf("%3d", i * j);			// ’†g
		}
		putchar('\n');
	}

	return 0;
}