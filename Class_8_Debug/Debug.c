#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test()
{
	printf("不嘻嘻\n");
	int n = 4 + 5;
	printf("%d\n", n);
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
	
	int sum = 1;
	printf("请输入你的数值: ");
	int inp = 0;
	scanf("%d", &inp);
	printf("\n");

	int cache = 1;
	for (int x = 2; x <= inp; x++)
	{
		cache *= x;
		sum += cache;
	}
	printf("结果为：%d\n", sum);
	return 0;
}