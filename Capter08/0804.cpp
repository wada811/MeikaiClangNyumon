/*
	���K8-4:���ʂ�G�߂Ȃǂ�\���񋓑̂����R�ɒ�`���A�����p�����v���O�������쐬����B
*/

#include <stdio.h>

enum season	{ Spring, Summer, Fall, Winter, Invalid };

int main(void){
	enum season s;
	int m;
	
	do{
		printf("������͂��Ă��������B:");
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
        	puts("�s���Ȍ��ł��B\n");
        }
	}while(s == Invalid);
	
	switch(s){
		case Spring	: puts("�t�ł���[�I");	break;
		case Summer	: puts("�Ăł���[�I");	break;
		case Fall	: puts("�H�ł���[�I");	break;
		case Winter	: puts("�~�ł���[�I"); break;
	}
	
	return 0;
}