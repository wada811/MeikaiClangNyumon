/*
    ���K13-1:List13-1�̃v���O�����́A�I�[�v������t�@�C����"abc"�Ɍ����Ă���B�L�[�{�[�h����t�@�C������ǂݍ���ŁA���̃t�@�C�����I�[�v������悤�ɕύX����B
*/
#include <stdio.h>

int main(void){
    FILE *fp;
    char filename[100];
    
    printf("�I�[�v������t�@�C������͂��Ă��������F");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if(fp == NULL) {
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        fclose(fp);
    }
    
    return 0;
}