#pragma
#include <stdio.h>

#define EASYCOUNT 10//���Ѷ��£�����10����
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void initboard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void displayboard(char board[ROWS][COLS], int row, int col);

//���õ���
void setmine(char mine[ROWS][COLS], int row, int col);

//�Ų����
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);