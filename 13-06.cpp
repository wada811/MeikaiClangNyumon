/*
    ���K13-6:�L�[�{�[�h����t�@�C������ǂݍ��݁A���̃t�@�C�����̍s��(���s�����̌�)���J�E���g���ĉ�ʂɕ\������v���O�������쐬����B
*/
#include <stdio.h>

int main(void){
    int ch;
    FILE *fp;
    char fname[128];
    int count = 1;
    
    printf("�t�@�C�����F");
    scanf("%s", fname);
    
    if((fp = fopen(fname, "r")) == NULL){
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }else{
        while((ch = getc(fp)) != EOF){
            if(ch == '\n') count++;
        }
        fclose(fp);
        
        printf("���̃t�@�C���̍s����%d�ł��B\n", count);
    }
    
    return 0;
}