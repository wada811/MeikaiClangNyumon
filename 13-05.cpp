/*
    ���K13-5:List13-4�̃v���O�����ɁA���݂́h�C���h��\���������ǉ������v���O�������쐬����B
    ���Ȃ킿�A�O��̎���(�ƑO��̋C��)��\��������ɁA�w���݂̋C���́F�x�Ɠ��͂𑣂��ăL�[�{�[�h���當�����ǂݍ���ŁA�t�@�C���ɏ������ށB
    ���Ƃ��΁A�h�ō�!!�h�Ɠ��͂����ꍇ�A������s�������ɂ́A�w�O���9999�N99��99��99��99��99�b�ŁA�@�^�͍ō�!!�ł����B�x�ƕ\�����邱�ƁB
*/
#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void){
    FILE *fp;
    
    if((fp = fopen(data_file, "r")) == NULL){
        printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
    }else{
        int year, month, day, h, m, s;
        char feel[100];
        
        fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, feel);
        printf("�O���%d�N%d��%d��%d��%d��%d�b�ŁA�C����%s�ł����B\n", year, month, day, h, m, s, feel);
        fclose(fp);
    }
}

void put_data(void){
    FILE *fp;
    time_t t;
    struct tm *local;
    
    time(&t);
    local = localtime(&t);
    
    if((fp = fopen(data_file, "w")) == NULL){
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        char feel[100];
        printf("���̋C���́F");
        scanf("%s", feel);
        fprintf(fp, "%d %d %d %d %d %d %s\n",
            local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
            local->tm_hour,        local->tm_min,    local->tm_sec,  feel);
        fclose(fp);
    }
}

int main(void){
    get_data();
    
    put_data();
    
    return 0;
}