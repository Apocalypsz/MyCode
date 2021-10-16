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
	char mine[ROWS][COLS] = { 0 };//��Ų��õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');

	//��ӡ����
	displayboard(show,ROW,COL);

	//���õ���
	setmine(mine, ROW, COL);
	displayboard(mine, ROW, COL);//�鿴��������

	//�Ų����
	findmine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}