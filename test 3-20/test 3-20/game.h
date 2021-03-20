#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void Initboard(char arr[ROWS][COLS], int row, int col, char a);
void Displayboard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);
void ClearMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col,int count);