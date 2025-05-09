#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test()
{
	printf("不嘻嘻\n");
	int n = 4 + 5;
	printf("%d\n", n);
}

void test1(int arr3[])
{

}

void test2(int arr4[3][5])
{

}

int main()
{
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	arr[i] = i + 1;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//int a = 3;
	//int b = 5;
	//int c = a + b;
	//test();
	//printf("嘻嘻\n");

	//int arr[10] = { 0 };
	//int num = 100;
	//char c = 'w';

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	arr[i] = i + 1;
	//}
	
	//int sum = 1;
	//printf("请输入你的数值: ");
	//int inp = 0;
	//scanf("%d", &inp);
	//printf("\n");

	//int cache = 1;
	//for (int x = 2; x <= inp; x++)
	//{
	//	cache *= x;
	//	sum += cache;
	//}
	//printf("结果为：%d\n", sum);

	////x86调试中，栈区内存从高到低分配，而数组的元素从低到高写入，且每个变量之间相隔两个int的空间，arr[12]刚好是 i 的地址，所以修改arr[12]时等同修改i，从而导致死循环
	////根本原因在于越界访问，重点是解决越界访问问题
	//int i = 0;//高地址
	////每个变量之间相隔两个int的空间
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//低地址。且数组的元素从低到高写入
	//
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;//arr[12]刚好是 i 的地址，所以修改 arr[12] 时等同修改 i ，从而导致死循环
	//	printf("hehe\n");
	//}

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[3][5] = { 1,2,3,4,5, 
					6,7,8,9,10, 
					11,12,13,14,15 };
	test1(arr1);
	test2(arr2);
	return 0;
}