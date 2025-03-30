#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

// 数组初始化
//int main()
//{
//	float arr[10] = { 0 };
//	int data0[3][5];
//	int data1[3][5] = { 1, 2, 3, 4, 5, 6, 7, };// 不完全初始化
//	int data2[3][5] = { 0 };//不完全初始化
//	int data3[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//完全初始化
//	int data4[3][5] = { {1,2}, {3,4}, {5,6} };//按组初始化
//	int data5[][5] = {1,2,3,4,5,6,7,8};
//	int data6[][5] = { {1,2}, {3,4}, {5,6,7} };
//
//	return 0;
//}

//数组下标
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d", arr[1][2]);// 下标从0开始
//
//	return 0;
//}

//输入和输出
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello bit!!!!!!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1; 
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(10);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//二分查找//
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d", &k);
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2; //避免大数溢出计算错误
//		if (k > arr[mid])//当K大于中值
//		{
//			left = mid + 1; //左边界 变为 mid + 1
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到 %d", k);
//	}
//	return 0;
//}