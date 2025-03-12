#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 1

//数据类型

//Bool类型
//需要使用 stdbool.h
//#include <stdbool.h>
//int main() {
//    _Bool flag = false;
//    if (flag) { //如果flag为真，则打印
//        printf("I like C\n");
//        printf("数值为: %d (True)\n", flag);
//    }
//    else {//如果flag为假，则打印
//        printf("I don't like C\n");
//        printf("数值为: %d (False)\n", flag);
//    }
//    return 0;
//}

//sizeof 运算符

//int main() {
//    int a = 10;
//    short s = 2;
//    int b = 10;
//    // sizeof (类型)
//    printf("int 的大小为: %zd\n", sizeof(int)); //打印 类型的大小
//    // sizeof 变量/表达式
//    printf("a 的大小为: %zd\n", sizeof a); //打印变量 a 的大小
//    printf("s 的大小为: %zd\n", sizeof s); //打印变量 s 的大小
//
//    printf("s = b + 1 的大小为%zd\n", sizeof( s = b + 1)); //打印表达式 s = b + 1 的大小, 不会对表达式进行求值
//    printf("s = %d\n", s = b + 1); //打印表达式 s = b + 1 的值，会进行求值
//
//    return 0;
//}


//signed/unsigned 类型

//int main() {
//	//signed int : 有符号的int类型
//	//int 等同于 signed int
//	signed int num = 100;
//	num = -100;
//
//	//unsigned int : 无符号的int类型
//    unsigned int num2 = 100;
//	num2 = 200;
//    printf("num = %d\n", num);
//	printf("num2 = %u\n", num2);
//	return 0;
//}


//  运算符
// +, -, *, /, % : 加, 减, 乘, 除, 取余
int main() {
    int a = 20;
    int b = 40;
    float c = 4;
    int d = 10;
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d + %d = %d\n", a, b, b, a * b + b);
    printf("%d / %f = %f\n", d, c, d / c);
	printf("1 + 2 = %d\n", 1 + 2);
    printf("1 - 2 = %d\n", 1 - 2);
    printf("1 * 2 = %d\n", 1 * 2);
    printf("1 / 2 = %d\n", 1 / 2);
    printf("5 %% 2 = %d\n", 5 % 2);
}
