#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 猜数字小游戏

//static void menu()
//{
//	printf("-----------------------------------------\n");
//	printf("------------     1. play     ------------\n");
//	printf("------------     0. exit     ------------\n");
//	printf("-----------------------------------------\n");
//}
//
//static void game()
//{
//	int random = rand() % 100 + 1;
//	int sum = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("请输入你的数字: ");
//		scanf("%d", &sum);
//		if (sum < random)
//		{
//			printf(" 猜小了 \n");
//		}
//		else if (sum > random)
//		{
//			printf(" 猜大了 \n");
//		}
//		else if (sum == random)
//		{
//			printf("%d = %d, 你猜对了！！\n", sum, random);
//			break;
//		}
//		count--;
//		printf("还有 %d 次机会\n", count);
//	}
//	if (count == 0)
//	{
//		printf("机会已用完，你输了！！\n");
//		printf("正确的值是 %d\n", random);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	//打印菜单
//	printf("***************** 猜数字 ****************\n");
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//求 10 个整数中最大值
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	int Array_length = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


// 计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0) // i == 偶数
//		{
//			sum = sum - 1.0 / i;
//		}
//		else            // i == 奇数
//		{
//			sum = sum + 1.0 / i;
//		}
//		
//	}
//	printf("%lf", sum);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int amount = 0;
//	for (i = 9; i <= 100; i += 2)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			amount++;
//		}
//	}
//	printf("\n%d", amount);
//	
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	int amount = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
//		{
//			printf("%d ", i);
//			amount++;
//		}
//	}
//	printf("\n%d ", amount);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int cache = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		for ( ; ; )
//		{
//			if (a % b != 0)
//			{
//				cache = a % b;
//				a = b;
//				b = cache;
//			}
//			else
//			{
//				printf("%d", b);
//				break;
//			}
//		}
//	}
//	else if (b > a)
//	{
//		for ( ; ; )
//		{
//			if (b % a != 0)
//			{
//				cache = b % a;
//				b = a;
//				a = cache;
//			}
//			else
//			{
//				printf("%d", a);
//				break;
//			}
//		}
//	}
//	else
//	{
//		printf("%d", a);
//	}
//	return 0;
//}




// 作业
//int main()
//{
//	char x[] = "abcdefg ";
//	char y[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
//	int arr[] = {1,2,(3,4),5};
//	int x_len = strlen(x);
//	int y_len = strlen(y);
//	int x_size = sizeof(x);
//	int y_size = sizeof(y);
//	printf("%d",sizeof(arr));
//	printf("x_len = %d, x_size = %d\ny_len = %d, y_size = %d", x_len, x_size,y_len, y_size);
//	return 0;
//}

//BC51 三角形判断
//int main() {
//    int a, b, c;
//    int flag = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) &&
//            (b - c < a)) {
//            if ((a == b) && (b == c)) {
//                printf("Equilateral triangle!\n");
//                flag = 1;
//            }
//            else if ((a == b && a != c && b != c) || (a == c && a != b && c != b) ||
//                (b == c && b != a && c != a)) {
//                printf("Isosceles triangle!\n");
//                flag = 1;
//            }
//            else {
//                printf("Ordinary triangle!\n");
//                flag = 1;
//            }
//        }
//        if (flag == 0) {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//打印乘法口诀表
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	while (1) {
//		int x = 0;
//		for (x = 1; x <= 9; x++)
//		{
//			a = x;
//			int y = 0;
//			for (y = 1; y <= 9; y++)
//			{
//				b = y;
//				if (a <= b)
//				{
//					sum = a * b;
//					printf("%d x %d = %d\n", a, b, sum);
//				}
//			}
//		}
//		break;
//	}
//	return 0;
//}


// 打印100~200之间的素数
// 质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i += 2)// 偶数不可能是素数，可以排除掉偶数的情况
	{
		int flag = 1;
		int j = 0;
		for (j = 3; j <= sqrt(i); j += 2)
		//此循环意义在于判断 i 能否被 非i 的整数整除
		//因为奇数不能被偶数整除，所以可以排除掉偶数作为除数的情况
		//又因为 i 的除数必定有一个除数大于等于它的平方根，所以可以排除掉两个数同时大于 i 的情况
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("\n%d", count);
	return 0;
}

//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;
//		int a = 0;
//		// for (a = 2; a < i; a++)
//		for (a = 3; a <= sqrt(i); a += 2)
//			//sqrt( i ): i 的平方根, 因为一个数的乘数永远有一个小于等于它的平方根，所以 a 恒定小于等于 sqrt(i)
//			// 假设 i=16，16 = 4 * 4 ,两个乘数总会有一个小于等于4 (即 sqrt ( 16 ))16的平方根
//		{
//			if (i % a == 0) //如果判断语句结果为真，则执行语句
//			{
//				flag = 0;
//				break;  //打断并跳出循环
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}