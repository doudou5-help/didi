#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//���̹����
#define ROW 3
#define COL 3
//��������
//���γ�ʼ������
void InitBoard(char Board[ROW][COL], int row, int col);
void Displayboard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char isWin(char Board[ROW][COL],int row, int col);