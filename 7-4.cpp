/*
	���K7-4:������������x��pos�r�b�g�ڂ���n�̃r�b�g���A1�ɂ����l��Ԃ��֐�set�A0�ɂ����l��Ԃ��֐�reset�A���]�����l��Ԃ��֐�inverse
	unsigned set_n(unsigned x, int pos)		unsigned reset_n(unsigned x, int pos)		unsigned inverse_n(unsigned x, int pos)���쐬����B
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

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g��1�ɂ����l��Ԃ� ---*/
unsigned set_n(unsigned x, int pos, int n){
	int i;
	unsigned px = 1U;					// 1U(0000000000000001)
	unsigned bx = 0U;					// 0U(0000000000000000)
	for(i = 0; i < n; i++){				// pos����pos + n�܂Ń��[�v
		bx |= px << pos + i;			// px��(pos + i)�r�b�g�����r�b�g�V�t�g�������̂�bx�ɘ_���a�ő��
	}
	return(x | bx);						// �_���a��pos�r�b�g�ڂ���n�̃r�b�g��1��
}

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g��0�ɂ����l��Ԃ� ---*/
unsigned reset_n(unsigned x, int pos, int n){
	int i;
	unsigned px = ~1U;					// ~1U(111111111111110)
	unsigned bx = ~0U;					// ~0U(111111111111111)
	for(i = 0; i < n; i++){				// pos����pos + n�܂Ń��[�v
		bx &= lrotate(px, pos + i);		// ����pos�r�b�g��]����(pos + i)�r�b�g�ڂ�0�ɂ������̂�bx�ɘ_���ςő��
	}
	return(x & bx);						// �_���ς�pos�r�b�g�ڂ���n�̃r�b�g��0��
}

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g�𔽓]�����l��Ԃ� ---*/
unsigned inverse_n(unsigned x, int pos, int n){
	int i;
	unsigned px = 1U;					// 1U(0000000000000001)
	unsigned bx = 0U;					// 0U(0000000000000000)
	for(i = 0; i < n; i++){				// pos����pos + n�܂Ń��[�v
		bx |= px << pos + i;			// px��(pos + i)�r�b�g�����r�b�g�V�t�g�������̂�bx�ɘ_���a�ő��
	}
	return((((~x & bx) ^ bx) ^ x) | (~x & bx));

    /*
        �Ⴆ��x���ȉ��̏ꍇ��1�r�b�g�ڂ���6�r�b�g�𔽓]�������ꍇ

        x	1001111011011

        ~x	0110000100100	//�r�b�g���]
        bx	0000000111111
        AND	0000000100100	//(~x & bx)

        AND	0000000100100	//(~x & bx)
        bx	0000000111111
        XOR	0000000011011	//((~x & bx) ^ bx)

        XOR	0000000011011	//((~x & bx) ^ bx)
        x	1001111011011
        XOR	1001111000000	//(((~x & bx) ^ bx) ^ x)

        XOR	1001111000000	//(((~x & bx) ^ bx) ^ x)
        AND	0000000100100	//(~x & bx)
        OR	1001111100100	//(((~x & bx) ^ bx) ^ x) | (~x & bx)
    */
}

int main(void){
	unsigned  nx, no, nn;

	printf("�񕉂̐�������͂��Ă��������F");
	scanf("%u", &nx);
	printf("���r�b�g�ڂ���ł����F");
	scanf("%u", &no);
	printf("���r�b�g�ł����F");
	scanf("%u", &nn);

	printf("\n�����@�@�@�@�@�@   �� ");  print_bits(nx);						// �r�b�g�̍ŉE�[��1�ł��邪no��1��ǂݍ��ނ�
	printf("\nset_n�ɂ��l      �� ");  print_bits(set_n(nx, no-1, nn));		// ����1�r�b�g�V�t�g�����邱�ƂɂȂ�̂�
	printf("\nreset_n�ɂ��l    �� ");  print_bits(reset_n(nx, no-1, nn));		// -1����no��0�ɂ��邱�ƂŃr�b�g�V�t�g��j�~
	printf("\ninverse_n�ɂ��l  �� ");  print_bits(inverse_n(nx, no-1, nn));	// ������1�r�b�g�ڂ��ŉE�[�ɂȂ�(�������l)

	putchar('\n');

	return 0;
}