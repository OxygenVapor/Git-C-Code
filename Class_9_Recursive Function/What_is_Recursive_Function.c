#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//递归：递推-回归
//
Fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n > 0)
	{
		return n * Fact(n - 1);
	}
}

void Print (int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d", n % 10);
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//Print(n);
//	//Q1
//	//printf("%d", Fun(n));
//	//Q2
//	printf("%d", Fib(n));
//	return 0;
//}

