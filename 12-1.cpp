/*
	���K12-1:���݂̎�����\������֐�void put_time(void)���쐬����B
*/

#include  <stdio.h>
#include  <time.h>

void put_time(void){
	time_t current;
	struct tm  *local;

	time(&current);					    /* ���݂̎������擾 */
	local = localtime(&current);		/* �n�����̍\���̂ɕϊ� */
	printf("%02d��%02d��%02d�b", local->tm_hour, local->tm_min, local->tm_sec);
}

int main(void){
	printf("���ݎ�����");
	put_time();
	printf("�ł��B\n");

	return 0;
}