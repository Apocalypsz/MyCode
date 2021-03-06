#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

//游戏菜单
void menu()
{
	printf("******************************************\n");
	printf("******************************************\n");
	printf("**********      1 开始游戏      **********\n");
	printf("**********      0 结束游戏      **********\n");
	printf("******************************************\n");
	printf("******************************************\n");
}

//游戏内容
void game()
{
	//存储数据（二维数组）
	char board[ROW][COL];

	//初始化棋盘
	InitBoard(board,ROW,COL);

	//打印棋盘，本质是打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家先走一步
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断赢了没
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑走一步
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断赢了没
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		{
		printf("玩家赢了\n");
		DisplayBoard(board, ROW, COL);
		}
	else if (ret == '#')
		{
		printf("电脑赢了\n");
		DisplayBoard(board, ROW, COL);
		}
	else if (ret == 'Q')
		{
		printf("平局\n");
		}

}






int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("玩游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");

			break;
		default:
			printf("选择错误，重新选择\n");

			break;





		}


	} while (input == 1);





	return 0;
}