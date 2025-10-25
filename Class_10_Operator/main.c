#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//移位操作符
//  左移操作符：<<
//      二进制为向左移动一位
//  移位规则：
//      逻辑左移：右边用0填充，左边丢弃
// int main(void) {
//     int a = -1;
//     int b = a << 1;
//     printf("%d\n", b);
//     return 0;
// }

//  右移操作符：>>
//      二进制位向右移动一位
//  移位规则：
//      逻辑右移：左边用0填充，右边丢弃
//      算术右移：左边用该值的符号位填充，右边丢弃（编译器常用规则）
// int main() {
//     int a = -10;
//     int b = a >> 1;
//     printf("算术右移后，b=%d\n", b);
// }


// //位操作符
// //&：按（二进制）位与
//
// int main() {
//     int a = 6;
//     int b = -7;
//     // & ：按（二进制）位与
//     int c = a & b; //a和b的补码进行运算，同位相同为1,不同则为0
//     printf("c = %d\n", c);
//
//     // | ：按（二进制）位或
//     int d = a | b; //a和b的补码进行运算，同位有1为1,同时为0则为0
//     printf("d = %d\n", d);
//
//     // ^ ：按（二进制）位异或
//     int e = a ^ b; //a和b的补码进行运算，同位相同为0,相异为1
//     printf("e = %d\n", e);
//
//     // ～ ：按（二进制）位取反
//     int f = ~ a;
//     printf("f = %d\n", f);
//     return 0;
// }


// 在不使用临时变量的情况下（第三个变量），交换两个变量的值。
int main  () {
    int a = 3;
    int b = 5;
    printf("原始数据：a = %d, b = %d\n", a , b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("交换数据：a = %d, b = %d\n", a , b);

}