#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void Displayboard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row-1)
		{
			printf("---|---|---\n");
		}
	}
}

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	
	while (1)
	{
		//玩家下
		int x, y;
		printf("玩家走\n");
		printf("请输入要下的坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 & x <= ROW & y <= COL & y >= 1)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入不合法，请重新输入\n");
		}
	}
}
void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x, y,c;
	c = 1;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}

}
//判断输赢函数
char isWin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row-2; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			//斜判断
			if ((Board[i][j] == Board[i + 1][j + 1]) && (Board[i][j] == Board[i + 2][j + 2]) && (Board[i][j] != ' '))
			{
				//return Board[i][j];
				if (Board[i][j] == '*')
				{
					return '*';
				}
				else
				{
					return '#';
				}
			}
			//行判断
			if ((Board[i][j] == Board[i][j + 1]) && (Board[i][j] == Board[i][j + 2]) && (Board[i][j] != ' '))
			{
				//return Board[i][j];
				if (Board[i][j] == '*')
				{
					return '*';
				}
				else
				{
					return '#';
				}
			}
			//列判断
			if ((Board[i][j] == Board[i+1][j])&&(Board[i][j] == Board[i+2][j])&&(Board[i][j]!=' '))
			{
				//return Board[i][j];
				if (Board[i][j] == '*')
				{
					return '*';
				}
				else
				{
					return '#';
				}
			}
			//反斜判断
			if ((i > 3)&&j > 3)
			{
				if ((Board[i][j] == Board[i + 1][j - 1]) && (Board[i][j] == Board[i + 2][j - 2]) && (Board[i][j] != ' '))
				{
					//return Board[i][j];
					if (Board[i][j] == '*')
					{
						return '*';
					}
					else
					{
						return '#';
					}
				}
			}
		}
	}
	i = 0;
	j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	return'Q';
}
//{
//	int ret = 0;
//	int i = 0;
//	int j = 0;
////	for (i = 0; i < row; i++)
////	{
////		if ((Board[i][j] == '*')& (Board[i][j+1] == '*')& (Board[i][j+2] == '*'))
////		{
////			ret =1;
////			break;
////		}
////		j = 0;
////		if ((Board[i][j] == '#')&( Board[i][j+1] == '#')&( Board[i][j+2] == '#'))
////		{
////			ret =2;
////			break;
////		}
////	}
////	for (j = 0; j < col; j++)
////	{
////		if ((Board[i][j] == '*')&(Board[i+1][j] == '*')&(Board[i+2][j] == '*'))
////		{
////			ret = 1;
////			break;
////		}
////		if ((Board[i][j] == '#')& (Board[i+1][j] == '#')& (Board[i+2][j] == '#'))
////		{
////			ret = 2;
////			break;
////		}
////	}
////	if ((Board[i][j] == '*')& (Board[i-1][j-1] == '*')& (Board[i-2][j-2] == '*'))
////	{
////		ret = 1;
////	}
////	if ((Board[i][j] == '#')& (Board[i-1][j-2] == '#')&( Board[i-1][j-2] == '#'))
////	{
////		ret = 2;
////	}
////	i = 0; 
////	j = 2;
////	if ((Board[i][j] == '*')&( Board[i+1][j-1] == '*')& (Board[i+2][j-2] == '*'))
////	{
////		ret = 1;
////	}
////	if ((Board[i][j] == '#')&( Board[i+1][j-1] == '#')& (Board[i+2][j-2] == '#'))
////	{
////		ret = 2;
////	}
////	for (i = 0; i < row; i++)
////	{
////		for (j = 0; j < col; j++)
////		{
////			if (Board[i][j] == ' ')
////			{
////				ret = 3;
////				break;
////			}
////		}
////	}
////	if (ret == 1)
////	{
////		return '*';
////	}
////	else if (ret == 2)
////	{
////		return '#';
////	}
////	else if (ret == 3)
////	{
////		return "Q";
////	}
////	else
////	{
////		return 'c';
////	}
//}
