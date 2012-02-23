/*
	‰‰K6-9:—v‘f”‚ªno‚Å‚ ‚éintŒ^‚Ì”z—ñv2‚Ì•À‚Ñ‚ğ‹t‡‚É‚µ‚½‚à‚Ì‚ğ”z—ñv1‚ÉŠi”[‚·‚éŠÖ”void intary_rcpy(int v1[], const int v2[], int no)‚ğì¬‚¹‚æB
*/

#include  <stdio.h>
#define	NUMBER 5

/*--- —v‘f”‚ªno‚Å‚ ‚éintŒ^‚Ì”z—ñv2‚Ì•À‚Ñ‚ğ‹t‡‚É‚µ‚½‚à‚Ì‚ğ”z—ñv1‚ÉŠi”[‚·‚é ---*/
void intary_rcpy(int v1[], const int v2[], int no){
	int i,temp;

	for(i = 0; i < no; i++){
		v1[i] = v2[no - 1 - i];
	}
}

int main(void){
	int a[NUMBER] = {0};
	int b[NUMBER] = {0};
	int i;

	printf("%dŒÂ‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("b[%d]:",i);
        scanf("%d", &b[i]);
	}
	puts("‰Šú‰»‚³‚ê‚½”z—ña");
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	puts("”z—ñb‚Ì’†g‚ğ‹t‡‚É”z—ña‚ÉŠi”[‚·‚é‚Æ");
	intary_rcpy(a, b, NUMBER);
	
	for(i = 0; i < NUMBER; i++){
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	return 0;
}