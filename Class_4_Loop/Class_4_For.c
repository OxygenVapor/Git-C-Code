#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 猜数字小游戏
 


//int main()
//{
//	int i = 0;
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	int i = rand() % 100 + 1;
//	scanf("%d", &num);
//	if (num == i)
//	{
//		printf("%d = %d，你猜对了！！", num, i);
//	}
//	printf("%d != %d，你猜错了！！", num, i);
//	return 0;
//}

static void menu()
{
	printf("-----------------------------------------\n");
	printf("------------     1. play     ------------\n");
	printf("------------     0. exit     ------------\n");
	printf("-----------------------------------------\n");
}

static void game()
{
	int random = rand() % 100 + 1;
	int sum = 0;
	int count = 5;
	while (count)
	{
		printf("请输入你的数字: ");
		scanf("%d", &sum);
		if (sum < random)
		{
			printf(" 猜小了 \n");
		}
		else if (sum > random)
		{
			printf(" 猜大了 \n");
		}
		else if (sum == random)
		{
			printf("%d = %d, 你猜对了！！\n", sum, random);
			break;
		}
		count--;
		printf("还有 %d 次机会\n", count);
	}
	if (count == 0)
	{
		printf("机会已用完，你输了！！\n");
		printf("正确的值是 %d\n", random);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//打印菜单
	printf("***************** 猜数字 ****************\n");
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}