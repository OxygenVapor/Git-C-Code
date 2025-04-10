#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Minesweeper.h"


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
	//排查雷
	Find_Mine(mine, show, ROW, COL);


}

int main() 
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
			printf("\n退出游戏\n");
			exit(0);
		case 1:
		{
			printf("\n开始游戏\n");
			game();
			break;
		}
		default:
			printf("\n请重新输入正确的值\n");
			break;
		}
	} while (input);
	return 0;
}