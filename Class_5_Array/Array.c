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

//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        for (int x = 0; x < a; x++) {
//            for (int j = 0; j < a; j++) {
//                if (((x == 1) && (j == 1 || j == 2))) {
//                    printf("  ");
//                }
//                else if (((x == 2) && (j == 2 || j == 1))) {
//                    printf("  ");
//                }
//                else {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC100 有序序列合并
//int main() {
//    int n, m;
//    int temp = 0;
//    int arr1[1000] = { 0 };
//    while (scanf("%d %d", &n, &m) != EOF) {
//        for (int x = 0; x < n + m; x++) {
//            scanf("%d", &arr1[x]);
//        }
//        for (int y = 1; y <= n + m; y++) {
//            for (int z = 0; z < n + m - y; z++) {
//                if (arr1[z] > arr1[z + 1]) {
//                    temp = arr1[z];
//                    arr1[z] = arr1[z + 1];
//                    arr1[z + 1] = temp;
//                }
//            }
//        }
//        for (int i = 0; i < n + m; i++) {
//            printf("%d ", arr1[i]);
//        }
//        break;
//    }
//    return 0;
//}

//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
//int main()
//{
//	int arr[10] = { 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d ", sum / size);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int size = sizeof(arr1) / sizeof(arr1[0]);
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("arr1 = ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2 = ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}