#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
	int x = 0;
	if (n >= 2)
	{
		int tmp1 = 1;
		int tmp2 = 0;
		for (int i = 2; i <= n; i++)
		{
			x = tmp1 + tmp2;
			tmp2 = tmp1;
			tmp1 = x;
		}
		return x;
	}
	else
	{
		return n;
	}
}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		printf("%d\n", Fib(n));
//	}
//	return 0;
//}

//Recursive
int Fib_Rec(int n)
{
	if (n >= 2)
	{
		return (Fib_Rec(n - 1)) + (Fib_Rec(n - 2));
	}
	else
	{
		return n;
	}
}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{ 
//		printf("%d\n", Fib_Rec(n));
//	}
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现
int Power(int n, int k)
{
	if (k > 1)
	{
		return n * Power(n, k - 1);
	}
	else if (k <= -1)
	{
		return n * Power(n, k + 1);
	}
	else
	{
		return n;
	}
}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	while (scanf("%d %d", &n, &k) == 2)
//	{
//		printf("%d\n", Power(n,k));
//	}
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
int DigitSum(int n)
{
	if (n > 9)
	{
		return (n % 10) + (DigitSum(n / 10));
	}
	else
	{
		return n;
	}
}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n >= 0)
//		{
//			printf("%d\n", DigitSum(n));
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
int Factorial_Rec(int n)
{
	if (n > 1)
	{
		return n * Factorial_Rec(n - 1);
	}
	else
	{
		return 1;
	}
}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n >= 0)
//		{
//			printf("%d\n", Factorial_Rec(n));
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

int Factorial(int n)
{
	int tmp = 1;
	for (int i = 2; i <= n; i++)
	{
		tmp = i * tmp;
	}
	return tmp;
}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n >= 0)
//		{
//			printf("%d\n", Factorial(n));
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

void Prints(int n)
{
	if (n > 9)
	{
		Prints(n / 10);
	}
	printf("%d ", n % 10);
}
// int main()
// {
// 	int n = 0;
// 	while (scanf("%d", &n) == 1)
// 	{
// 		Prints(n);
// 		printf("\n");
// 	}
// 	return 0;
// }

//int count = 0;
int Fib2(int n) {
	if (n == 3)
//		count++;
	if (n <= 2)
		return 1;
	else
		return Fib2(n-1) + Fib2(n-2);
}

// int main() {
// 	int n = 0;
// 	scanf("%d", &n);
// 	int r = Fib2(n);
// 	printf("%d\n", r);
// 	printf("%d\n", count);
// 	return 0;
// }


long long Fib3(long long n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	long long a = 1, b = 1, c = 0;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {
	long long n = 0;
	scanf("%lld", &n);
	long long r = Fib3(n);
	printf("%lld\n", r);
	return 0;
}


