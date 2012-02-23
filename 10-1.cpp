/*
	演習10-1:西暦y年m月d日の《前の日あるいは《次の日》の日付を求めてセットする関数
	void yesterday(int *y, int *m, int *d), void tomorrow(int *y, int *m, int *d)を作成せよ(閏年などもきちんと判別すること)。
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
		puts("年月日を入力してください。");
		printf("年：");
        scanf("%d",&year);
		printf("月：");
        scanf("%d",&month);
		printf("日：");
        scanf("%d",&day);

		if(year<1){
			err++;
			puts("エラー！紀元前には未対応です。");
		}
		if(month>12 || month<1){
			err++;
			puts("エラー！月は1～12月までです。");
		}
		if(day>31 || day<1){
			err++;
			puts("エラー！日は1～31日までです。");
		}
		if((month==4 || month==6 || month==9 || month==11) && day==31){
			err++;
			printf("エラー！%d月は30日までしかありません。\n", month);
		}
		if(month==2){
			if(day==30 || day==31){
				err++;
				puts("エラー！閏年でもありえません。\n");
			}
			if(day==29 && ((year%400!=0 && year%100==0) || year%4!=0)){
				err++;
				printf("エラー！%d年は閏年ではありません。\n",year);
			}
		}
	}while(err);

	yesterday(&year,&month,&day);
	printf("前の日は%d年%d月%d日です。\n",year,month,day);
	tomorrow(&year,&month,&day);
	tomorrow(&year,&month,&day);
	printf("次の日は%d年%d月%d日です。\n",year,month,day);

	return 0;
}