/*
	演習7-1:符号無し整数を左右にシフトした値が、２のべき乗での乗算や除算と等しくなることを確認するプログラムを作成せよ。
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

int main(void){
	unsigned  nx, no, i;

	printf("非負の整数を入力してください：");
	scanf("%u", &nx);
	printf("何ビットシフトしますか：");
	scanf("%u", &no);

	printf("\n整数　　　　　　 ＝ ");
    print_bits(nx);
	printf("\n左にシフトした値 ＝ ");
    print_bits(nx << no);
	
    for(i = 0; i < no; i++){
		nx *= 2;
	}
	printf("\n2を%3d回掛けた値 ＝ ", no);
    print_bits(nx);
	
    for(i = 0; i < no; i++){
		nx /= 2;
	}
	printf("\n右にシフトした値 ＝ ");
    print_bits(nx >> no);
	
    for(i = 0; i < no; i++){
		nx /= 2;
	}
	printf("\n2で%3d回割った値 ＝ ", no);
    print_bits(nx);
	
    putchar('\n');

	return 0;
}