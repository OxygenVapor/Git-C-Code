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

int set_Arr(int x[10], int y)
{
	for (int i = 0; i < y; i++)
	{
		x[i] = -1;
	}
	
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	set_Arr(arr, arr_size);
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}