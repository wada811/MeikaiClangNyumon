/*
	���K6-12:�ÓI�L���̈���Ԃ��^����ꂽ�z��̑S�v�f��0����������邱�Ƃ��m�F����v���O�������쐬����B
*/

#include <stdio.h>

int fx[5];
static int fsx[5];

int main(void){
    int i;
    int ax[5];
    static int sx[5];
    
    puts("          fx         fsx          ax          sx");
    puts("------------------------------------------------");
    for(i = 0; i < 5; i++) {
        printf("%12d%12d%12d%12d\n", fx[i], fsx[i], ax[i], sx[i]);
    }
    puts("------------------------------------------------");
    
    return 0;
}