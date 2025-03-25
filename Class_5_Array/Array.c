#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// 数组在内存中是连续存放的
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int Arr_length = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	scanf("%d", &arr[i]); //向 arr[下标] 插入一个值。
//	//}
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]); //打印 arr[下标] 的值。
//	//}
//
//	for (i = 0; i < sizeof(arr) / 4; i++)
//	{
//		printf("&arr[%d] 地址 = %p\n", i, &arr[i]);
//	}
//	printf("%ld\n", Arr_length);
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
int main()
{
	int i = 9;
	int amount = 100 / i;
	printf("%d", amount);
	return 0;
}

//打印1000年到2000年之间的闰年
