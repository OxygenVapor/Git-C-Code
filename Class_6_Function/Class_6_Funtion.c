#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void print(void)
//{
//	printf("Hello, world!!!");
//}
//
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d%d", &a, &b);
//	//int c = Add(a, b);
//	//printf("%d\n", c);
//	//print();
//	int try = test();
//	printf("%d", try);
//	return 0;
//}

//打印数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr_size = sizeof(arr) / sizeof(arr[0]);
//	print_Arr(arr, arr_size);
//	set_Arr(arr, arr_size, -1);
//	print_Arr(arr, arr_size);
//	return 0;
//}

//打印二维数组
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15 };
//	print_Arr_2d(arr, 3, 5);
//
//	return 0;
//}

//计算闰年
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int day = get_day_of_month(year, month);
//	printf("%d 年 %d 月有 %d 天\n", year, month, day);
//	return 0;
//}

//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印字符的个数
//	//43 2 1
//	return 0;
//}


//作业

//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//int bin_search(int arr[],int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1; 
//		}
//		else if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	int key = 0;
//	scanf("%d", &key);
//	int subscript = bin_search(arr, left, right, key);
//	printf("%d", subscript);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void Multiplication(int x)
//{
//	int count = 1;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = i; j <= 9; j++)
//		{
//			if (j < i)
//			{
//				continue;
//			}
//			if (count > x)
//			{
//				printf("\n");
//				count = 1;
//			}
//			printf("%d x %d = %d ", i, j, i * j);
//			count++;
//		}
//
//	}
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	Multiplication(x);
//}

//判断闰年
//void is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d 是闰年", year);
//	}
//	else
//	{
//		printf("%d 不是闰年", year);
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//
//	return 0;
//}

//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。

//int is_prime(int min,int max)
//{
//	int count = 0;
//	for (int i = min + 1; i < max; i += 2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d ", count);
//
//}
//
//int main()
//{
//	int min = 100;
//	int max = 200;
//	is_prime(min, max);
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	//init(arr1, size);
//	print_arr(arr1, size);
//	reverse(arr1, size);
//	print_arr(arr1, size);
//	return 0;
//}