#include <stdio.h>

void write_profile(FILE *fp){
    double height, weight;
    char name[100];
    printf("���O����͂��Ă��������F");
    scanf("%s", name);
    printf("�g������͂��Ă��������F");
    scanf("%lf", &height);
    printf("�̏d����͂��Ă��������F");
    scanf("%lf", &weight);
    
    fprintf(fp, "%-10s %4.1f %4.1f\n", name, height, weight);
    printf("�t�@�C���ɏ������݂܂����B\n");
}


int main(void){
    FILE *fp;
    
    if((fp = fopen("hw.dat", "a")) == NULL) {
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    }
    else {
        int flag = 0;
        while(1) {
            write_profile(fp);
            printf("���͂𑱂��܂����H  Yes...1 / No...0\n");
            scanf("%d", &flag);
            
            if(!flag) break;
        }
        fclose(fp);
    }
    
    return(0);
}