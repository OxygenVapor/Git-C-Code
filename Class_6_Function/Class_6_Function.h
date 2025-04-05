#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//输入数组的数值
void set_Arr(int x[10], int y, int z)
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

//打印二维数组
void print_Arr_2d(int arr[3][5], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//计算闰年
int Leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//计算月份天数
int get_day_of_month(int year, int month)
{
	int m[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leap = Leap_year(year);
	if (leap == 1)
	{
		m[2] = 29;
		return m[month];
	}
	else
	{
		return m[month];
	}
}

//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
void init(int arr1[10], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = 0;
	}
}

void print_arr(int arr[10], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[10], int size)
{
	int temp = 0;
	int arr_t[10] = { 0 };
	for (int i = 0; i < size; i++)
	{
		arr_t[i] = arr[i];
	}
	while (1)
	{
		for (int x = size - 1; x >= 0; x--)
		{
			arr[temp] = arr_t[x];
			temp++;
		}
		break;
	}
}