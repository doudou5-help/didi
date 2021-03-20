#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char arr[ROWS][COLS], int row, int col, char a)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			arr[i][j] =	a;
		}
	}
}


void Displayboard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= COL; j++)
	{
		printf(" %d ", j);
	}
	printf("\n");
	for (i = 1; i <=ROW; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <=COL; j++)
		{

			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
		if (arr[x][y] != '0')
		{
			arr[x][y] = '0';
			count=count-1;
		}
	}
	
}

void ClearMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col,int count)
{
	int sum = 0;
	int m = 0;
	int i, j;
	int x, y;
	while (count)
	{
		printf("��ѡ�񣺡�\n");
		scanf("%d%d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x == 0 || x > 9 || y == 0 || y > 9)
		{
			printf("�����������������\n");
			break;
		}
		//�ж�ѡ���Ƿ�����
		if (arr1[x][y] == '0')
		{
			printf("��ϲ�㣬�ɹ����ף���Ϸ����\n");
			count = 0;
		}
		else
		{
			m = 48;
			for (i = x - 1; i < x + 2; i++)
			{
				for (j = y - 1; j < y + 2; j++)
				{
					if (arr1[i][j] == '0')
					{
						m = m+1;
					}
				}
			}
			arr2[x][y] = m;
			sum += 1;
		}
		system("CLS");
		Displayboard(arr2, ROW, COL);
		if (ROW*COL - sum == count)
		{
			printf("��ϲ����ʤ��\n");
			break;
		}
	}
}