#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//棋盘规格常量
#define ROW 3
#define COL 3
//函数声明
//期盼初始化函数
void InitBoard(char Board[ROW][COL], int row, int col);
void Displayboard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char isWin(char Board[ROW][COL],int row, int col);