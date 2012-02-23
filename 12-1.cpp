/*
	演習12-1:現在の時刻を表示する関数void put_time(void)を作成せよ。
*/

#include  <stdio.h>
#include  <time.h>

void put_time(void){
	time_t current;
	struct tm  *local;

	time(&current);					    /* 現在の時刻を取得 */
	local = localtime(&current);		/* 地方時の構造体に変換 */
	printf("%02d時%02d分%02d秒", local->tm_hour, local->tm_min, local->tm_sec);
}

int main(void){
	printf("現在時刻は");
	put_time();
	printf("です。\n");

	return 0;
}