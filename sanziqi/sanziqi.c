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




}






int main()
{
	int input = 0;
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