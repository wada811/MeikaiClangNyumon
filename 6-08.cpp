/*
	‰‰K6-8:—v‘f”‚ªno‚Å‚ ‚éintŒ^‚Ì”z—ñvc‚Ì•À‚Ñ‚ğ‹t‡‚É‚·‚éŠÖ”void rev_intary(int vc[], int no)‚ğì¬‚¹‚æB
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- —v‘f”‚ªno‚Å‚ ‚éintŒ^‚Ì”z—ñvc‚Ì•À‚Ñ‚ğ‹t‡‚É‚·‚é ---*/
void rev_intary(int vc[], int no){
	int i,temp;

	for(i = 0; i < no / 2; i++){
		temp = vc[i];
		vc[i] = vc[NUMBER - i - 1];
		vc[NUMBER - i- 1 ] = temp;
	}
}

int main(void){
	int a[NUMBER] = {0};
	int i;

	printf("%dŒÂ‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]F",i);
        scanf("%d", &a[i]);
	}
	puts("‹t‡‚É•\¦‚·‚é‚Æ");
	rev_intary(a, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}