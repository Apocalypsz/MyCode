#pragma once




//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[][COL], int row, int col);

//�������壨ĿǰΪ����£�
void Computermove(char board[][COL], int row, int col);

//�ж���Ӯ
char Iswin(char board[][COL], int row, int col);

//�ж�ƽ��
int Isfull(char board[][COL], int row, int col);

