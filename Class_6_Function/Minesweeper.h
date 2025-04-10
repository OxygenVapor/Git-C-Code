#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 10

void menu()
{
	printf("\n+++++++++++扫雷+++++++++++\n");
	printf("1：开始游戏    0，退出游戏\n");
	printf("++++++++++++++++++++++++++\n");

}

//初始化棋盘
void Init_Board(char q[ROWS][COLS], int rows, int cols, char init_char)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			q[i][j] = init_char;
		}
	}
}

//显示棋盘
void Display_Board(char q[ROWS][COLS], int row, int col)
{
	printf("\n");
	printf("  ");
	for (int i = 1; i <= row; i++)
	{
		printf("\033[96;5m%d \033[0m", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("\033[91;5m%d \033[0m", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", q[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//布置雷
void Set_Mine(char Array[ROWS][COLS])
{
	time_t t;
	srand((unsigned)time(&t));
	int Row = 0;
	int Col = 0;
	int count = MINE;

	while (count)
	{
		int Row = rand() % ROW + 1;
		int Col = rand() % COL + 1;
		if (Array[Row][Col] != '1')
		{
			Array[Row][Col] = '1';
			count--;
		}
	}
}
//排雷
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int max_count = ROW * COL - 10;
	int x, y;
	while (count < max_count)
	{
		printf("请输入你要排雷的坐标\nX(1~9) Y(1~9): ");
		scanf("%d%d", &x, &y);
		if (x > 0 && x < 10 && y > 0 && y < 10)
		{
			switch (mine[x][y])
			{
			case '0':
			{
				int mine_n = 0;
				int i = 0;
				for (i = x - 1; i <= x + 1; i++)
				{
					int j = 0;
					for (j = y - 1; j <= y + 1; j++)
					{
						if (mine[i][j] == '1')
						{
							mine_n++;
						}
					}
				}
				show[x][y] = mine_n + '0';
				Display_Board(show, ROW, COL);
				break;
			}
			case '1':
			{
				printf("\n你被炸了！游戏结束\n");
				Display_Board(mine, ROW, COL);
				main();
				break;
			}
			}
			count++;
		}
		else
		{
			printf("输入坐标有误，请重新输入");
		}
	}
}
