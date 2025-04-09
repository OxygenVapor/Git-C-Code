#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Minesweeper.h"



void menu() 
{
	printf("\n+++++++++++扫雷+++++++++++\n");
	printf("1：开始游戏    0，退出游戏\n");
	printf("++++++++++++++++++++++++++\n");
}



void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息
	//初始化棋盘
	Init_Board(mine, ROWS, COLS, '0');
	//Display_Board(mine, ROW, COL);
	Init_Board(show, ROWS, COLS, '*');
	//Display_Board(show, ROW, COL);
	//布置雷
	Set_Mine(mine);
	Display_Board(mine, ROW, COL);

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
			game();
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