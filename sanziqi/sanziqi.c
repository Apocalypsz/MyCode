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
	char board[ROW][COL];






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
			printf("����Ϸ");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");

			break;
		default:
			printf("ѡ���������ѡ��");

			break;





		}


	} while (input == 1);





	return 0;
}