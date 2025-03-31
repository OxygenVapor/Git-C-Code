#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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

//输入数组的数值
int set_Arr(int x[10], int y, int z)
{
	for (int i = 0; i < y; i++)
	{
		x[i] = z;
	}
}

//打印数组
void print_Arr(int x[10], int y)
{
	for (int i = 0; i < y; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
}

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
void print_Arr_2d(int arr[3][5], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15 };
//	print_Arr_2d(arr, 3, 5);
//
//	return 0;
//}