/*
    整数定数、浮動小数点定数、int型の変数、double型の変数を、掛けたり割ったりして、いろいろな演算を行うプログラムを作成し、本文に示した規則を確認せよ。
*/

#include <stdio.h>

int main(void){
    int a = 2;
    double x = 2.5;
                                // 実行結果
    printf("%d\n", 1 * 1.5);    // 0
    printf("%d\n", 1 * a);      // 2
    printf("%d\n", 1 * x);      // 0
    printf("%d\n", 1.5 * a);    // 0
    printf("%d\n", 1.5 * x);    // 0
    printf("%d\n", a * x);      // 0
    
    printf("%d\n", 1 / 1.5);    // 1431655765
    printf("%d\n", 1 / a);      // 0(切り捨て)
    printf("%d\n", 1 / x);      // -1717986918
    printf("%d\n", 1.5 / a);    // 0(切り捨て)
    printf("%d\n", 1.5 / x);    // 858993459
    printf("%d\n", a / x);      // -1717986918
    
    printf("%f\n", 1 * 1.5);    // 1.500000
    printf("%f\n", 1 * a);      // 0.000000
    printf("%f\n", 1 * x);      // 2.500000
    printf("%f\n", 1.5 * a);    // 3.000000
    printf("%f\n", 1.5 * x);    // 3.750000
    printf("%f\n", a * x);      // 5.000000

    printf("%f\n", 1 / 1.5);    // 0.666667
    printf("%f\n", 1 / a);      // 0.000000
    printf("%f\n", 1 / x);      // 0.400000
    printf("%f\n", 1.5 / a);    // 0.750000
    printf("%f\n", 1.5 / x);    // 0.600000
    printf("%f\n", a / x);      // 0.800000

	return 0;
}