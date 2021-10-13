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
	char board[ROW][COL];






}










int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("玩游戏");
			game();
			break;
		case 0:
			printf("退出游戏");

			break;
		default:
			printf("选择错误，重新选择");

			break;





		}


	} while (input == 1);





	return 0;
}