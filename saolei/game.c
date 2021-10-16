#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <stdlib.h>
#include <time.h>


void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	
	printf("-----扫雷游戏------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
	printf("-----扫雷游戏------\n");
}


void setmine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASYCOUNT;
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入坐标  2.检查坐标是否是0 3是0即失败，否则统计周围雷数量；
	int x = 0;
	int y = 0;
	int win = 0;
	//判断坐标合法性
	while(win < row*col-EASYCOUNT)
	{
		printf("请输入排查的坐标:>\n");
		scanf("%d %d", &x, &y);//x:(1-9)   y:(1-9)
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你死了\n");
				displayboard(mine,row,col);
				break;
			}
			else
			{
				//统计x,y周围雷数量
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//把数字变成字符
				displayboard(show, row, col);//显示排查结果
				win++;
			}
		}
		else
		{
			printf("坐标不合法，重新输入\n");
		}
	}
	if (win == row * col - EASYCOUNT)
	{
		printf("恭喜你排雷成功\n");
		displayboard(mine, row, col);//显示结果
	}
}