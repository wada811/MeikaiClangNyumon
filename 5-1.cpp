/*
	���K5-1:List0503�����������āA�擪���珇��0,1,2,3,4��������B
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5];		// �v�f�����T�̔z��

	for(i = 0; i < 5; i++)
		vc[i] = i;

	for(i = 0; i < 5; i++){
		printf("vc[%d] = %d\n", i, vc[i]);
    }

	return 0;
}