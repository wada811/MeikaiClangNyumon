/*
	演習11-6:ライブラリ関数atoi, atol, atofと同じ動作を行う関数
	int strtoi(const char *nptr), long strtol(const char *nptr), double	strtof(const char *nptr)を作成せよ。
*/

#include <stdio.h>

int strtoi(const char *nptr){
	int i;
	const char *p = nptr;

	if(*nptr == '-'){
		nptr++;
	}
	for(i = 0; *nptr ; *nptr++){
		if(*nptr >= '0' && *nptr <= '9'){
			i *= 10;
			i += *nptr - '0';
		}else{
			break;
		}

	}
	if(*p == '-'){
		i = -i;
	}

	return i;
}

long strtol(const char *nptr){
	int i;
	const char *p = nptr;

	if(*nptr == '-'){
		nptr++;
	}
	for(i = 0; *nptr ; *nptr++){
		if(*nptr >= '0' && *nptr <= '9'){
			i *= 10;
			i += *nptr - '0';
		}else{
			break;
		}

	}
	if(*p == '-'){
		i = -i;
	}
	return i;
}

double strtof(const char *nptr){
	double i, d;
	const char *p	= nptr;
	
	if(*nptr == '-'){
		nptr++;
	}
	for(i = 0; *nptr ; *nptr++){
		if(*nptr >= '0' && *nptr <= '9'){
			i *= 10.0;
			i += *nptr - '0';
		}else{
			break;
		}

	}
	if(*nptr == '.'){
		nptr++;
	}
	for(d = 1.0; *nptr ; *nptr++){
		if(*nptr >= '0' && *nptr <= '9'){
			d /= 10.0;
			i += (*nptr - '0') * d;

		}else{
			break;
		}

	}

	if(*p == '-'){
		i	= -i;
	}
	return i;
}

int main(void){
	char no[32];
	
	printf("整数文字を入力してください:");
	scanf("%s", no);
	printf("入力された数字は%dです。\n", strtoi(no));
	
	printf("整数文字を入力してください:");
	scanf("%s", no);
	printf("入力された数字は%ldです。\n", strtol(no));
	
	printf("実数文字を入力してください:");
	scanf("%s", no);
	printf("入力された数字は%fです。\n", strtof(no));
	
	return 0;
}