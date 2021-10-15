#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印棋子行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		//打印间隔行
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---", board[i][j]);
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}

}

void Playermove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");

	//循环直至玩家输入一个可行坐标
	while (1)
	{
		printf("请输入下棋的坐标");
		scanf("%d %d", &x, &y);

		//判断坐标合法性,在棋盘区间内
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//坐标是否被占用,玩家坐标从1,1开始，则xy需要-1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				//退出循环
				break;
			}
			else
			{
				printf("坐标被占用，重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
}

void Computermove(char board[][COL], int row, int col) 
{
	printf("电脑走:>\n");
	
	while (1)
	{
		//限制电脑随机下的范围
		int x = rand() % row;
		int y = rand() % row;

		//判断是否被占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}

	return 1;//棋盘满了
}





char Iswin(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断三行是否能赢
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//判断三列是否能赢
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
		{
			return board[0][j];
		}
	} 
	//判断对角线是否能赢
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1]==board[2][0] && board[1][1] != ' ')
	{
		return board[0][2];
	}
	
	//判断平局
	int ret =Isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	
	//继续
	return 'C';
}

