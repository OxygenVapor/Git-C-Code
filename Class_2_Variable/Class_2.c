#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


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
//int main() {
//    int a = 20;
//    int b = 40;
//    float c = 4;
//    int d = 10;
//    printf("%d - %d = %d\n", a, b, a - b);
//    printf("%d * %d + %d = %d\n", a, b, b, a * b + b);
//    printf("%d / %f = %f\n", d, c, d / c);
//	printf("1 + 2 = %d\n", 1 + 2);
//    printf("1 - 2 = %d\n", 1 - 2);
//    printf("1 * 2 = %d\n", 1 * 2);
//    printf("1 / 2 = %d\n", 1 / 2);
//    printf("5 %% 2 = %d\n", 5 % 2);
//}

// 复合赋值符
//int main() {
//	int a = 10;
//	//a += 5;
//	//a -= 3;
//	//int b = a++; //先赋值给b，再增加a的值
//
//	//int c = ++a; //先增加a的值，再赋值给c
//    //printf("b = %d, \n", b);
//	printf("a = %d", a++);//原理一样，输出10
//
//	return 0;
//}



//printf() 函数
//int main() {
//
//	int a = 10;
//	double b = 3.1415;
//	printf("Hello World\n");
//	// 占位符: 这个位置可以被填充数据，如：%d，%f，%c，%s，%p，%x，%o，%u等
//	// %d : 表示一个整数
//	//%f : 表示一个浮点数      float %f, double %lf
//	//%c : 表示一个字符
//	//%s : 表示一个字符串
//	//%p : 表示一个指针
//	//%x : 表示一个十六进制数
//	//%o : 表示一个八进制数
//	//%u : 表示一个无符号整数
//	//%s : 表示一个字符串
//	printf("%10lf\n%-5dxxxx\n", b, a); //%-5d 表示输出至少5位的整数，不够的在数值后补空格，超过5位的整数则直接输出数值。
//	printf("%+d\n", a); //%+d 表示输出整数时前面加上正负号。
//	printf("%8.4f\n", b); //%8.4f 表示输出一个至少8位的浮点型数只保留小数点后4位，不够的在数值前补空格
//	printf("%.4s\n", "abcdef"); // 与 Line111 同样原理，只打印前四位字符
//printf("%*.*lf\n", 12, 1, 123.45); //* 是占位符，可以后面再赋值
//    return 0;
//}

// scanf() 函数
int main() {
	//int score = 0;
	//printf("请输入分数: ");
	//scanf_s("%d", &score);
	//printf("分数为: %d\n", score);
	//int x;
	//float y;
	//double z;
	// 用户输入："         -13.45e12# 0"
	//scanf("%d", &x);
	//printf("%d\n", x);
    //scanf("%f", &y); //保存为单精度浮点型时可能会存在误差
	//printf("%f\n", y);
    //scanf("%lf", &z); //保存为双精度浮点型则可以较为精确的保存
	//printf("%lf\n", z);

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int d = 0;
    // 用户输入："1 2 3,6"
    //int ret = scanf("%d %d %d %d", &a, &b, &c, &d); //scanf函数读取数值时会忽略掉空格，继续识别后面的值，当读取到3，时，,不符合int类型就会停止读取后面的数字。
    //printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	//printf("读取了%d个数\n", ret);

	//char ch = 0;
	//char re = scanf(" %c", &ch); //char类型读取一个字符，读取到空格时，也会算作字符，并停止读取，如需忽略空格，则需要在%c前面加上空格。
	//printf("xxxxx%cyyyyy\n", ch);
	//printf("读取了%d个数\n", re);
	//char arr[6] = { 0 }; //数组最后的\0也会占用一个空间，所以最多存放5个字符
	//
    //scanf("%5s", arr); //arr数组读取字符串时，遇到空格时，会停止读取
	//printf("%s\n", arr);

	//int a; //局部变量不初始化值的话，会随机赋值，全局变量则默认为0
	//printf("%d", a);

	return 0;
}