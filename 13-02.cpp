/*
    ���K13-2:�L�[�{�[�h����t�@�C������ǂݍ���ŁA���̃t�@�C�������݂���΁w���̃t�@�C���͑��݂��܂��B�x�ƕ\�����A�����łȂ���΁w���̃t�@�C���͑��݂��܂���B�x�ƕ\������v���O�������쐬����B
*/
#include <stdio.h>

int main(void){
    FILE *fp;
    char filename[100];
    
    printf("�t�@�C��������͂��Ă��������F");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if(fp == NULL) {
        puts("�t�@�C���͑��݂��܂���B");
    }else{
        puts("���̃t�@�C���͑��݂��܂��B");
        
        fclose(fp);
    }
    
    return 0;
}