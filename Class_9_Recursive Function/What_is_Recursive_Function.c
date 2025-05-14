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

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}

//在数学上，这一数列以如下递推的方法定义：
// F(0) = 0，F(1) = 1, F(n) = F(n - 1) + F(n - 2)（n ≥ 2，n ∈ N * ）
int Fib(int n)
{
	int i = 0;
	if (n < 2)
	{
		return n;
	}
	else
	{
		return (Fib(n - 1)) + (Fib(n - 2));
	}
}


int main()
{
	int n = 0;
	int i = 0;
	//while (scanf("%d", n) != EOF) { 
	//   //根据判断输出输入是否为空
	//	printf("%d", Fib(n));
	//}
	scanf("%d", &n);
	//Print(n);
	//Q1
	//printf("%d", Fun(n));
	//Q2
	printf("%d", Fib(n));
	return 0;
}