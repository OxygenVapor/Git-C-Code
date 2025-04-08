#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void menu() 
{
	printf("\n+++++++++++扫雷+++++++++++\n");
	printf("1：开始游戏    0，退出游戏\n");
	printf("++++++++++++++++++++++++++\n");
}

void game()
{
	int mine_size[11][11] = { 0 };
	int mine_sum[11][11] = { 0 };
	time_t t;
	srand((unsigned) time(&t));
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("\n请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1: 
		{
			printf("开始游戏\n");
			break;
		}
		default:
			printf("请重新输入正确的值\n");
			break;
		}
	} while (input);
}

int main() 
{
	char str[] = {0};
	test();
	return 0;
}