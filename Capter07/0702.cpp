/*
	演習7-2:符号無し整数xを右にnビットシフトした値を返す関数rrotateと、左にnビットシフトした値を返す関数lrotate
	unsigned rrotate(unsigned x, int n)		unsigned lrotate(unsigned x, int n)を作成せよ。
*/

#include  <stdio.h>

/*--- 整数x中のセットされたビット数を返す ---*/
int count_bits(unsigned x){
	int	 count = 0;
	while (x) {
		if (x & 1U) count++;		// 1U(0000000000000001)との論理積でカウント増やす
		x >>= 1;					// ~0U(1111111111111111)を毎回1ずつビットシフト
	}								// ビットシフトを繰り返して0000000000000000になったらループ終了
	return (count);					// 全部合致するからカウントがビット数になっている
}

/*--- unsigned型のビット数を返す ---*/
int int_bits(void){
	return (count_bits(~0U));	    // 0Uの反転だから1111111111111111となり、count_bitsへ
}

/*--- unsigned型のビット内容を表示 ---*/
void print_bits(unsigned x){
	int	 i;
	for (i = int_bits() - 1; i >= 0; i--){		// (ビット数-1)から0まで(ビット数)回ループ
		putchar(((x >> i) & 1U) ? '1' : '0');	// ビットの左側から1Uと論理積で1か0に
    }
}

/*--- 符号無し整数xを右にnビット回転した値を返す ---*/
unsigned rrotate(unsigned x, int n){
    int i = int_bits();						// ビット数をカウント
    return ((x >> n) | (x << (i - n)));		// 右にnビット動かす(x >> n)と、左に(i -n)ビット動かす(x << (i - n))の論理和
}

/*--- 符号無し整数xを左にnビット回転した値を返す ---*/
unsigned lrotate(unsigned x, int n){
    int i = int_bits();						// ビット数をカウント
	return ((x << n) | (x >> (i - n)));		// 左にnビット動かす(x << n)と、右に(i -n)ビット動かす(x >> (i - n))の論理和
}

int main(void){
	unsigned  nx, no;

	printf("非負の整数を入力してください：");
	scanf("%u", &nx);
	printf("何ビット回転しますか：");
	scanf("%u", &no);

	printf("\n整数　　　　　　 ＝ ");    print_bits(nx);
    printf("\nlrotateによる値  ＝ ");    print_bits(lrotate(nx, no));
    printf("\nrrotateによる値  ＝ ");    print_bits(rrotate(nx, no));

	putchar('\n');

	return 0;
}