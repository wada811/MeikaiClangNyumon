/*
	���K11-6:���C�u�����֐�atoi, atol, atof�Ɠ���������s���֐�
	int strtoi(const char *nptr), long strtol(const char *nptr), double	strtof(const char *nptr)���쐬����B
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
	
	printf("������������͂��Ă�������:");
	scanf("%s", no);
	printf("���͂��ꂽ������%d�ł��B\n", strtoi(no));
	
	printf("������������͂��Ă�������:");
	scanf("%s", no);
	printf("���͂��ꂽ������%ld�ł��B\n", strtol(no));
	
	printf("������������͂��Ă�������:");
	scanf("%s", no);
	printf("���͂��ꂽ������%f�ł��B\n", strtof(no));
	
	return 0;
}