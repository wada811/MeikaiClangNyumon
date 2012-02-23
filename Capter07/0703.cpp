/*
	���K7-3:������������x��pos�r�b�g�ڂ��A1�ɂ����l��Ԃ��֐�set�A0�ɂ����l��Ԃ��֐�reset�A���]�����l��Ԃ��֐�inverse
	unsigned set(unsigned x, int pos)		unsigned reset(unsigned x, int pos)		unsigned inverse(unsigned x, int pos)���쐬����B
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

/*--- ������������x������n�r�b�g��]�����l��Ԃ� ---*/
unsigned lrotate(unsigned x, int n){
    int i = int_bits();						// �r�b�g�����J�E���g
	return ((x << n) | (x >> (i - n)));		// ����n�r�b�g������(x << n)�ƁA�E��(i -n)�r�b�g������(x >> (i - n))�̘_���a
}

/*--- ������������x��pos�r�b�g�ڂ�1�ɂ����l��Ԃ� ---*/
unsigned set(unsigned x, int pos){
	unsigned px = 1U;					// 1U(0000000000000001)
	px <<= pos;							// pos�r�b�g�����r�b�g�V�t�g�������̂�px�ɑ��
	return(x | px);						// �_���a��pos�r�b�g�ڂ�1��
}

/*--- ������������x��pos�r�b�g�ڂ�0�ɂ����l��Ԃ� ---*/
unsigned reset(unsigned x, int pos){
	unsigned px = ~1U;					// ~1U(111111111111110)
	px = lrotate(px, pos);				// ����pos�r�b�g��]����pos�r�b�g�ڂ���0�ɂ������̂�px�ɑ��
	return(x & px);						// �_���ς�pos�r�b�g�ڂ�0��
}

/*--- ������������x��pos�r�b�g�ڂ𔽓]�����l��Ԃ� ---*/
unsigned inverse(unsigned x, int pos){
	unsigned px = 1U;					// 1U(0000000000000001)
	if(x & (px <<= pos)){				// pos�r�b�g�ڂ���1��px��x�̘_����
		px = reset(x, pos);				// �ʂ�Ƃ������Ƃ�pos�r�b�g�ڂ�1�Ȃ̂�reset����px�ɑ��
	}else{								// �ʂ�Ȃ������Ƃ������Ƃ�pos�r�b�g�ڂ�0
		px = set(x, pos);				// �Ȃ̂�set����px�ɑ��
	}
	return(px);
}

int main(void){
	unsigned  nx, no;

	printf("�񕉂̐�������͂��Ă��������F");
	scanf("%u", &nx);
	printf("���r�b�g�ڂł����F");
	scanf("%u", &no);

	printf("\n�����@�@�@�@�@�@ �� ");    print_bits(nx);
    printf("\nset�ɂ��l      �� ");    print_bits(set(nx, no));
	printf("\nreset�ɂ��l    �� ");    print_bits(reset(nx, no));
	printf("\ninverse�ɂ��l  �� ");    print_bits(inverse(nx, no));

	putchar('\n');

	return 0;
}