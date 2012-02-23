/*
	演習8-4:性別や季節などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。
*/

#include <stdio.h>

enum season	{ Spring, Summer, Fall, Winter, Invalid };

int main(void){
	enum season s;
	int m;
	
	do{
		printf("月を入力してください。:");
        scanf("%d", &m);
		switch(m){
			case 3 :
            case 4 :
            case 5 : s = Spring; break;
			case 6 :
            case 7 :
            case 8 : s = Summer; break;
			case 9 :
            case 10 :
            case 11 : s = Fall; break;
			case 12:
            case 1 :
            case 2 : s = Winter; break;
			default : s = Invalid; break;
		}
		if(s == Invalid){
        	puts("不正な月です。\n");
        }
	}while(s == Invalid);
	
	switch(s){
		case Spring	: puts("春ですよー！");	break;
		case Summer	: puts("夏ですよー！");	break;
		case Fall	: puts("秋ですよー！");	break;
		case Winter	: puts("冬ですよー！"); break;
	}
	
	return 0;
}