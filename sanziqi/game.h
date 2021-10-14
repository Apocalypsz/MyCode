#pragma once




//头文件的包含
#include <stdio.h>
#define ROW 10
#define COL 10

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);