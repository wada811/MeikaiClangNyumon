/*
	‰‰K6-5:Œx•ñ‚ğno‰ñ‚¾‚¯”­‚·‚éŠÖ”void alert(int no)‚ğì¬‚¹‚æB
*/

#include  <stdio.h>

/*--- Œx•ñ‚ğno‰ñ‚¾‚¯”­‚·‚é ---*/
void alert(int no){
	while(no-- > 0){
		putchar('\a');
	}
}

int main(void){
	int	 no;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d", &no);

	alert(no);

	return 0;
}