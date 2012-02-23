/*
	���K7-4:������������x��pos�r�b�g�ڂ���n�̃r�b�g���A1�ɂ����l��Ԃ��֐�set_n�A0�ɂ����l��Ԃ��֐�reset_n�A���]�����l��Ԃ��֐�inverse_n
	unsigned set_n(unsigned x, int pos)		unsigned reset_n(unsigned x, int pos)		unsigned inverse_n(unsigned x, int pos)���쐬����B
    (�����ꂼ��̊֐���set, reset, inverse�֐��𗬗p�����o�[�W����)
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

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g��1�ɂ����l��Ԃ� ---*/
unsigned set_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = set(x, pos + i);			    // set�֐���pos��ς���n��J��Ԃ�
	}
	return(x);
}

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g��0�ɂ����l��Ԃ� ---*/
unsigned reset_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = reset(x, pos + i);			    // reset�֐���pos��ς���n��J��Ԃ�
	}
	return(x);
}

/*--- ������������x��pos�r�b�g�ڂ���n�̃r�b�g�𔽓]�����l��Ԃ� ---*/
unsigned inverse_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = inverse(x, pos + i);			// inverse�֐���pos��ς���n��J��Ԃ�
	}
	return(x);
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