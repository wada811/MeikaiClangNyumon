/*
	���K10-1:����y�Nm��d���́s�O�̓����邢�́s���̓��t�̓��t�����߂ăZ�b�g����֐�
	void yesterday(int *y, int *m, int *d), void tomorrow(int *y, int *m, int *d)���쐬����(�[�N�Ȃǂ�������Ɣ��ʂ��邱��)�B
*/
#include <stdio.h>

void yesterday(int *y, int *m, int *d){
	*d -= 1;
	if(*d == 0){
		switch(*m){
			case 1  : *y -= 1; *m = 13; *d = 31; break;
			case 3  :{
                if(((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)){
                    *d = 29;
                }else{
                    *d = 28;
                }
                break;
            }
			case 5  :
			case 7  :
			case 10 :
			case 12 : *d = 30; break;
			default : *d = 31; break;
		}
		*m -= 1;
	}
}

void tomorrow(int *y, int *m, int *d){
	*d += 1;
	switch(*m){
		case 2  :{
            if(((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)){
                if(*d == 30){
                    *m += 1;
                    *d = 1;
                }
			}else{
                if(*d == 29){
                    *m += 1; *d = 1;
                }
            }
            break;
        }
		case 4  :
		case 6  :
		case 9  :
		case 11 :{
            if(*d == 31){
                *m += 1;
                *d = 1;
            }
            break;
        }
		case 12 :{
            if(*d == 32){
                *y += 1;
            }
        }
		default :{
            if(*d == 32){
                *m += 1;
                *d = 1;
            }
            break;
        }
	}
}

int main(void){
	int year,month,day;
	int err;

	do{
		err=0;
		puts("�N��������͂��Ă��������B");
		printf("�N�F");
        scanf("%d",&year);
		printf("���F");
        scanf("%d",&month);
		printf("���F");
        scanf("%d",&day);

		if(year<1){
			err++;
			puts("�G���[�I�I���O�ɂ͖��Ή��ł��B");
		}
		if(month>12 || month<1){
			err++;
			puts("�G���[�I����1�`12���܂łł��B");
		}
		if(day>31 || day<1){
			err++;
			puts("�G���[�I����1�`31���܂łł��B");
		}
		if((month==4 || month==6 || month==9 || month==11) && day==31){
			err++;
			printf("�G���[�I%d����30���܂ł�������܂���B\n", month);
		}
		if(month==2){
			if(day==30 || day==31){
				err++;
				puts("�G���[�I�[�N�ł����肦�܂���B\n");
			}
			if(day==29 && ((year%400!=0 && year%100==0) || year%4!=0)){
				err++;
				printf("�G���[�I%d�N�͉[�N�ł͂���܂���B\n",year);
			}
		}
	}while(err);

	yesterday(&year,&month,&day);
	printf("�O�̓���%d�N%d��%d���ł��B\n",year,month,day);
	tomorrow(&year,&month,&day);
	tomorrow(&year,&month,&day);
	printf("���̓���%d�N%d��%d���ł��B\n",year,month,day);

	return 0;
}