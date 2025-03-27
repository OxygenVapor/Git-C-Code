#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 猜数字小游戏
 


//int main()
//{
//	int i = 0;
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	int i = rand() % 100 + 1;
//	scanf("%d", &num);
//	if (num == i)
//	{
//		printf("%d = %d，你猜对了！！", num, i);
//	}
//	printf("%d != %d，你猜错了！！", num, i);
//	return 0;
//}

static void menu()
{
	printf("-----------------------------------------\n");
	printf("------------     1. play     ------------\n");
	printf("------------     0. exit     ------------\n");
	printf("-----------------------------------------\n");
}

static void game()
{
	int random = rand() % 100 + 1;
	int sum = 0;
	int count = 5;
	while (count)
	{
		printf("请输入你的数字: ");
		scanf("%d", &sum);
		if (sum < random)
		{
			printf(" 猜小了 \n");
		}
		else if (sum > random)
		{
			printf(" 猜大了 \n");
		}
		else if (sum == random)
		{
			printf("%d = %d, 你猜对了！！\n", sum, random);
			break;
		}
		count--;
		printf("还有 %d 次机会\n", count);
	}
	if (count == 0)
	{
		printf("机会已用完，你输了！！\n");
		printf("正确的值是 %d\n", random);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//打印菜单
	printf("***************** 猜数字 ****************\n");
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}

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