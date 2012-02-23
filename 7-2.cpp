/*
	���K7-2:������������x���E��n�r�b�g�V�t�g�����l��Ԃ��֐�rrotate�ƁA����n�r�b�g�V�t�g�����l��Ԃ��֐�lrotate
	unsigned rrotate(unsigned x, int n)		unsigned lrotate(unsigned x, int n)���쐬����B
*/

#include  <stdio.h>

/*--- ����x���̃Z�b�g���ꂽ�r�b�g����Ԃ� ---*/
int count_bits(unsigned x){
	int	 count = 0;
	while (x) {
		if (x & 1U) count++;		// 1U(0000000000000001)�Ƃ̘_���ςŃJ�E���g���₷
		x >>= 1;					// ~0U(1111111111111111)�𖈉�1���r�b�g�V�t�g
	}								// �r�b�g�V�t�g���J��Ԃ���0000000000000000�ɂȂ����烋�[�v�I��
	return (count);					// �S�����v���邩��J�E���g���r�b�g���ɂȂ��Ă���
}

/*--- unsigned�^�̃r�b�g����Ԃ� ---*/
int int_bits(void){
	return (count_bits(~0U));	    // 0U�̔��]������1111111111111111�ƂȂ�Acount_bits��
}

/*--- unsigned�^�̃r�b�g���e��\�� ---*/
void print_bits(unsigned x){
	int	 i;
	for (i = int_bits() - 1; i >= 0; i--){		// (�r�b�g��-1)����0�܂�(�r�b�g��)�񃋁[�v
		putchar(((x >> i) & 1U) ? '1' : '0');	// �r�b�g�̍�������1U�Ƙ_���ς�1��0��
    }
}

/*--- ������������x���E��n�r�b�g��]�����l��Ԃ� ---*/
unsigned rrotate(unsigned x, int n){
    int i = int_bits();						// �r�b�g�����J�E���g
    return ((x >> n) | (x << (i - n)));		// �E��n�r�b�g������(x >> n)�ƁA����(i -n)�r�b�g������(x << (i - n))�̘_���a
}

/*--- ������������x������n�r�b�g��]�����l��Ԃ� ---*/
unsigned lrotate(unsigned x, int n){
    int i = int_bits();						// �r�b�g�����J�E���g
	return ((x << n) | (x >> (i - n)));		// ����n�r�b�g������(x << n)�ƁA�E��(i -n)�r�b�g������(x >> (i - n))�̘_���a
}

int main(void){
	unsigned  nx, no;

	printf("�񕉂̐�������͂��Ă��������F");
	scanf("%u", &nx);
	printf("���r�b�g��]���܂����F");
	scanf("%u", &no);

	printf("\n�����@�@�@�@�@�@ �� ");    print_bits(nx);
    printf("\nlrotate�ɂ��l  �� ");    print_bits(lrotate(nx, no));
    printf("\nrrotate�ɂ��l  �� ");    print_bits(rrotate(nx, no));

	putchar('\n');

	return 0;
}