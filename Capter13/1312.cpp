/*
    ���K13-12:List13-4�����Ƃɂ��āA���t�E������struct tm�^�̒l�Ƃ��Ē��ڃo�C�i���t�@�C���ɓǂݏ�������悤�ɕύX�����v���O�������쐬����B
*/
#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.bin";

int main(void){
    FILE *fp;
    time_t t;
    struct tm * local;
    
    time(&t);
    local = localtime(&t);
    
    if((fp = fopen(data_file, "wb")) == NULL){
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        fwrite(local, sizeof(struct tm), 1, fp);
        fclose(fp);
    }
    
    if((fp = fopen(data_file, "rb")) == NULL){
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        fread(local, sizeof(struct tm), 1, fp);
        fclose(fp);
        
        printf("%d %d %d %d %d %d \n", 
            local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
            local->tm_hour,        local->tm_min,     local->tm_sec);
    }
    
    return 0;
}