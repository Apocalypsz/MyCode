#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



void menu()
{
	printf("************************\n");
	printf("*********1.play*********\n");
	printf("*********0.exit*********\n");
	printf("************************\n");
}


void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');

	//打印棋盘
	displayboard(show,ROW,COL);

	//布置地雷
	setmine(mine, ROW, COL);
	displayboard(mine, ROW, COL);//查看地雷生成

	//排查地雷
	findmine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}