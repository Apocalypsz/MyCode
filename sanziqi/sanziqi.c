#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

//��Ϸ�˵�
void menu()
{
	printf("******************************************\n");
	printf("******************************************\n");
	printf("**********      1 ��ʼ��Ϸ      **********\n");
	printf("**********      0 ������Ϸ      **********\n");
	printf("******************************************\n");
	printf("******************************************\n");
}

//��Ϸ����
void game()
{
	//�洢���ݣ���ά���飩
	char board[ROW][COL];

	//��ʼ������
	InitBoard(board,ROW,COL);

	//��ӡ���̣������Ǵ�ӡ��������
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������һ��
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�Ӯ��û
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//������һ��
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�Ӯ��û
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		{
		printf("���Ӯ��\n");
		DisplayBoard(board, ROW, COL);
		}
	else if (ret == '#')
		{
		printf("����Ӯ��\n");
		DisplayBoard(board, ROW, COL);
		}
	else if (ret == 'Q')
		{
		printf("ƽ��\n");
		}

}






int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");

			break;
		default:
			printf("ѡ���������ѡ��\n");

			break;





		}


	} while (input == 1);





	return 0;
}