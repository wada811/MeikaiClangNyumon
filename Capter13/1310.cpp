/*
    ���K13-10:List13-7�̃v���O���������ƂɁA���ׂẲp�啶�����p�������ɕϊ����Ȃ���R�s�[����v���O�������쐬����B
*/
#include <stdio.h>
#include <ctype.h>

int main(void){
    int ch;
    FILE *sfp, *dfp;
    char sname[64], dname[64];
    
    printf("�R�s�[���t�@�C�����F");
    scanf("%s", sname);
    printf("�R�s�[��t�@�C�����F");
    scanf("%s", dname);
    
    if((sfp = fopen(sname, "r")) == NULL ){
        printf("\a�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        if((dfp = fopen(dname, "w")) == NULL){
            printf("\a�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
        }else{
            while((ch = fgetc(sfp)) != EOF){
                ch = tolower(ch);
                fputc(ch, dfp);
                
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    
    return 0;
}