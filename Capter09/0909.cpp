/*
	‰‰K9-9:•¶š—ñstr‚ğ‹ó•¶š—ñ‚É‚·‚éŠÖ”void null_string(char str[])‚ğì¬‚¹‚æB
*/

#include <stdio.h>

unsigned str_length(const char str[]){
	unsigned len = 0;

	while(str[len]){
		len++;
    }
	return len;
}

void null_string(char str[]){
	unsigned i = 0;
	int len = str_length(str);

	for(i = 0; i <= len; i++){
	    str[i] = '\0';
	}
	printf("%s", str);
}

int main(void){
	char str[100];
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%s", str);
	null_string(str);
	putchar('\n');

	return 0;
}