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
	
	printf("-----ɨ����Ϸ------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
	printf("-----ɨ����Ϸ------\n");
}


void setmine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASYCOUNT;
	while (count)
	{
		//��������±�
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
	//1.��������  2.��������Ƿ���0 3��0��ʧ�ܣ�����ͳ����Χ��������
	int x = 0;
	int y = 0;
	int win = 0;
	//�ж�����Ϸ���
	while(win < row*col-EASYCOUNT)
	{
		printf("�������Ų������:>\n");
		scanf("%d %d", &x, &y);//x:(1-9)   y:(1-9)
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("������\n");
				displayboard(mine,row,col);
				break;
			}
			else
			{
				//ͳ��x,y��Χ������
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//�����ֱ���ַ�
				displayboard(show, row, col);//��ʾ�Ų���
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�����������\n");
		}
	}
	if (win == row * col - EASYCOUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
		displayboard(mine, row, col);//��ʾ���
	}
}