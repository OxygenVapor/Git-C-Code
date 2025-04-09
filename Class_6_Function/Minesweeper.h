#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

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
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", q[i][j]);
		}
		printf("\n");
	}
}

//
void Set_Mine(char Array[ROWS][COLS])
{
	time_t t;
	srand((unsigned)time(&t));
	int Row = 0;
	int Col = 0;
	int count = EASY_COUNT;

	//while (count)
	//{
	//	int Row = rand() % ROW + 1;
	//	int Col = rand() % COL + 1;
	//	if (Array[Row][Col] != '1')
	//	{
	//		Array[Row][Col] = '1';
	//		count--;
	//	}
	//}
	for (int i = 0; i < EASY_COUNT; i++)
	{
		int Row = rand() % ROW + 1;
		int Col = rand() % COL + 1;
		if (Array[Row][Col] != '1')
		{
			Array[Row][Col] = '1';
		}
	}
}