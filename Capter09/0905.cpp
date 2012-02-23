/*
	演習9-5:List9-9に示した関数put_stringと同じ動作をする関数を、putchar関数ではなくて、printf関数を用いて作成せよ。
*/

#include  <stdio.h>

void put_string(const char str[]){
	unsigned i = 0;

	while(str[i]){
	    printf("%c", str[i++]);
    }
	
}

int main(void){
	char  str[100];

	printf("文字列を入力してください：");
	scanf("%s", str);

	put_string(str);
	putchar('\n');

	return 0;
}