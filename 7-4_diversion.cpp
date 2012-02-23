/*
	演習7-4:符号無し整数xのposビット目からn個のビットを、1にした値を返す関数set_n、0にした値を返す関数reset_n、反転した値を返す関数inverse_n
	unsigned set_n(unsigned x, int pos)		unsigned reset_n(unsigned x, int pos)		unsigned inverse_n(unsigned x, int pos)を作成せよ。
    (※それぞれの関数をset, reset, inverse関数を流用したバージョン)
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

/*--- 符号無し整数xを左にnビット回転した値を返す ---*/
unsigned lrotate(unsigned x, int n){
    int i = int_bits();						// ビット数をカウント
	return ((x << n) | (x >> (i - n)));		// 左にnビット動かす(x << n)と、右に(i -n)ビット動かす(x >> (i - n))の論理和
}

/*--- 符号無し整数xのposビット目を1にした値を返す ---*/
unsigned set(unsigned x, int pos){
	unsigned px = 1U;					// 1U(0000000000000001)
	px <<= pos;							// posビットだけビットシフトしたものをpxに代入
	return(x | px);						// 論理和でposビット目を1に
}

/*--- 符号無し整数xのposビット目を0にした値を返す ---*/
unsigned reset(unsigned x, int pos){
	unsigned px = ~1U;					// ~1U(111111111111110)
	px = lrotate(px, pos);				// 左にposビット回転してposビット目だけ0にしたものをpxに代入
	return(x & px);						// 論理積でposビット目を0に
}

/*--- 符号無し整数xのposビット目を反転した値を返す ---*/
unsigned inverse(unsigned x, int pos){
	unsigned px = 1U;					// 1U(0000000000000001)
	if(x & (px <<= pos)){				// posビット目だけ1のpxとxの論理積
		px = reset(x, pos);				// 通るということはposビット目は1なのでresetしてpxに代入
	}else{								// 通らなかったということはposビット目は0
		px = set(x, pos);				// なのでsetしてpxに代入
	}
	return(px);
}

/*--- 符号無し整数xのposビット目からn個のビットを1にした値を返す ---*/
unsigned set_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = set(x, pos + i);			    // set関数をposを変えつつn回繰り返す
	}
	return(x);
}

/*--- 符号無し整数xのposビット目からn個のビットを0にした値を返す ---*/
unsigned reset_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = reset(x, pos + i);			    // reset関数をposを変えつつn回繰り返す
	}
	return(x);
}

/*--- 符号無し整数xのposビット目からn個のビットを反転した値を返す ---*/
unsigned inverse_n(unsigned x, int pos, int n){
	int i;
	for(i = 0; i < n; i++){
		x = inverse(x, pos + i);			// inverse関数をposを変えつつn回繰り返す
	}
	return(x);
}

int main(void){
	unsigned  nx, no, nn;

	printf("非負の整数を入力してください：");
	scanf("%u", &nx);
	printf("何ビット目からですか：");
	scanf("%u", &no);
	printf("何ビットですか：");
	scanf("%u", &nn);

	printf("\n整数　　　　　　   ＝ ");  print_bits(nx);						// ビットの最右端が1であるがnoに1を読み込むと
	printf("\nset_nによる値      ＝ ");  print_bits(set_n(nx, no-1, nn));		// 左に1ビットシフトさせることになるので
	printf("\nreset_nによる値    ＝ ");  print_bits(reset_n(nx, no-1, nn));		// -1してnoを0にすることでビットシフトを阻止
	printf("\ninverse_nによる値  ＝ ");  print_bits(inverse_n(nx, no-1, nn));	// 無事に1ビット目が最右端になる(他も同様)

	putchar('\n');

	return 0;
}