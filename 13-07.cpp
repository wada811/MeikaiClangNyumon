/*
    ���K13-7:�L�[�{�[�h����t�@�C������ǂݍ��݁A���̃t�@�C�����̐��������̌����J�E���g���ĉ�ʂɕ\������v���O�������쐬����B
*/
#include <stdio.h>

int main(void){
    int ch;
    FILE *fp;
    char fname[64];
    int count = 0;
    
    printf("�t�@�C�����F");
    scanf("%s", fname);
    
    if((fp = fopen(fname, "r")) == NULL){
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        while((ch = fgetc(fp)) != EOF){
            if(ch <= '9' && ch >= '0') count++;
        }
        
        fclose(fp);
        printf("���̃t�@�C���Ɋ܂܂�鐔���̐���%d�ł��B\n", count);
    }
    
    return 0;
}