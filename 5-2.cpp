/*
	���K5-2:List0503�����������āA�擪���珇��5,4,3,2,1��������B
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5];		// �v�f�����T�̔z��

	for(i = 0; i < 5; i++)
		vc[i] = 5 - i;

	for(i = 0; i < 5; i++){
		printf("vc[%d] = %d\n", i, vc[i]);
    }

	return (0);
}