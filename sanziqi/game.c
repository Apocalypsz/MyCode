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
		//��ӡ������
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

		//��ӡ�����
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
	printf("�����:>\n");

	//ѭ��ֱ���������һ����������
	while (1)
	{
		printf("���������������");
		scanf("%d %d", &x, &y);

		//�ж�����Ϸ���,������������
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�����Ƿ�ռ��,��������1,1��ʼ����xy��Ҫ-1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				//�˳�ѭ��
				break;
			}
			else
			{
				printf("���걻ռ�ã���������");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
}

void Computermove(char board[][COL], int row, int col) 
{
	printf("������:>\n");
	
	while (1)
	{
		//���Ƶ�������µķ�Χ
		int x = rand() % row;
		int y = rand() % row;

		//�ж��Ƿ�ռ��
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
				return 0;//����û��
			}
		}
	}

	return 1;//��������
}





char Iswin(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж������Ƿ���Ӯ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж������Ƿ���Ӯ
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
		{
			return board[0][j];
		}
	} 
	//�ж϶Խ����Ƿ���Ӯ
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1]==board[2][0] && board[1][1] != ' ')
	{
		return board[0][2];
	}
	
	//�ж�ƽ��
	int ret =Isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	
	//����
	return 'C';
}

