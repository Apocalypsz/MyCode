#pragma once




//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[][COL], int row, int col);

//电脑下棋（目前为随机下）
void Computermove(char board[][COL], int row, int col);

//判断输赢
char Iswin(char board[][COL], int row, int col);

//判断平局
int Isfull(char board[][COL], int row, int col);

