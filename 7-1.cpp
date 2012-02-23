/*
	���K7-1:�����������������E�ɃV�t�g�����l���A�Q�ׂ̂���ł̏�Z�⏜�Z�Ɠ������Ȃ邱�Ƃ��m�F����v���O�������쐬����B
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

int main(void){
	unsigned  nx, no, i;

	printf("�񕉂̐�������͂��Ă��������F");
	scanf("%u", &nx);
	printf("���r�b�g�V�t�g���܂����F");
	scanf("%u", &no);

	printf("\n�����@�@�@�@�@�@ �� ");
    print_bits(nx);
	printf("\n���ɃV�t�g�����l �� ");
    print_bits(nx << no);
	
    for(i = 0; i < no; i++){
		nx *= 2;
	}
	printf("\n2��%3d��|�����l �� ", no);
    print_bits(nx);
	
    for(i = 0; i < no; i++){
		nx /= 2;
	}
	printf("\n�E�ɃV�t�g�����l �� ");
    print_bits(nx >> no);
	
    for(i = 0; i < no; i++){
		nx /= 2;
	}
	printf("\n2��%3d�񊄂����l �� ", no);
    print_bits(nx);
	
    putchar('\n');

	return 0;
}